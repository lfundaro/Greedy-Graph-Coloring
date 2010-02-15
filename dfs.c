dfs(row_vertex graph[], int* neightbors, int* control_set){
  linked_list* aux = graph[vertex].pt;

  while (aux!=NULL){
    if (! control_set[aux->vertex]){
      control_set[aux->vertex]=1;
      dfs(graph,neightbors,control_set);
    }
    aux=aux->next;
  }
}
