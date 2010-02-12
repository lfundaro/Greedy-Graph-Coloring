# ifndef _GNU_SOURCE
# define _GNU_SOURCE
# endif
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <regex.h>
# include <string.h>
# include <stddef.h>

/************************************************/
/* Tipo lista enlazada que contiene un entero   */
/* que representa    un vertice y un apuntador  */
/* a la próxima estructura de lista enlazada    */
/************************************************/
typedef struct linked_list {
  int vertex;
  struct linked_list * next;
} linked_list;

typedef struct row_vertex {
  int vertex;
  struct linked_list * pt;
} row_vertex;

/************************************************************/
/* Tupla que sirve para representar los vertices con su     */
/* grado en el arreglo ordenado por grados que pide DSTATUR */
/************************************************************/

typedef struct tuple {
  int vertex;
  int degree;
}tuple;

void degree(struct row_vertex *, int, struct tuple *);

int compare(const void *, const void *);

int dsatur(struct row_vertex *, struct tuple *, int);
