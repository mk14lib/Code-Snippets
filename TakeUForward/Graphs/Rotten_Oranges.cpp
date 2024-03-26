//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    
    enum {
        not_empty = false,
        empty = true,
        not_possible = -1,
        directions = 4,
    };
    
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        if (grid.empty()) return 0;
        
        queue<pair<int, int>> rotten_oranges;
        
        int m = grid.size(), 
            n = grid[0].size();
        int total_oranges = 0;
        int rotten_oranges_count = 0;
        int earliest_time = 0;
        
        for(int i = 0; i < m; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                if (grid[i][j] == 2) 
                    rotten_oranges.push({i, j});
                    
                if (grid[i][j] != 0) 
                    total_oranges++;
            }
        }
        
    // DIRECTION - BOTTOM TOP RIGHT LEFT 
        int dx[4] {0, 0, 1, -1};
        int dy[4] {1, -1, 0, 0};
        
        while(rotten_oranges.empty() == not_empty)
        {
            int k = rotten_oranges.size();
            rotten_oranges_count += k;
            
            while(k--)
            {
                int x = rotten_oranges.front().first,
                    y = rotten_oranges.front().second;
                    
                rotten_oranges.pop();
                
                for(int i = 0; i < directions; ++i)
                {
                    int nx = x + dx[i], 
                        ny = y + dy[i];
                    
                    if (nx < 0 or ny < 0 or nx >= m or ny >= n or grid[nx][ny] != 1)
                    {
                        continue;
                    }
                    
                    grid[nx][ny] = 2;
                    rotten_oranges.push({nx, ny});
                }
            }
            
            if (rotten_oranges.empty() == not_empty)
            {
                earliest_time++;
            }
        }
        
        return (total_oranges == rotten_oranges_count)? earliest_time: not_possible;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
