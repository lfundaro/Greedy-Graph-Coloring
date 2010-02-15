#include "main.h"

pair dsatur(row_vertex main_col[], tuple deg_vert[], int vertex_num, int start_point) {
  // Ordenamiento decreciente de grados de vertices
  tuple * base = &deg_vert[0];  // Apuntador a primer elemento
  size_t nmemb = vertex_num; // Número de elementos
  size_t size = sizeof deg_vert[0]; // Tamaño de un elemento
  qsort(base, nmemb, size, compare);
  int last_color; // Último color utilizado que sea mayor
  int num_colored = 0; // Número de vértices coloreados
  int used_colors[vertex_num]; 
  int upper_bound = 0; //Coloración lograda 
  int lower_bound = 0; //Clique máxima encontrada
  int i; 

  for(i = 0; i < vertex_num; i++) 
    used_colors[i] = 0;   
  int v_i;
  // Arreglo de grados de saturación
  int * satur_degree = malloc(sizeof(int)*vertex_num);
  // Inicialización de estructura de grados de saturación
  for(i = 0; i < vertex_num; i++) 
    satur_degree[i] = 0;
  
  // Coloración del primer vértice
  if (start_point == -1) //Se parte del vértice de grado mayor
    v_i = get_max_degree(base,main_col,vertex_num);
  else
    v_i = start_point;

  main_col[v_i].color = 0;
  last_color = 0;
  used_colors[last_color] = 1;  //Color se marca como usado
  lower_bound++;
  num_colored++;
  // El grado de saturación de un vértice coloreado ya no nos 
  // interesa, por lo tanto lo ponemos en -1
  satur_degree[v_i] = -1;  
  // Actualizar saturación de vecinos
  update_satur(main_col, satur_degree, v_i, last_color);
  // Pasos 3, 4, 5 de DSATUR, agregando intercambio
  int max; //Lleva la máxima saturación
  int found; //Dice dónde se encontró vértice de máx. saturación
  while (num_colored < vertex_num) {
    max = -1; //Elemento neutro de saturación;
    for(i = 0; i < vertex_num; i++) {
      if (max < satur_degree[i]) {
        max = satur_degree[i];
        found = i;
      }
    }
    //Busco repeticiones del mayor
    if (repeated(max, satur_degree, vertex_num)) {
      v_i = get_max_degree(base,main_col,vertex_num);
      last_color = leastp_color(main_col, v_i, vertex_num);
      main_col[v_i].color = last_color;
    }
    else {
      v_i = found;
      last_color = leastp_color(main_col, v_i, vertex_num);
      main_col[v_i].color = last_color;
    }

    if (used_colors[last_color] == 0) //Coloración de clique
      lower_bound++;
    else {
      if (start_point != -1) { //Hacemos retornar el algoritmo
        pair early_result;
        early_result.clique = lower_bound;
        return early_result;
      }
    }

    used_colors[last_color] = 1;
    satur_degree[v_i] = -1;  
    update_satur(main_col, satur_degree, v_i, last_color);
    num_colored++; 
  } 
  
  for(i = 0; i < vertex_num; i++) {
    if (used_colors[i] == 1)
      upper_bound++;
  }
  pair result;
  result.clique = lower_bound;
  result.coloring = upper_bound;
  return result;
}

//Determina repeticiones en dsatur_degree
int repeated(int max, int * satur_degree, int vertex_num) {
  int i;
  for(i = 0; i < vertex_num; i++) {
    if (max == satur_degree[i])
      return 1;
  } 
  return 0;
} 

// Actualiza los grados de saturación de colores adyacentes
void update_satur(struct row_vertex * main_col, int * satur_degree, int v_i, int color) {
  // Buscar los adyacentes a v_i
  linked_list * forward = main_col[v_i].pt;
  while (forward != NULL) {
    //No interesan los bucles
    if (v_i != main_col[forward->vertex].vertex) { 
      // Si el vértice ya fue coloreado entonces no actualizo 
      // su grado de saturación
      if (satur_degree[forward->vertex] != -1) {
        // Quiero saber si el vértice adyacente a v_i tiene en su 
        // arreglo de colores adyacentes el color "color".
        if (main_col[forward->vertex].color_around[color] == 0) {
          main_col[forward->vertex].color_around[color] = 1;
          satur_degree[forward->vertex] += 1;
        }
      }
    }
    forward = forward->next;  
  }
} 

// Devuelve el próximo vértice de grado mayor e incrementa
// el apuntador base al próximo elemento.
int get_max_degree(tuple * base, struct row_vertex * main_col, int vertex_num) {
  int vertex;
  /* int i; */
  /* for(i = 0; i < vertex_num; i++) { */
  /*   if (main_col[base[i].vertex].color == -1) { */
  /*     vertex = base[i].vertex; */
  /*     return vertex; */
  /*   } */
  /* } */
  while(1) {
    //Vértice que se devuelve no puede estar ya coloreado
    if (main_col[base->vertex].color == -1) {
      vertex = base->vertex;
      base++;
      return vertex;
    }
    else
      base++;
  }
}

//Función que retorna el color más pequeño
int leastp_color(struct row_vertex * main_col,int v_i,int vertex_num) {
  int i;
  for(i = 0; i < vertex_num; i++) {
    if (main_col[v_i].color_around[i] == 0)
      return i;
  }
} 

/***************************/
/* CEMENTERIO SANTO DSATUR */
/***************************/


/*   int start = base->vertex; */
/*   for(i = 0; i < vertex_num; i++) { */
   
/*     if (main_col[base->vertex].color == -1) { */
/*       vertex = base->vertex; */
/*       base++; */
/*       return vertex; */
/*     } */
/*     else  */
/*       base++; */
/*   } */
/*   //No hay vértice que se pueda retornar */
/*   printf("no hay retorno \n"); */
/*   return -1; */
/* } */

// Permite saber si los vértices adyacentes a v_i son todos 
// alcanzables entre sí por un arco directo. 
// Retorna 1 si sí, 0 si no.
/* int reachable(struct row_vertex * main_col, int v_i, int vertex_num) { */
/*   int i; */
/*   int j; */
/*   linked_list * aux = main_col[v_i].pt; */
/*   int adjacents[vertex_num]; */
/*   for(i = 0; i < vertex_num; i++) */
/*     adjacents[i] = 0; */
/*   adjacentes[v_i] = 1; //Un vértice es alcanzable a sí mismo */
/*   while(aux != NULL) { */
/*     adjacents[aux->vertex] = 1; */
/*     aux = aux->next; */
/*   } */
/*   for(i = 0; i < vertex_num; i++) { */
/*     if (adjacents[i] == 0) */
/*       continue; */
/*     else { */
/*       for(j = 0; j < i; j++) { //Iteración antes de i */
        
/*       } */
/*     for(j = i + 1; j < neighbours; j++) { //Iteración despues de i */
/*       while */
/*         } */
/*     } */
/*   } */
  
  
    
/* } */

