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
  // El fijo tiene suficientes casillas para la clique máxima 
  // encontrada por DSATUR
  int * fixed = malloc(sizeof(int) * lower_bound);
  int * permuta = malloc(sizeof(int) * vertex_num - lower_bound);
  int leftover = vertex_num - lower_bound;
  int fixed_size = lower_bound;
  int tmp_count;
  // int bigger_fixed; //Indica si se debe ampliar o no el arreglo fijo
  //  int * tmp_fixed;
  // int * tmp_permuta;
  //Preparo el arreglo fijo
  for(i = 0; i < lower_bound; i++)
    fixed[i] = vertices[i];
  //Preparo el arreglo permuta
  for(i = 0; i < leftover; i++)
    permuta[i] = vertices[lower_bound + i];
  
  while(1) {
    //Inicialización de estructura de adyacencias y colores usados
    main_col_init(main_col, vertex_num); 
    initialize(used_colors, vertex_num);
    color_count = 0;
    //Coloración de arreglo fijo
    color_fixed(fixed, main_col, fixed_size);
    //Próxima permutación
    leftover = vertex_num - lower_bound;
    next_perm(permuta, leftover);
    flag = 1;
    out = 0;
    for(i = 0; i < leftover; i++) { 
      color = leastp_color(main_col, permuta[i], leftover);
      main_col[permuta[i]].color = color;
      if (used_colors[color] == 0) {
        color_count++;
        used_colors[color] = 1;
        /* if (flag && color_count > lower_bound){ //Actualizar cota inferior ? */
        /*   //Si cota inferior se hace igual a cota  */
        /*   //superior hay que retornar ! */
        /*   lower_bound = color_count;  */
        /*   printf("new lower_bound is %d \n", lower_bound); */
        /* } */
      }
      else { 
        if (flag) {
          int poss_clique_size = color_count;
          int possible_clique[poss_clique_size];
          int z;
          //Inicialización de posibles candidatos a clique
          for(z = 0; z < poss_clique_size; z++) 
            possible_clique[z] = permuta[z];
          if (check_for_clike(main_col, vertex_num, possible_clique, poss_clique_size)) {
            //Si hay secuencia entonces entonces amplío la clique
            //fija y aumento 
            if (makes_seq(main_col, fixed, possible_clique, fixed_size, poss_clique_size)) { 
              //Aumento cota inferior
              lower_bound = fixed_size + poss_clique_size;
              //          tmp_fixed = new_fixed(possible_clique, poss_clique_size, fixed, fixed_size);
              //  tmp_permuta = new_permuta(
            }
            //Si no hay secuencia verifico que clique encontrada
            //sea sea más grande que la fija para aumentar
            //cota inferior.
            else {
              if (poss_clique_size > lower_bound)
                lower_bound = poss_clique_size;
            }
          }
          flag = 0;    //No se sigue ampliando la clique encontrada
        } 
      }
      if (lower_bound == upper_bound)
        return lower_bound;
      tmp_count = color_count +  get_count(main_col, fixed, fixed_size, used_colors);
      if (tmp_count  == upper_bound) {
        out = 1;
        break;
      }
      //Actualizamos vértices adyacentes con color usado
      update_color_around(main_col, permuta[i], color);
    }
    // Se vuelve a verificar existencia de clique 
    // en caso de que se hayan coloreado todos los vértices de 
    // 'permuta' con colores distintos
    if (flag) {
      int poss_clique_size = color_count;
      int possible_clique[poss_clique_size];
      int z;
      //Inicialización de posibles candidatos a clique
      for(z = 0; z < poss_clique_size; z++) 
        possible_clique[z] = permuta[z];
      if (check_for_clike(main_col, vertex_num, possible_clique, poss_clique_size)) {
        //Si hay secuencia entonces entonces amplío la clique
        //fija y aumento 
        if (makes_seq(main_col, fixed, possible_clique, fixed_size, poss_clique_size)) { 
          //Aumento cota inferior
          lower_bound = fixed_size + poss_clique_size;
          //          tmp_fixed = new_fixed(possible_clique, poss_clique_size, fixed, fixed_size);
          //  tmp_permuta = new_permuta(
        }
        //Si no hay secuencia verifico que clique encontrada
        //sea sea más grande que la fija para aumentar
        //cota inferior.
        else {
          if (poss_clique_size > lower_bound)
            lower_bound = poss_clique_size;
        }
      }
      flag = 0;    //No se sigue ampliando la clique encontrada
    }
    if (tmp_count == lower_bound) 
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

//Coloración de arreglo fijo
void color_fixed(int * fixed, struct row_vertex * main_col, int lower_bound) {
  int i;
  for(i = 0; i < lower_bound; i++) {
    //Vértice que está en fixed[i] lo pinto con color i
    main_col[fixed[i]].color = i;
    //Se actualizan vértices adyacentes a elementos de fixed con 
    //color seleccionado
    update_color_around(main_col, fixed[i], i);
  }
}

int makes_seq(struct row_vertex * main_col, int * fixed, int * possible_clique, int fixed_size, int poss_clique_size) {
  int i;
  int start_seq;
  //Averiguo último color de vértice en fixed
  start_seq = main_col[fixed[fixed_size - 1]].color;
  for(i = 0; i < poss_clique_size; i++) {
    //Verifico si hay continuidad en secuencia de colores
    if (main_col[possible_clique[i]].color != start_seq + i + 1)
      return 0;
  }
  return 1;
}

int get_count(struct row_vertex *, int * fixed, int fixed_size, int * used_colors) {
  int add = 0;
  int i;
  for(i = 0; i < fixed_size; i++) {
    if (used_colors[main_col[fixed[i]].color] != 0)
      add++;
  }
  return add;
}

int * new_fixed(int * possible_clique, int poss_clique_size, int * fixed, int fixed_size) {
  int n_size = poss_clique_size + fixed_size;
  int * n_fixed = malloc(sizeof(int) * n_size);
  int i;
  for(i = 0; i < fixed_size; i++) 
    n_fixed[i] = fixed[i]; 
  for(i = 0; i < poss_clique_size; i++) 
    n_fixed[i + fixed_size] = possible_clique[i];
  return n_fixed;
}
