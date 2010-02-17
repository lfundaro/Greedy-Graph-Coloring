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

