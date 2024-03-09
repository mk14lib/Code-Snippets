#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   // check if a number is prime or not
   int n = 1;
   
   if (n == 1) 
   {
       cout << "Not a prime";
       return 0;
   }
   
   for(int i=2; i <= sqrt(n); i++)
   {
       if (n%i==0) 
       {
           cout << "Not a prime";
           return 0;
       }
   }
   cout << "Prime";
    
    return 0;
}
