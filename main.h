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
  int color;
  struct linked_array_list * next;
} linked_array_list;



/********************************************************/
/* Estructura que se utiliza para representar           */
/* la matriz de adyacencias. El apuntador a linked_list */
/* sirve para apuntar la estructura de nodos adyacentes */
/* al vértice vertex. El apuntador a entero llamado     */
/* color_around es una estructura que permite saber     */
/* cuáles son los colores que el vértice vertex tiene   */
/* en sus adyacencias.                                  */
/********************************************************/
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



/**************************************************************/
/* Pair es la estructura que retorna Dsatur.                  */
/* Clique representa la cota inferior de coloración.          */
/* Coloring representa la cota superior.                      */
/* Members es un arreglo que contiene los miembros            */
/* que conforman la clique máxima encontrada por el algoritmo */
/**************************************************************/
typedef struct pair {
  int clique;
  int coloring;
  int * members;
} pair;

void degree(struct row_vertex *, int, struct tuple *);

int compare(const void *, const void *);

pair dsatur(struct row_vertex *, struct tuple *, int, int);

int get_max_degree(struct tuple *, struct row_vertex *,int vertex_num);

int length(struct linked_list*);

void dfs(int,int*,row_vertex [],int*);

void initialize(int*,int);

row_vertex* interchange(struct row_vertex [],int *, int, int, int);

void update_satur(struct row_vertex *, int *, int, int);

int repeated(int, int *, int);

int leastp_color(struct row_vertex *,int, int);

void next_perm(int *, int);

void main_col_init(struct row_vertex *, int);

void update_color_around(struct row_vertex *, int, int);

int * get_vertices(int *, int);

void move_vertex(int *, int, int);

void color_fixed(int *, struct row_vertex *, int, int *, int *);

void uncolor(struct row_vertex *, int, int);

int makes_clique(struct row_vertex *, int, int *, int);

void free_row_vertex(struct row_vertex *, int);
