#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <regex.h>
#include <string.h>
#include "main.h"

int main(void)
{
  char * line = NULL;
  size_t len = 0;
  ssize_t read;
  regex_t * __restrict compiled_edge = malloc(sizeof (regex_t));
  regcomp(compiled_edge,"^e (.) (.)", REG_EXTENDED);   // Compilacion de RegEx para vertices  
  regex_t * __restrict compiled_num = malloc(sizeof (regex_t)); 
  regcomp(compiled_num, "^p", REG_EXTENDED);   //  Compilacion de RegEx para numero de vertices
  char * dump = malloc(sizeof(char)*12);
  int d1;  
  int d2;
  // Comienza lectura de la entrada estandar
  while ((read = getline(&line, &len, stdin)) != -1) {
    if (regexec(compiled_num, line, 0, NULL, 0) == 0) {
      sscanf(line,"%c %s %d %d", dump, dump,&d1,&d2);
      break;
      // ahora d1 contiene numero de vertices en grafo
    }
  }
  // Inicializacion de arreglo de adyacencias
  adj_matrix main_col[d1];
  int i;
  for (i = 0; i<d1 ; i++) {
    main_col[i].vertex = 0;  // Cero indica ausencia de vertice
    main_col[i].pt = NULL;
  }
  
  // Lectura del resto del archivo
  while ((read = getline(&line, &len, stdin)) != -1) {
    if (regexec(compiled_edge, line, 0, NULL, 0) == 0) { 
      sscanf(line,"%c %d %d", dump,&d1,&d2);
      d1 -= 1;
      d2 -= 1;
      main_col[d1].vertex = d1; // Uno indica presencia de vertice d1
      linked_list * adjacents = malloc(sizeof(linked_list)); 
      adjacents->vertex = d2;
      // Insercion de elementos de lista por la izquierda
      adjacents->next = main_col[d1].pt;
      main_col[d1].pt = (struct linked_list *) adjacents;
    }
  }
  free(dump);
  free(compiled_num);
  free(compiled_edge);
  free(line);
  return EXIT_SUCCESS;
}
