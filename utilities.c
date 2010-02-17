#include "main.h"

int list_length(linked_list* list){
  int len = 0;
  
  while (list != NULL){
    len += 1;
    list = list->next;
  }
  
  return len;
}

void initialize(int* array,int N){
  int i;
  for(i=0;i<N;i++){
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

/* void append(linked_list * x, int vertex) { */
/*   linked_list * y = malloc(sizeof(linked_list)); */
/*   y->vertex = vertex; */
/*   y->next = x; */
/*   x = y; */
/* } */

/* void free_linked_list(linked_list * x) { */
/*   linked_list * forward = x->next;; */
/*   linked_list * back = x; */
/*   while(forward != NULL) { */
/*     free(back); */
    
    
/*   } */
/* } */


