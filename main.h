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

typedef struct linked_array_list {
  int* array;
  struct linked_array_list * next;
} linked_array_list;

typedef struct row_vertex {
  int vertex;
  int color;
  struct linked_list * pt;
  int * color_around;  // Arreglo de colores adyacentes
} row_vertex;

/************************************************************/
/* Tupla que sirve para representar los vertices con su     */
/* grado en el arreglo ordenado por grados que pide DSTATUR */
/************************************************************/

typedef struct tuple {
  int vertex;
  int degree;
}tuple;

/* typedef struct satur_list { */
/*   int vertex; */
/*   int degree; */
/*   struct satur_list * next; */
/* } satur_list; */


void degree(struct row_vertex *, int, struct tuple *);

int compare(const void *, const void *);

int dsatur(struct row_vertex *, struct tuple *, int);

int get_max_degree(struct tuple *, struct row_vertex *,int vertex_num);

int length(struct linked_list*);

void dfs(int,int*,row_vertex [],int*);

void initialize(int*,int);

row_vertex* interchange(struct row_vertex [], int, int, int);

void update_satur(struct row_vertex *, int *, int, int);

int repeated(int, int *, int);

int leastp_color(struct row_vertex *,int, int);
