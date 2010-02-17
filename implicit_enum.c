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
  initialize(used_colors, vertex_num);

  while(1) {
    //Inicialización de estructura de adyacencias y colores usados
    main_col_init(main_col, vertex_num); 
    initialize(used_colors, vertex_num);
    color_count = 0;
    //Próxima permutación
    next_perm(vertices, vertex_num);
    for(i = 0; i < vertex_num; i++) 
      printf("%d \n", vertices[i]);
    printf("---------------------\n");
    for(i = 0; i < vertex_num; i++) { 
      printf("%d \n", i);
      color = leastp_color(main_col, i, vertex_num);
      main_col[i].color = color;
      if (used_colors[color] == 0) {
        color_count++;
        used_colors[color] = 1;
        if (color_count > lower_bound) //Actualizar cota inferior ?
          lower_bound = color_count;
      }
      //Se verifica adicionalmente que el vértice que 
      //se colorea no sea el último.
      if (color_count == upper_bound && i < vertex_num - 1) 
        break;
      //Actualizamos vértices adyacentes con color usado
      update_color_around(main_col, i, color);
    }
    if (i < vertex_num - 1) //Ocurrió que se alcanzó cota superior
      continue;
    if (color_count == lower_bound) 
      return color_count;  //Número cromático
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
/* void next_perm(int * array,int N){ */
/*   register int ii = N-1; */
/*   register int jj = N; */
/*   register int aux = 0; */

/*   while (array[ii-1] >= array[ii]) */
/*     ii = ii-1; */

/*   while (array[jj-1] <= array[ii-1]) */
/*     jj = jj-1; */

/*   aux = array[ii-1]; */
/*   array[ii-1] = array[jj-1]; */
/*   array[jj-1] = aux; */

/*   ii = ii+1; */
/*   jj = N; */

/*   while (ii<jj){ */
/*     aux = array[ii-1]; */
/*     array[ii-1] = array[jj-1]; */
/*     array[jj-1] = aux; */
/*     ii = ii+1; */
/*     jj = jj-1; */
/*   } */
/* } */
