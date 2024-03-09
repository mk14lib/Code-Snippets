#include <iostream>
using namespace std;

int main()
{
    // reverse the given number
    int number = 234;
    int reverse_number = 0;
    
    while(number)
    {
       reverse_number = reverse_number*10 + number%10;
       number/=10;
    }
    
    cout << reverse_number << endl;
    
    return 0;
}
