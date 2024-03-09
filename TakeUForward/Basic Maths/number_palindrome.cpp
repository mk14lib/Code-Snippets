#include <iostream>
using namespace std;

int main()
{
    // check the given number for palindrome or not
    int x = 121;
    int reverse = 0;
    
    while(x)
    {
        reverse = reverse*10 + x%10;
        x /= 10;
    }
    
    if (reverse == x) cout << "Palindrome";
    else cout << "Not palindrome";
    
    return 0;
}
