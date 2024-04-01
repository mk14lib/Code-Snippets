#include <bits/stdc++.h>
using namespace std;

//frog jump problem: https://www.naukri.com/code360/problems/frog-jump_3621012
int frogJump(int n, vector<int> &heights, vector<int>& dp)
{
    // Write your code here.
    if (n == 0) return 0;
    if (dp[n] != -1) return dp[n];
    
    int left = frogJump(n-1, heights, dp) + abs(heights[n] - heights[n-1]);
    
    int right = INT_MAX;
    if (n > 1)
    {
        right = frogJump(n-2, heights, dp) + abs(heights[n] - heights[n-2]);
    }
    
    return dp[n] = min(left, right);
}

int main()
{
    vector<int> heights {10, 20, 30, 10};
    int n = 4;
    
    vector<int> dp(n+1, -1);
    cout << frogJump(n-1, heights, dp);
    return 0;
}
