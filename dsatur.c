#include "main.h"

int dsatur(row_vertex main_col[], tuple deg_vert[], int vertex_num) {
  // Ordenamiento decreciente de grados de vertices
  tuple * base = &deg_vert[0];  // Apuntador a primer elemento
  size_t nmemb = vertex_num; // Número de elementos
  size_t size = sizeof deg_vert[0]; // Tamaño de un elemento
  qsort(base, nmemb, size, compare);
  

  return 0;
}
