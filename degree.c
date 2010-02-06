#include "main.h"

/* Funcion que dado un arreglo de lista de adyacencias */
/* y el número de vértices del grafo, retorna un arreglo */
/* de tuplas vértice-grado */

tuple[] degree(linked_list main_col[], int vertex_num) {
  tuple deg_vert[vertex_num]; //Arreglo de elementos vertice-grado
  int i;
  int count = 0;
  linked_list * aux;
  for(i = 0, i < vextex_num; i++) {
      aux = main_col[i].next; // Apunta al primer adyacente
      while (aux != NULL) {
        count++;
        aux = aux->next;
      }
      // Se asigna una tuple vertice-grado al arreglo deg_vert
      tuple new_tuple = { i, count };
      deg_vert[i] = new_tuple;
      count = 0;
  }
  return deg_vert;
}

/* Funcion que compara dos elementos tuple segun los  */
/* grados de los vértices. */

int compare(const tuple * a, const tuple * b) {
  if (a->degree < b->degree) 
    return 1;
  if (a->degree > b->degree)
    return -1;
  if (a->degree == b->degree)
    return 0;
}
