#include <bits/stdc++.h>
using namespace std;

#define _not_ !
#define _not_equal_to_ !=
#define pair_ pair<int, int>
#define queueof(pair_) queue<pair_>

class Solution {
  private:
    bool cycle(int starting_node, int visited_node[], vector<int> adj[])
    {
        visited_node[starting_node] = true;
        queueof(pair_) q;
        q.push({starting_node, -1});
        
        while(_not_ q.empty())
        {
            int current_node = q.front().first;
            int parent_node  = q.front().second;
            q.pop();
            
            for(int adjacent_node: adj[current_node])
            {
                if (_not_ visited_node[adjacent_node])
                {
                    visited_node[adjacent_node] = true;
                    q.push({adjacent_node, current_node});
                }
                else if (adjacent_node _not_equal_to_ parent_node)
                {
                    return true;
                }
            }
        }
        return false;
    }
    
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        int visited_node[V] {false};
        for(int node = 0; node < V; ++node)
        {
            if (_not_ visited_node[node])
            {
                if (cycle(node, visited_node, adj)) return true;
            }
        }
        return false;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
