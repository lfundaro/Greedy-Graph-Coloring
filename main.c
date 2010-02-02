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

int main(void)
{
  char * line = NULL;
  size_t len = 0;
  ssize_t read;
  char * str = (char *) malloc(sizeof (char *));
  int *d1 = (int *) malloc(sizeof (int *));
  int *d2 = (int *) malloc(sizeof (int *));
  while ((read = getline(&line, &len, stdin)) != -1) {

    
    /* sscanf(&line, '%s %d %d', str, d1, d2); */
    /* if (strcmp('e',&str) == 0)  */
    /*   printf('Hubo match'); */
  }
  if (line)
    free(line);
  return EXIT_SUCCESS;
}
