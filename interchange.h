#include "main.h"

int lenght(linked_list* list){
  int len = 0;
  
  while (list != NULL){
    len += 1;
    list = list->next;
  }
  
  return len;
}

row_vertex* interchange(row_vertex graph[], int vertex, int high_color){
  int* next_swap = (int*)malloc(2 * sizeof (int));
  int* colors = (int*)malloc(n_of_colors * sizeof (int));  
  int n_of_colors = lenght(graph[vertex]->pt);
  linked_list* aux = graph[vertex]->pt;
  int i;

  for(i=0 ; aux != NULL ; i++){
    colors[i]=graph[aux->vertex]->color
  }

  next_swap[0]=0;
  next_swap[1]=2;
  

  free(ns);
  free(array);
}
