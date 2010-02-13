#include "main.h"

void dfs(int neighbour, int* colors, row_vertex graph[],int* control_set){
  linked_list* aux = graph[neighbour].pt;
  int vertex;

  while (aux!=NULL){
    vertex=aux->vertex;
    if (! control_set[vertex]&&
	 (colors[0]==graph[vertex].color||
          colors[1]==graph[vertex].color) ){
      control_set[vertex]=1;
      dfs(vertex,colors,graph,control_set);
    }
    aux=aux->next;
  }
}

int get_nxt_neighbour(int last_neighbour,int* neighbours,int n_of_neighbours,linked_array_list* components){
  int i=1;
  linked_array_list* aux;

  while (i=1&&last_neighbour<n_of_neighbours){
    aux = components;
    last_neighbour +=1;
    while (aux!=NULL){
      if ((components->array)[neighbours[last_neighbour]]==0)
	aux=aux->next;
      else{
	i+=1;
	break;
      }
    }
    i-=1;
  }
  return last_neighbour;
}

row_vertex* interchange(row_vertex graph[], int vertex, int high_color, int n_of_vertex){
  //Estructuras para determinar los colores y nodos adyacentes
  int* color_set = (int*)malloc(high_color * sizeof (int));
  int n_of_colors=0;
  linked_list* aux = graph[vertex].pt;
  int n_of_neighbours = list_length(aux);

  //Estructuras para el calculo de componentes
  linked_array_list* components;
  linked_array_list* tail;
  int* control_set;

  //Estructuras para el calculo de la combinatoria de colores
  int* next_swap = (int*)malloc(2 * sizeof (int));
  
  //Colores y nodos adyacentes, todos guardados en arreglos
  int* colors;
  int* neighbours = (int*)malloc(n_of_neighbours * sizeof (int));

  //Contadores genericos
  int i;
  int j;

  //Inicializacion del arreglo color_set
  initialize(color_set,high_color);

  //Calculo de colores y nodos adyacentes
  //Los colores quedan guardados en un conjunto vectorial
  i=0;
  while (aux != NULL){
    if (graph[aux->vertex].color > -1){
      color_set[graph[aux->vertex].color]=1;
    }
    neighbours[i]=aux->vertex;
    ++i;
    aux=aux->next;
  }
  
  //Calculo del numero de colores distintos adyacentes
  for(i=0;i<high_color;i++){
    n_of_colors += color_set[i];
  }

  //Guardo los colores adyacentes en un arreglo
  colors = (int*)malloc(n_of_colors * sizeof (int));
  j=0;
  for(i=0;i<high_color;i++){
    if (color_set[i]==1){
      colors[j]=i;
      ++j;
    }
  }

  //Inicializo la estructura necesaria para el calculo
  //de las combinaciones de colores
  next_swap[0]=0;
  next_swap[1]=2;

  //Ciclo principal
  j=0;
  while (next_swap[0]<n_of_colors){
    components=(linked_array_list*)malloc(sizeof (linked_array_list));
    control_set=(int*)malloc(n_of_vertex * sizeof (int));
    components->array=control_set;
    tail=components;
    while(j<n_of_neighbours){
      initialize(control_set,n_of_vertex);
      dfs(neighbours[j],colors,graph,control_set);
      get_nxt_neighbour(j,neighbours,n_of_neighbours,components);

      tail->next=(linked_array_list*)malloc(sizeof (linked_array_list));
      tail=tail->next;
      control_set=(int*)malloc(n_of_vertex * sizeof (int));
      tail->array=control_set;
    }
    //if check_partition(){
    //  which_components?();
    //  make_change(min(colors[0],colors[1]));
    //  break;
    //}
    //del(components);
    //free(control_set);
    twoOnN(colors,next_swap,n_of_colors);
  }

  free(color_set);
  free(colors);
  free(next_swap);
  free(aux);
}
