#include "main.h"

int dsatur(row_vertex main_col[], tuple deg_vert[], int vertex_num) {
  // Ordenamiento decreciente de grados de vertices
  tuple * base = &deg_vert[0];  // Apuntador a primer elemento
  size_t nmemb = vertex_num; // Número de elementos
  size_t size = sizeof deg_vert[0]; // Tamaño de un elemento
  qsort(base, nmemb, size, compare);
  int last_color; // Último color utilizado que sea mayor
  int num_colored = 0; // Número de vértices coloreados
  int v_i;
  // Arreglo de grados de saturación
  int * satur_degree = malloc(sizeof(int)*vertex_num);
  // Inicialización de estructura de grados de saturación
  int i; 
  for(i = 1; i < vertex_num; i++) 
    satur_degree[i] = 0;

  // Coloración del primer vértice
  v_i = get_max_degree(base); // Vértice con máximo grado de incidencias
  main_col[v_i].color = 0;
  last_color = 0;
  num_colored++;
  // El grado de saturación de un vértice coloreado ya no nos 
  // interesa, por lo tanto lo ponemos en -1
  satur_degree[v_i] = -1;  
  // Actualizar saturación de vecinos
  update_satur(main_col, satur_degree, v_i, last_color);
  // Pasos 3, 4, 5 de DSATUR, agregando intercambio
  while (num_colored <= vertex_num) {
    //Choose a vertex.with..max.....blablabla....
  }
  return 0;
}

// Actualiza los grados de saturación de colores adyacentes
void update_satur(struct row_vertex * main_col, int * satur_degree, int v_i, int color) {
  // Buscar los adyacentes a v_i
  linked_list * forward = main_col[v_i].pt;
  while (forward != NULL) {
    // Quiero saber si el vértice adyacente a v_i tiene en su 
    // arreglo de colores adyacentes el color "color".
    if (main_col[forward->vertex].color_around[color] == 0) {
      main_col[forward->vertex].color_around[color] = 1;
      satur_degree[forward->vertex] += 1;
    }
    forward = forward->next;
  }
} 

// Devuelve el próximo vértice de grado mayor e incrementa
// el apuntador base al próximo elemento.
int get_max_degree(tuple * base) {
  int vertex = base->vertex;
  base++;
  return vertex;
}


