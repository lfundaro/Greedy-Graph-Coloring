# include "main.h"

// Algoritmo de enumeración implícita

int * implicit_enum(struct row_vertex * main_col, int lower_bound, int upper_bound, int * vertices, int vertex_num) {
  int i;
  int used_colors[vertex_num];
  int * color_count = (int *) malloc(sizeof(int));
  int color;
  int flag; //Para saber cuando se deja de ampliar la primera clique encontrada
  int out;
  int leftover = vertex_num - lower_bound; //Tamaño del resto a permutar
  //Arreglo con vértices que pertenecen a cota inferior de brelaz
  int * fixed = (int *) malloc(sizeof(int) * lower_bound);
  int fixed_s = lower_bound; //Tamaño de arreglo fijo
  //Arreglo con vértices que no están en la cota inferior de brelaz
  int * permuta = (int *) malloc(sizeof(int) * leftover);
  //Inicializar fixed
  for(i = 0; i < fixed_s; i++)
    fixed[i] = vertices[i];
  //Inicializar permuta
  for(i = 0; i < leftover; i++) 
    permuta[i] = vertices[fixed_s + i];

  int stop = 0;
  while(!stop) {

    //Inicialización de estructura de adyacencias y colores usados
    main_col_init(main_col, vertex_num); 
    initialize(used_colors, vertex_num);
    *color_count = 0;
    //Colorear vértices fijos
    color_fixed(fixed, main_col, fixed_s, used_colors, color_count); 
    flag = 1;
    out = 0;
    stop = check_perm(permuta, leftover);
    for(i = 0; i < leftover; i++) { 
      color = leastp_color(main_col, permuta[i], vertex_num);
      main_col[permuta[i]].color = color;
      if (used_colors[color] == 0) {
        (*color_count)++;
        used_colors[color] = 1;
        if (flag && *color_count > lower_bound) { //Actualizar cota inferior ?
          //Si cota inferior se hace igual a cota 
          //superior hay que retornar !
          lower_bound = *color_count; 
        }
      }
      else 
        flag = 0;    //No se sigue ampliando la clique encontrada
      if (lower_bound == upper_bound) {
        free(fixed);
        free(permuta);
        return color_count;
      }
      if (*color_count == upper_bound) {
        out = 1;
        break;
      }
      //Actualizamos vértices adyacentes con color usado
      update_color_around(main_col, permuta[i], color);
    }
    if (*color_count == lower_bound) {
      free(fixed);
      free(permuta);
      return color_count;  //Número cromático
    }
    if (*color_count < upper_bound)
      upper_bound = *color_count;
    if (out) { //Ocurrió que se alcanzó cota superior
      next_perm(permuta, leftover);      
      continue;
    }
    //Próxima permutación
    next_perm(permuta, leftover);
  } 

  free(fixed);
  int * solution = (int *) malloc(sizeof(int));
  *solution = upper_bound;
  return solution;
}

// Función que actualiza los el arreglo color_around de los vértices
// adyacentes al vértice v_i que se ha coloreado
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


//Función que retorna un arreglo de vértices
//el cual contiene en las primeras casillas 
//los miembros de la clique máxima encontrada 
//por Brelaz+Interchange
int * get_vertices(int * members, int vertex_num) {
  int * vertices = malloc(sizeof(int) * vertex_num);
  int i;
  //Inicialización
  for(i = 0; i < vertex_num; i++) 
    vertices[i] = i;
  for(i = 0; i < vertex_num; i++) {
    if (members[i]) {
      move_vertex(vertices, vertex_num, i);
    }
  }
  return vertices;
}

//Función que se utiliza para mover los vértices 
//pertenecientes a la clique encontrada por 
//Brelaz-Interchange al principio del arreglo de 
//vértices que retorna get_vertices
void move_vertex(int * vertices, int vertex_num, int pos) {
  int i;
  int aux;
  for(i = pos; i > 0; i--) {
    aux = vertices[i];
    vertices[i] = vertices[i - 1];
    vertices[i - 1] = aux;
  }
}

//Coloración de arreglo fijo
void color_fixed(int * fixed, struct row_vertex * main_col, int lower_bound, int * used_colors, int * color_count) {
  int i;
  for(i = 0; i < lower_bound; i++) {
    //Vértice que está en fixed[i] lo pinto con color i
    main_col[fixed[i]].color = i;
    used_colors[i] = 1;
    (*color_count)++;
    //Se actualizan vértices adyacentes a elementos de fixed con 
    //color seleccionado
    update_color_around(main_col, fixed[i], i);
  }
}

//Permite saber si nos encotramos en la última de las
//permutaciones que hace Dijkstra. Este cheque es importante 
//porque si Dijsktra comienza a repetir permutaciones el 
//algoritmo se hace inestable.
int check_perm(int * permuta, int leftover) {
  int i;
  int decision = 1;
  int last;
  for(i = 1; i < leftover; i++) {
    if (permuta[i - 1] >= permuta[i])
      last = 1;
    else
      last = 0;
    decision = decision & last;
  }
  return decision;
}




