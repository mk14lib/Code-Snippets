#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a%b);
}

int main()
{
    // GCD of a number
    
    // method-1: O(N)
    int a = 4, b = 8;
    int res = 0;
    
    for(int i = 1;i <= min(a, b); i++)
    {
        if (a%i == 0 && b%i == 0)
        res = i;
    }
    cout << res << endl;
    
    // method-2:  O(logɸmin(a,b)) Euclidean method gcd(a, b) = gcd(b, a%b) when (b != 0) 
    cout << gcd(a, b) << endl;
    
    return 0;
}
