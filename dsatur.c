#include "main.h"

pair dsatur(row_vertex main_col[], tuple deg_vert[], int vertex_num, int start_point) {
  // Ordenamiento decreciente de grados de vertices
  tuple * base = &deg_vert[0];  // Apuntador a primer elemento
  size_t nmemb = vertex_num; // Número de elementos
  size_t size = sizeof deg_vert[0]; // Tamaño de un elemento
  int last_color; // Último color utilizado que sea mayor
  int num_colored = 0; // Número de vértices coloreados
  int used_colors[vertex_num]; 
  int upper_bound = 0; //Coloración lograda 
  int lower_bound = 0; //Clique máxima encontrada
  int highest_color = 0;  
  int flag = 1;
  int i; 

  for(i = 0; i < vertex_num; i++) 
    used_colors[i] = 0;   
  int v_i;
  // Arreglo de grados de saturación
  int * satur_degree = malloc(sizeof(int)*vertex_num);
  // Inicialización de estructura de grados de saturación
  for(i = 0; i < vertex_num; i++) 
    satur_degree[i] = 0;
  
  // Coloración del primer vértice
  if (start_point == -1) { //Se parte del vértice de grado mayor
    //Ordenamiento decreciente
    qsort(base, nmemb, size, compare);
    v_i = get_max_degree(base,main_col,vertex_num);
  }
  else
    //Start_point se usa cuando se corre el algoritmo N veces
    v_i = start_point; 

  main_col[v_i].color = 0;
  last_color = 0;
  used_colors[last_color] = 1;  //Color se marca como usado
  lower_bound++;
  num_colored++;
  int * members = malloc(sizeof(int) * vertex_num);
  initialize(members, vertex_num);
  members[v_i] = 1;
  // El grado de saturación de un vértice coloreado ya no nos 
  // interesa, por lo tanto lo ponemos en -1
  satur_degree[v_i] = -1;  
  // Actualizar saturación de vecinos
  update_satur(main_col, satur_degree, v_i, last_color);

  // Pasos 3, 4, 5 de DSATUR, agregando intercambio
  int max; //Lleva la máxima saturación
  int found; //Dice dónde se encontró vértice de máx. saturación
  while (num_colored < vertex_num) {
    max = -1; //Elemento neutro de saturación;
    for(i = 0; i < vertex_num; i++) {
      if (max < satur_degree[i]) {
        max = satur_degree[i];
        found = i;
      }
    }
    //Busco repeticiones del mayor
    if (repeated(max, satur_degree, vertex_num)) {
      v_i = get_max_degree(base,main_col,vertex_num);
      last_color = leastp_color(main_col, v_i, vertex_num);
      //Actualizar color más alto usado
      if (last_color > highest_color)
        highest_color = last_color;
      //Chequeos para intercambio
      if (used_colors[last_color] == 0) {
        //Se quiere hacer intercambio a partir del 4to vértice
        //que se va a colorear
        if (highest_color > 0 && num_colored > 2) {
          interchange(main_col, satur_degree, v_i, highest_color, vertex_num);
          last_color = leastp_color(main_col, v_i, vertex_num);
        }
      }
      //Se colorea finalmente el vértice
      main_col[v_i].color = last_color;
    }
    else {
      v_i = found;
      last_color = leastp_color(main_col, v_i, vertex_num);
      //Actualizar color más alto usado
      if (last_color > highest_color)
        highest_color = last_color;
      //Chequeos para intercambio
      if (used_colors[last_color] == 0) {
        //Se quiere hacer intercambio a partir del 4to vértice
        //que se va a colorear
        if (highest_color > 0 && num_colored > 2) {
          interchange(main_col, satur_degree, v_i, highest_color, vertex_num);
          last_color = leastp_color(main_col, v_i, vertex_num);
        }
      }
      //Se colorea finalmente el vértice
      main_col[v_i].color = last_color;
    }

    if (used_colors[last_color] == 0) { //Coloración de clique
      if (makes_clique(main_col, v_i, members, vertex_num)) {
        members[v_i] = 1;
        lower_bound++;
      }
    }
    else {
      if (start_point != -1) {
        //Verificamos si v_i hace clique con los vértices que 
        //ya conocemos hacen clique
        if (makes_clique(main_col, v_i, members, vertex_num)) {
          lower_bound++;
          members[v_i] = 1;
        }
      }
    }
    //Se marca el color usado como usado solo cuando 
    //corremos DSATUR para encontrar 
    used_colors[last_color] = 1;
    //Grado de saturación en -1 porque no nos interesa 
    //actualizar tal grado para un vértice ya coloreado
    satur_degree[v_i] = -1;  
    //Se actualiza el arreglo color_around de los vértices
    //adyacentes a v_i
    update_satur(main_col, satur_degree, v_i, last_color);
    //Si estamos buscando la máxima clique entonces 
    //a los vértices adyacentes a v_i le quitamos el color
    //"last_color" en su arreglo de colores adyacentes
    /* if (start_point != -1 && poss_member)  */
    /*   uncolor(main_col, v_i, last_color); */
    
    num_colored++; 
  }
  
  if (start_point != -1) { //Hacemos retornar el algoritmo
    pair early_result;
    early_result.clique = lower_bound;
    early_result.members = members;
    return early_result;
  }
  
  
  for(i = 0; i < vertex_num; i++){
    if (used_colors[i] == 1)
      upper_bound++;  //Se cuenta número de colores usados
  }
  free(members);
  pair result;
  result.clique = lower_bound;
  result.coloring = upper_bound;
  return result;
}

