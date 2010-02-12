#include "main.h"

int dsatur(row_vertex main_col[], tuple deg_vert[], int vertex_num) {
  // Ordenamiento decreciente de grados de vertices
  tuple * base = &deg_vert[0];  // Apuntador a primer elemento
  size_t nmemb = vertex_num; // Número de elementos
  size_t size = sizeof deg_vert[0]; // Tamaño de un elemento
  qsort(base, nmemb, size, compare);
  int last_color = 0; // Último color utilizado que sea mayor
  int num_colored = 0; // Número de vértices coloreados
  int v_i = get_max_degree(base);
  // Lista enlazada de grados de saturación
  satur_list * satur_degree;
  satur_degree->next = NULL;
  satur_degree->vertex = 0;
  satur_degree->degree = 0;
  // Inicialización de estructura de grados de saturación
  satur_list * forward = satur_degree;
  int i; 
  for(i = 1; i < vertex_num; i++) {
    forward->next = malloc(sizeof(satur_list));
    forward->next->vertex = i;
    forward->next->degree = 0;
    forward = forward->next;
  }
  // Coloración del primer vértice
  main_col[v_i].color = 0;
  v_i++;
  // Update Satur
  while (v_i++ <= vertex_num) {
    
  }
  
  
  
  
  return 0;
}

// Devuelve el próximo vértice de grado mayor e incrementa
// el apuntador base al próximo elemento.
int get_max_degree(tuple * base) {
  int vertex = base->vertex;
  base++;
  return vertex;
}


