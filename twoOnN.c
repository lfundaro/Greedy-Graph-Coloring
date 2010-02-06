/*Descripcion
  Algoritmo para calcular las combinaciones de 2
  elementos en un arreglo de N. Funciona a traves
  de efectos de borde.
*/
#include <stdio.h>

/*array: Arreglo al cual se le estan calculando
         las combinaciones de 2
  next_swap: estructura de control para poder dar
             la proxima permutacion a traves de
             varias llamadas a la funcion.
	     Debe comenzar en [0,2]. 
  N: tamano del arreglo (por eficiencia)
*/         
int* twoOnN(int array[],int next_swap[],int N){
  int head = next_swap[0];
  int tail = next_swap[1];
  int* pair;
  int aux;

  //Esta guarda es para cuando
  //genero la ultima combinacion
  if (head == N-1){
    free(pair);
    pair = NULL;
    return pair;
  }

  pair = (int*)malloc(2 * sizeof (int));
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
  int N = 6;
  int* array = (int*)malloc(N * sizeof (int));
  int* ns = (int*)malloc(2 * sizeof (int));
  int* pair;
  int i;
  int j;

  for(i=0;i<=N-1;i++)
    array[i]=i+1;

  ns[0]=0;
  ns[1]=2;

  for(j=1;j<=15;++j){
    pair=twoOnN(array,ns,N);
    /* Impresion de resultados que gasta
    //   tiempo
      for(i=0;i<2;i++)
      printf("%d,",pair[i]);
      printf("\n");
      printf("---------------\n");*/
  }
}
