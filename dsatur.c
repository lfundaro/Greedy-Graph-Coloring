# include <stdlib.h>
# include <stdio.h>
# include "degree.c"

int dsatur(linked_list main_col[], tuple deg_vert[]) {
  // Ordenamiento decreciente de grados de vertices
  tuple * base = &deg_vert[0];  // Apuntador a primer elemento
  size_t nmemb = sizeof deg_vert / sizeof deg_vert[0]; // Número de elementos
  size_t size = sizeof deg_vert[0]; // Tamaño de un elemento
  qsort(base, nmemb, size, compare);
}
