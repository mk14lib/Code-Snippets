#include <iostream>
using namespace std;

int main()
{
    // print all divisors of given number
    int n = 6;
    
    for(int i = 1; i <= 10; ++i)
    if (n%i==0) cout <<  i << " ";
    cout << endl;
    
    return 0;
}
