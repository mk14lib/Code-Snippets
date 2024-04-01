#include <bits/stdc++.h>
using namespace std;

// memoization of fibonnaci series
int fib(int n, vector<int>& dp)
{
    if (n <= 1) return n;
    if (dp[n] != -1) return dp[n];
    return dp[n] = fib(n-1, dp) + fib(n-2, dp);
}

int main()
{
    int n = 6;
    vector<int> dp(n+1, -1);
    cout << fib(n, dp) << endl;
    
    // tabulation of fibonnaci series
    dp[0] = 0; dp[1] = 1;
    for(int i = 2; i <= n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[n] << endl;


    // optimization
    int first = 0;
    int second = 1;
    int result {};
    
    for(int i =2; i <= n; i++)
    {
        result = first + second;
        first = second;
        second = result;
    }
    cout << result << endl;
    
    return 0;
}
