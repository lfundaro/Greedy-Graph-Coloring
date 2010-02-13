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

