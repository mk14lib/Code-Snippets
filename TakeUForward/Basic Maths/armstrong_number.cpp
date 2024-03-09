#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // check Armstrong number or not
    int x = 153;
    int temp = x;
    int ex = to_string(x).length();
    
    int sum = 0;
    
    while(temp)
    {
        sum += pow(temp%10, ex);
        temp/=10;
    }
    
    if (sum == x) cout << "Yes, it is an Armstrong number";
    else cout << "No, it is not an Armstrong number";
    
    return 0;
}