//Determina repeticiones en dsatur_degree
//Cuando se elige un vértice con mayor grado de saturación
//se quiere saber si existe otro que tiene el mismo grado 
//para así descartar la posibilidad de buscar el de grado
//mayor de incidencias.
int repeated(int max, int * satur_degree, int vertex_num) {
  int i;
  for(i = 0; i < vertex_num; i++) {
    if (max == satur_degree[i])
      return 1;
  } 
  return 0;
} 

// Actualiza los grados de saturación de colores adyacentes
void update_satur(struct row_vertex * main_col, int * satur_degree, int v_i, int color) {
  // Buscar los adyacentes a v_i
  linked_list * forward = main_col[v_i].pt;
  while (forward != NULL) {
    // Si el vértice ya fue coloreado entonces no actualizo 
    // su grado de saturación
    if (satur_degree[forward->vertex] != -1) {
      // Quiero saber si el vértice adyacente a v_i tiene en su 
      // arreglo de colores adyacentes el color "color".
      if (main_col[forward->vertex].color_around[color] == 0) {
        satur_degree[forward->vertex] += 1;
      }
      main_col[forward->vertex].color_around[color]++;
    }
    forward = forward->next;  
  }
} 

// Devuelve el próximo vértice de grado mayor e incrementa
// el apuntador base al próximo elemento.
int get_max_degree(tuple * base, struct row_vertex * main_col, int vertex_num) {
  int vertex;
  while(1) {
    //Vértice que se devuelve no puede estar ya coloreado
    if (main_col[base->vertex].color == -1) {
      vertex = base->vertex;
      base++;
      return vertex;
    }
    else
      base++;
  }
}

//Función que retorna el color más pequeño
//Revisa en el arreglo color_around del vértice v_i que se 
//quiere colorear cuál es la primera casilla que aparece en 0 
//para así utiliza dicho color. 
//Cuando la casilla está en 0 indica ausencia de color.
//Cuando está en 1 indica presencia de color.
int leastp_color(struct row_vertex * main_col,int v_i,int vertex_num) {
  int i;
  for(i = 0; i < vertex_num; i++) {
    if (main_col[v_i].color_around[i] == 0)
      return i;
  }
}

//Función que descolorea un vértice para detectar 
//más fácilmente una clique máxima
void uncolor(struct row_vertex * main_col, int v_i, int color) {
  linked_list * aux;
  aux = main_col[v_i].pt;
  while(aux != NULL) {
    main_col[aux->vertex].color_around[color] = 0;
    aux = aux->next;
  }
}

int makes_clique(struct row_vertex * main_col, int v_i, int * members, int vertex_num) {
  int i;
  linked_list * aux;
  int is_there = 0;
  int decision = 1;
  for(i = 0; i < vertex_num; i++) {
    is_there = 0;
    if (members[i] == 1) {
      aux = main_col[v_i].pt;
      while (aux != NULL) {
        if (aux->vertex == i) {
          is_there = 1;
          break;
        }
        aux = aux->next;
      }
      decision = decision & is_there;
    }
  }
  return decision;
}




