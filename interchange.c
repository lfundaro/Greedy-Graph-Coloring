#include "main.h"

int length(linked_list* list){
  int len = 0;
  
  while (list != NULL){
    len += 1;
    list = list->next;
  }
  
  return len;
}

row_vertex* interchange(row_vertex graph[], int vertex, int high_color){
  int n_of_colors = length(graph[vertex].pt);
  int* next_swap = (int*)malloc(2 * sizeof (int));
  int* colors = (int*)malloc(n_of_colors * sizeof (int));  
  linked_list* aux = graph[vertex].pt;
  int i;

  for(i=0 ; aux != NULL ; i++){
    colors[i]=graph[aux->vertex].color;
    printf("%d",colors[i]);
    aux=aux->next;
  }

  next_swap[0]=0;
  next_swap[1]=2;

  free(next_swap);
  free(colors);
  free(aux);
}
