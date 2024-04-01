#include<bits/stdc++.h>
using namespace std;

vector<int> dp(100000, -1);
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        /* if (n <= 1) return 1; return countWays(n-1) + countWays(n-2); */
      
        if (n <= 1) return 1;
        if (dp[n] != -1) return dp[n];
        return dp[n] = countWays(n-1) + countWays(n-2);
    }
};


int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
