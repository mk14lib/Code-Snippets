#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // find the number of digits in a given number
    int x = 123, i = 123;
    
    // method-1: O(N)
    int count = 0;
    while(i)
    {
        i/=10;
        count++;
    }
    cout << count << endl;
    
    // method-2: O(1)
    cout << to_string(x).length() << endl;
    
    // method-3: O(1)
    cout << floor(log10(x)+1) << endl;
    
    return 0;
}
