#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(int n, int m, vector<vector<int>> edges, int s) {
    vector<vector<int>> adj(n+1);
    vector<int> result;
    
    for(int i = 0; i < m; ++i) 
    {
        int u = edges[i][0], v = edges[i][1];
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    
    map<int, int> distances;
    for(int i = 1; i <= n; i++) distances[i] = 0;
    
    vector<int> visited(n+1, false);
    queue<int> q;
    q.push(s);
    visited[s] = true;
    
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        
        for(int i: adj[node])
        {
            if (!visited[i])
            {
                visited[i] = true;
                distances[i] = distances[node]+1;
                q.push(i);
            }
        }
        
    }
    
    distances.erase(s);
    
    const int weight = 6;
    for(auto item: distances)
    {
        if (item.second != 0)
        result.push_back(item.second*weight);
        else
        result.push_back(-1);
    }
    
    
    return result;
}

int main()
{
    const int testcases = 2;
    vector<vector<int>> tc[testcases] {
                                    {{1, 2}, {1, 3}}, 
                                    {{2, 3}},
                                };
    
    int n[testcases] {4, 3};
    int m[testcases] {2, 1};
    int s[testcases] {1, 2};
    
    for(int i = 0; i < testcases; i++) {
        

        vector<vector<int>> edges = (i == 0? tc[i]:  tc[i]);
        int nodes = (i == 0? n[i]:  n[i]);
        int vertices = (i == 0? m[i]:  m[i]);
        int starting_node = (i == 0? s[i]:  s[i]);
        
        vector<int> result = bfs(nodes, vertices, edges, starting_node);
    
        for (size_t i = 0; i < result.size(); i++) {
            cout  << result[i];
    
            if (i != result.size() - 1) {
                cout  << " ";
            }
        }
    
        cout  << "\n";
    }


    return 0;
}


// sample input
// testcases = 2
// nodes = 4, edges = 2
// {{1, 2}, {1, 3}}
// starting_node = 1
// nodes = 3, edges = 1
// {{2, 3}}
// starting_node = 2

// sample output
// 6 6 -1
// -1 6
