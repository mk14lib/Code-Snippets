#include <iostream>
using namespace std;

int main()
{
    // fibonacci series
    int first  = 0;
    int second = 1;
    
    int n = 10;
    int third = 0;
    
    cout << first << " " << second;
    for(int i = 1; i <= n-2; ++i) 
    {
        third = first + second;
        cout << " " << third;
        first  = second;
        second = third;
    }
    
    
    
    return 0;
}
