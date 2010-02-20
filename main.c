# include "main.h"
# include <sys/time.h>
# include <stdlib.h>
# include <stdio.h>
# include <signal.h>

void alarmHandler();

int main(void)
{
  char * line = NULL;
  size_t len = 0;
  ssize_t read;
  regex_t * __restrict compiled_edge = (regex_t *) malloc(sizeof (regex_t));
  (void) regcomp(compiled_edge,"^e (.) (.)", REG_EXTENDED);   // Compilacion de RegEx para vertices  
  regex_t * __restrict compiled_num = (regex_t *) malloc(sizeof (regex_t)); 
  (void) regcomp(compiled_num, "^p", REG_EXTENDED);   //  Compilacion de RegEx para numero de vertices
  char * dump = (char *) malloc(sizeof(char)*12);
  int d1;  
  int d2;
  int vertex_num;
  // Comienza lectura de la entrada estandar
  while ((read = getline(&line, &len, stdin)) != -1) {
    if (regexec(compiled_num, line, 0, NULL, 0) == 0) {
      sscanf(line,"%c %s %d %d", dump, dump,&vertex_num,&d2);
      break;
      // ahora vertex_num contiene numero de vertices en grafo
    }
  }
  // Inicializacion de arreglo de adyacencias
  row_vertex main_col[vertex_num];
  int i;
  for (i = 0; i < vertex_num ; i++) {
    main_col[i].pt = NULL;
    main_col[i].vertex = i; 
    main_col[i].color = -1; // Color inicial
    main_col[i].color_around = (int *) malloc(sizeof(int)*vertex_num); 
    int j;
    for(j = 0; j < vertex_num; j++) 
      // Inicialización de arreglo de colores adyacentes
      main_col[i].color_around[j] = 0;
  }
  
  // Lectura del resto del archivo
  while ((read = getline(&line, &len, stdin)) != -1) {
    if (regexec(compiled_edge, line, 0, NULL, 0) == 0) { 
      sscanf(line,"%c %d %d", dump,&d1,&d2);
      d1 -= 1;
      d2 -= 1;
      if (d1 != d2) {
        // Arco d1 --> d2
        linked_list * adjacent1 = (linked_list *) malloc(sizeof(linked_list)); 
        adjacent1->vertex = d2;
        // Insercion de elementos de lista por la izquierda
        adjacent1->next = main_col[d1].pt;
        main_col[d1].pt = (struct linked_list *) adjacent1;
        // Arco d2 --> d1
        linked_list * adjacent2 = malloc(sizeof(linked_list)); 
        adjacent2->vertex = d1;
        // Insercion de elementos de lista por la izquierda
        adjacent2->next = main_col[d2].pt;
        main_col[d2].pt = (struct linked_list *) adjacent2;
      }
    }
  }
  tuple * deg_vert = (tuple *) malloc(sizeof(tuple)*vertex_num);
  degree(main_col, vertex_num, deg_vert);
  pair result;  // Par clique-coloración
  int upper_bound;
  int lower_bound;

  double TIEMPOINICIAL;
  double TIEMPOFINAL;
  struct timeval t_p;
  //COMIENZA ALGORITMO
  if (!gettimeofday(&t_p, NULL))
    TIEMPOINICIAL = (double) t_p.tv_sec + ((double) t_p.tv_usec)/1000000.0;
  else
    printf("\n mal tiempo \n");

  signal(SIGALRM, alarmHandler);
  alarm(300); // 5 minutos medidos en segundos
  // Se obtiene cota superior
  result = dsatur(main_col, deg_vert, vertex_num, -1);
  upper_bound = result.coloring;
  // Se obtiene cota inferior
  lower_bound = -1;
  int k;
  int j;
  // miembros tentativos
  int * members;
  int * cromatic_num = NULL; //Número cromático
  for(i = 0; i < vertex_num; i++) {
    main_col_init(main_col, vertex_num);
    result = dsatur(main_col, deg_vert, vertex_num, i);
    if (result.clique > lower_bound) {
      lower_bound = result.clique;
      members = result.members;
      continue;
    }
    free(result.members);
  }

  printf("Resultados de Brelaz+interchange \n");
  printf("Cota superior = %d \n", upper_bound);
  printf("Cota inferior = %d \n", lower_bound);
  if (lower_bound == upper_bound)
    printf("Número cromático = %d \n", upper_bound);
  else {
    int * vertices;
    vertices = get_vertices(members, vertex_num);
    free(members);
    cromatic_num = (int *) implicit_enum(main_col, lower_bound, upper_bound, vertices, vertex_num);
    printf("Resultado de enumeración implícita \n");
    printf("Número cromático = %d \n", *cromatic_num);
    free(cromatic_num);
    free(vertices);
  }

  // TERMINA ALGORITMO
  
  if (!gettimeofday(&t_p, NULL))
    TIEMPOFINAL =  (double) t_p.tv_sec + ((double) t_p.tv_usec)/1000000.0;
  else
    printf("\n mal tiempo \n");
  
  printf("Tiempo en segundos de ejecución del programa: %1.4f \n", (TIEMPOINICIAL - TIEMPOFINAL)*-1);

  free_row_vertex(main_col, vertex_num);
  free(dump);
  free(compiled_num);
  free(compiled_edge);
  free(line);
  free(deg_vert);
  return EXIT_SUCCESS;
}


void alarmHandler() {
  printf("Se ha excedido el límite de 5 minutos \n");
  exit(0);
}

