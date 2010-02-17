# include "main.h"

int check_for_clike(row_vertex graph[],int vertex_num,linked_list* set){
  linked_list* nxt = set;
  linked_list* aux;
  int* neighbours;
  int i;

  while (nxt!=NULL){
    aux = graph[nxt->vertex].pt;
    neighbours = (int*)malloc(vertex_num * sizeof (int));
    for(i=0;i<vertex_num;i++){
      neighbours[i]=0;
    }

    while (aux != NULL){
      neighbours[aux->vertex]=1;
      aux=aux->next;
    }
    
    aux=nxt->next;
    while (aux != NULL){
      if (neighbours[aux->vertex]!=1)
	return 0;
    }

    nxt=nxt->next;
  }

  return 1;
}

int implicit_enum(struct row_vertex * main_col, int lower_bound, int upper_bound, int * vertices, int vertex_num) {
  int i;
  int used_colors[vertex_num];
  int color_count;
  int color;
  int flag; //Para saber cuando se deja de ampliar la primera clique encontrada
  int out;
  while(1) {
    //Inicialización de estructura de adyacencias y colores usados
    main_col_init(main_col, vertex_num); 
    initialize(used_colors, vertex_num);
    color_count = 0;
    //Próxima permutación
    next_perm(vertices, vertex_num);
    flag = 1;
    out = 0;
    for(i = 0; i < vertex_num; i++) { 
      color = leastp_color(main_col, vertices[i], vertex_num);
      main_col[vertices[i]].color = color;
      if (used_colors[color] == 0) {
        color_count++;
        used_colors[color] = 1;
        if (flag && color_count > lower_bound){ //Actualizar cota inferior ?
          //Si cota inferior se hace igual a cota 
          //superior hay que retornar !
          lower_bound = color_count; 
          printf("new lower_bound is %d \n", lower_bound);
        }
      }
      else 
        flag = 0;    //No se sigue ampliando la clique encontrada
      if (lower_bound == upper_bound)
        return color_count;
      if (color_count == upper_bound) {
        out = 1;
        break;
      }
      //Actualizamos vértices adyacentes con color usado
      update_color_around(main_col, vertices[i], color);
    }
    if (color_count == lower_bound) 
      return color_count;  //Número cromático
    if (out) { //Ocurrió que se alcanzó cota superior
      continue;
    }
  }
}


void update_color_around(struct row_vertex * main_col, int v_i, int color) {
  // Buscar los adyacentes a v_i
  linked_list * forward = main_col[v_i].pt;
  while (forward != NULL) {
    // Quiero saber si el vértice adyacente a v_i tiene en su 
    // arreglo de colores adyacentes el color "color".
    if (main_col[forward->vertex].color_around[color] == 0) {
      main_col[forward->vertex].color_around[color]++;
    }
    forward = forward->next;  
  }
}

int * get_vertices(int * members, int vertex_num) {
  int * vertices = malloc(sizeof(int) * vertex_num);
  int i;
  //Inicialización
  for(i = 0; i < vertex_num; i++) 
    vertices[i] = i;
  for(i = 0; i < vertex_num; i++) {
    if (members[i]) {
      move_vertex(vertices, vertex_num, i);
      printf("miembro %d \n", i+1);
    }
  }
  return vertices;
}

void move_vertex(int * vertices, int vertex_num, int pos) {
  int i;
  int aux;
  for(i = pos; i > 0; i--) {
    aux = vertices[i];
    vertices[i] = vertices[i - 1];
    vertices[i - 1] = aux;
  }
}

