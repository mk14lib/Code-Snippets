#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
    public: 
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {        
        if (r == 0 or c == 0) return {};
        
        vector<int> ans;
        
        int sr = 0, sc = 0, er = r-1, ec = c-1;
        int count = 0;
        
        while(sr <= er && sc <= ec)
        {
            for(int i = sc; i <= ec; ++i) {
                ans.push_back(matrix[sr][i]);
                count++;
            }
            if (count == r*c) return ans;
            sr++;
            
            for(int i = sr; i <= er; ++i) {
                ans.push_back(matrix[i][ec]);
                count++;
            }
            if (count == r*c) return ans;
            ec--;
            
            for(int i = ec; i >= sc; i--) {
                ans.push_back(matrix[er][i]);
                count++;
            }
            if (count == r*c) return ans;
            er--;
            
            for(int i = er; i >= sr; i--) {
                ans.push_back(matrix[i][sc]);
                count++;
            }
            if (count == r*c) return ans;
            sc++;
        }
        
        return ans;
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
