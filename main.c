# include "main.h"

int main(void)
{
  char * line = NULL;
  size_t len = 0;
  ssize_t read;
  regex_t * __restrict compiled_edge = malloc(sizeof (regex_t));
  regcomp(compiled_edge,"^e (.) (.)", REG_EXTENDED);   // Compilacion de RegEx para vertices  
  regex_t * __restrict compiled_num = malloc(sizeof (regex_t)); 
  regcomp(compiled_num, "^p", REG_EXTENDED);   //  Compilacion de RegEx para numero de vertices
  char * dump = malloc(sizeof(char)*12);
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
    main_col[i].color_around = malloc(sizeof(int)*vertex_num); 
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
        linked_list * adjacent1 = malloc(sizeof(linked_list)); 
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
      else {
        linked_list * adjacents = malloc(sizeof(linked_list)); 
        adjacents->vertex = d2;
        // Insercion de elementos de lista por la izquierda
        adjacents->next = main_col[d1].pt;
        main_col[d1].pt = (struct linked_list *) adjacents;
      }
    }
  }
  tuple * deg_vert = (tuple *) malloc(sizeof(tuple)*vertex_num);
  //  printf("aqui %d \n", sizeof deg_vert);
  degree(main_col, vertex_num, deg_vert);
  dsatur(main_col, deg_vert, vertex_num);
  free(dump);
  free(compiled_num);
  free(compiled_edge);
  free(line);
  return EXIT_SUCCESS;
}


/*****************************************/
/* EL CEMENTERIO DE LOS CÓDIGOS          */
/* RESPETE A LOS MUERTOS, NO LOS BORRE ! */
/*****************************************/

  /* for(i = 0; i < vertex_num; i++) { */
  /*   printf("adyacente a %d \n", main_col[i].vertex); */
  /*   row_vertex * aux =(row_vertex *)  main_col[i].pt; */
  /*   while (aux != NULL) { */
  /*     printf("%d \n",aux->vertex); */
  /*     aux = (row_vertex *) aux->pt; */
  /*   } */
  /* } */

  /* int i; */
  /* for(i = 0; i < nmemb; i++) { */
  /*   printf("Vertice - Grado \n"); */
  /*   printf("%d %d \n", deg_vert[i].vertex,deg_vert[i].degree); */
  /* } */


  /* for(i = 0; i < vertex_num; i++) { */
  /*   printf("vertice - grado \n"); */
  /*   printf("%d %d \n", deg_vert[i].vertex, deg_vert[i].degree); */
  /* }     */
