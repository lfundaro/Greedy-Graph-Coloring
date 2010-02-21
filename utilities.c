#include "main.h"

int list_length(linked_list* list){
  int len = 0;
  
  while (list != NULL){
    len += 1;
    list = list->next;
  }
  
  return len;
}

void initialize(int* array,int N) {
  int i;
  for(i=0;i<N;i++) {
    array[i]=0;
  }
}

void main_col_init(struct row_vertex * main_col, int vertex_num) {
  int j;
  int k;
  for (j = 0; j < vertex_num ; j++) {
    main_col[j].color = -1; // Color inicial
    for(k = 0; k < vertex_num; k++) 
      main_col[j].color_around[k] = 0;
  }
}

//Función que libera de memoria la estructura del grafo
void free_row_vertex(struct row_vertex * main_col, int vertex_num) {
  int i;
  linked_list * back;
  linked_list * forward;
  //Se liberan los arreglos color_around
  //y las listas enlazadas de adyacencias
  for(i = 0; i < vertex_num; i++) {
    free(main_col[i].color_around);
    back = main_col[i].pt;
    forward = back;
    while(forward != NULL) {
      forward = back->next;
      free(back);
      back = forward;
    }
  }
}

