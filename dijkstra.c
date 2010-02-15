/*Descripcion
  Algoritmo de Dijkstra para calcular la proxima
  permutacion de un arreglo donde los elementos
  tienen orden total.
*/
/*Performance
  - Tarda ~10s para llamarse 700.000.000 veces inline
    sobre un arreglo de 20 ints.
  - Tarde ~12s para llamarse 700.000.000 haciendo la
    llamada a la funcion completa sobre un arreglo de 
    20 ints.

  NOTA: Dependiendo del contexto donde se llame,
        poner ii,jj y aux en registros puede afectar
	negativamente el performance de la aplicacion
	en general.
*/
#include "main.h"

void next_perm(int * array,int N){
  register int ii = N-1;
  register int jj = N;
  register int aux = 0;

  while (array[ii-1] >= array[ii])
    ii = ii-1;

  while (array[jj-1] <= array[ii-1])
    jj = jj-1;

  aux = array[ii-1];
  array[ii-1] = array[jj-1];
  array[jj-1] = aux;

  ii = ii+1;
  jj = N;

  while (ii<jj){
    aux = array[ii-1];
    array[ii-1] = array[jj-1];
    array[jj-1] = aux;
    ii = ii+1;
    jj = jj-1;
  }
}

/* int main(){ */
/*   int N = 20; */
/*   int * array = (int*)malloc(N * sizeof (int)); */
/*   int i; */
/*   int j; */

/*   for(i=0;i<=N-1;i++) */
/*     array[i]=i+1; */
/*   /\* Impresion de resultados que gasta tiempo */
/* 	for(i=0;i<=N-1;i++) */
/* 	printf("%d,",array[i]); */
/* 	printf("\n"); */
/* 	printf("---------------\n"); */
/*   *\/ */
/*   for(j=1;j<200000000;++j){     */
/*     // next_perm(array,N); */
/*     //De aqui en adelante, la implementacion "inline" */
/*     register int ii = N-1; */
/*     register int jj = N; */
/*     register int aux = 0; */

/*     while (array[ii-1] >= array[ii]) */
/*       ii = ii-1; */

/*     while (array[jj-1] <= array[ii-1]) */
/*       jj = jj-1; */

/*     aux = array[ii-1]; */
/*     array[ii-1] = array[jj-1]; */
/*     array[jj-1] = aux; */

/*     ii = ii+1; */
/*     jj = N; */

/*     while (ii<jj){ */
/*       aux = array[ii-1]; */
/*       array[ii-1] = array[jj-1]; */
/*       array[jj-1] = aux; */
/*       ii = ii+1; */
/*       jj = jj-1; */
/*     } */

/*     /\* Impresion de resultados que gasta */
/*     //   tiempo */
/*       for(i=0;i<=N-1;i++) */
/*       printf("%d,",array[i]); */
/*       printf("\n"); */
/*       printf("---------------\n"); */
/*     *\/ */
/*   } */
/* } */
