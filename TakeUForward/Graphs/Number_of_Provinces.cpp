void dfs(int node, int visited[], vector<int> adj[]) 
{
    visited[node] = true;

    for (int i : adj[node])
    {
      if (!visited[i]) 
      {
        dfs(i, visited, adj);
      }
    }
}

int findNumOfProvinces(vector<vector<int>>& roads, int n) {
    vector<int> adj[n];

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (roads[i][j] == 1 and i != j) {
            adj[i].push_back(j);
            adj[j].push_back(i);
        }
      }
    }

    int visited[n] {false};
    int provinces = 0;

    for (int i = 0; i < n; i++) {
      if (!visited[i]) {
          provinces++;
          dfs(i, visited, adj);
      }
    }
    
    return provinces;
}
