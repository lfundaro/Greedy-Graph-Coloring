#include "main.h"

void dfs(int neighbour, int* colors, row_vertex graph[],int* control_set){
  linked_list* aux = graph[neighbour].pt;
  int vertex;

  control_set[neighbour]=1;
  while (aux!=NULL){
    vertex=aux->vertex;
    if (! control_set[vertex]&&
	 (colors[0]==graph[vertex].color||
          colors[1]==graph[vertex].color) ){
      dfs(vertex,colors,graph,control_set);
    }
    aux=aux->next;
  }
}

int get_nxt_neighbour(int last_neighbour,int* neighbours,int n_of_neighbours,linked_array_list* components){
  int i=1;
  linked_array_list* aux;
  last_neighbour++;

  while (i==1&&last_neighbour<n_of_neighbours){
    aux = components;
    while (aux!=NULL){
      if ((aux->array)[neighbours[last_neighbour]]==0)
	aux=aux->next;
      else{
	i+=1;
	last_neighbour++;
	break;
      }
    }
    i-=1;
  }
  return last_neighbour;
}

int check_subgraph(int* neighbours,int n_of_neighbours,linked_array_list* components){
  int validity = 0;
  int j=0;
  linked_array_list* aux = components;

  while (aux!=NULL){
    while (j<n_of_neighbours){
      if ((aux->array)[neighbours[j]]==1)
	validity++;
      j++;
    }
    if (validity>2)
      return 0;
    validity=0;
    j=0;
    aux=aux->next;
  }

  aux=components;
  j=aux->color;
  aux=aux->next;
  while (aux!=NULL){
    if (j!=aux->color)
      return 1;
    aux=aux->next;
  }

  return 0;
}

void update_saturation(int vertex, int new_color,int old_color,row_vertex graph[],int* satur_degree){
  linked_list* aux = graph[vertex].pt;
  int v;

  while(aux!=NULL){
    v=aux->vertex;

    if (graph[v].color_around[new_color]==0)
      satur_degree[v]+=1;
    graph[v].color_around[new_color]+=1;

    graph[v].color_around[old_color]-=1;
    if (graph[v].color_around[old_color]==0)
      satur_degree[v]-=1;

    aux=aux->next;
  }
}

void del_array_list(linked_array_list* al){
  if(al->next!=NULL){
    del_array_list(al->next);
  }
  free(al->array);
  free(al);
}

void interch(int min,int max,int vertex,linked_array_list* components,row_vertex graph[],int vertex_num,int* satur_degree){
  int i=0;
  linked_array_list* aux = components;

  while (aux!=NULL){
    if(aux->color==min)
      while (i<vertex_num){
	if ((aux->array)[i]==1)
	  if (graph[i].color==min){
	    graph[i].color=max;
	    update_saturation(i,max,min,graph,satur_degree);
	  }
	  else{
	    graph[i].color=min;	    
	    update_saturation(i,min,max,graph,satur_degree);
	  }
	i++;
      }
    i=0;
    aux=aux->next;
  }
}

row_vertex* interchange(row_vertex graph[],int* satur_degree,int vertex, int high_color, int vertex_num){
  //Estructuras para determinar los colores y nodos adyacentes
  int* color_set = (int*)malloc((high_color+1) * sizeof (int));
  int n_of_colors=0;
  linked_list* aux = graph[vertex].pt;
  int n_of_neighbours = list_length(aux);

  //Estructuras para el calculo de componentes
  linked_array_list* components;
  linked_array_list* tail;
  int* control_set;

  //Estructuras para el calculo de la combinatoria de colores
  int* next_swap = (int*)malloc(2 * sizeof (int));
  int* pair;
  
  //Colores y nodos adyacentes, todos guardados en arreglos
  int* colors;
  int* neighbours = (int*)malloc(n_of_neighbours * sizeof (int));

  //Contadores genericos
  int i;
  int j;

  //Inicializacion del arreglo color_set
  initialize(color_set,high_color+1);

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
  for(i=0;i<high_color+1;i++){
    n_of_colors += color_set[i];
  }

  //Guardo los colores adyacentes en un arreglo
  colors = (int*)malloc(n_of_colors * sizeof (int));
  j=0;
  for(i=0;i<high_color+1;i++){
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
  pair=(int*)twoOnN(colors,next_swap,n_of_colors);
  j=0;
  while (pair!=NULL){
    components=(linked_array_list*)malloc(sizeof (linked_array_list));
    control_set=(int*)malloc(vertex_num * sizeof (int));
    initialize(control_set,vertex_num);
    components->array=control_set;
    components->next=NULL;

    tail=components;
    while(j<n_of_neighbours){
      if (graph[neighbours[j]].color==pair[0]||
	  graph[neighbours[j]].color==pair[1]){

	tail->next=(linked_array_list*)malloc(sizeof (linked_array_list));
	tail=tail->next;
	tail->color=graph[neighbours[j]].color;
	control_set=(int*)malloc(vertex_num * sizeof (int));
	initialize(control_set,vertex_num);
	tail->array=control_set;
	tail->next=NULL;

	dfs(neighbours[j],pair,graph,control_set);
      }
      j=get_nxt_neighbour(j,neighbours,n_of_neighbours,components);
    }
    components=components->next;

    if (check_subgraph(neighbours,n_of_neighbours,components)){
      if (pair[0]<pair[1])
	interch(pair[0],pair[1],vertex,components,graph,vertex_num,satur_degree);
      else
	interch(pair[1],pair[0],vertex,components,graph,vertex_num,satur_degree);
      del_array_list(components);
      free(pair);
      break;
    } 
    del_array_list(components);
    free(pair);
    pair=(int*)twoOnN(colors,next_swap,n_of_colors);
    j=0;
  }

  free(color_set);
  free(colors);
  free(neighbours);
  free(next_swap);
}
