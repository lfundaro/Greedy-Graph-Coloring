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
#include <stdio.h>

int* twoOnN(int array[],int next_swap[],int N){
  register int head = next_swap[0];
  register int tail = next_swap[1];
  register int* pair = (int*)malloc(2 * sizeof (int));
  register int aux;

  pair[0]=array[head];
  pair[1]=array[head+1];

  if (tail<N){
    aux = array[head+1];
    array[head+1] = array[tail];
    array[tail] = aux;

    next_swap[1] = next_swap[1]+1;
  }
  else{
    next_swap[0]=head+1;
    next_swap[1]=head+3;
  }

  return pair;
}

int main(){
  int N = 20;
  int* array = (int*)malloc(N * sizeof (int));
  int* ns = (int*)malloc(2 * sizeof (int));
  int* pair;
  int i;
  int j;

  for(i=0;i<=N-1;i++)
    array[i]=i+1;

  ns[0]=0;
  ns[1]=2;

  for(j=1;j<=190;++j){
    //pair=twoOnN(array,ns,N);
    int head = ns[0];
    int tail = ns[1];
    int* pair = (int*)malloc(2 * sizeof (int));
    int aux;
    
    pair[0]=array[head];
    pair[1]=array[head+1];
    
    if (tail<N){
      aux = array[head+1];
      array[head+1] = array[tail];
      array[tail] = aux;
      
      ns[1] = ns[1]+1;
    }
    else{
      ns[0]=head+1;
      ns[1]=head+3;
    }

    /* Impresion de resultados que gasta
    //   tiempo
      for(i=0;i<2;i++)
      printf("%d,",pair[i]);
      printf("\n");
      printf("---------------\n");
    */
  }
}
