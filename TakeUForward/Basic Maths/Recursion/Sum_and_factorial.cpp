#include <iostream>
using namespace std;

int sum_of_natural_numbers(int n)
{
    if (n == 0) return n;
    return n + sum_of_natural_numbers(n-1);
}

int factorial(int n)
{
    if (n == 1) return n;
    return n*factorial(n-1);
}

int main()
{
    // Sum of natural numbers - Recursive sum
    int sum = 0;
    int n = 5;
    
    cout << "Sum of first " << n << " natural numbers: " << sum_of_natural_numbers(n) << endl;
    
    // iterative sum
    for(int i = 1;i <= n; i++) sum += i;
    cout << "Sum of first " << n << " natural numbers: " << sum << endl;
    
    // Factorial of a number - Recursive Factorial
    int fact = 1;
    cout << "Factorial of " << n << ": " << factorial(n) << endl;
    
    // iterative factorial
    for(int i = 1; i <= n; i++) fact *= i;
    cout << "Factorial of " << n << ": " << fact << endl;
    
    return 0;
}
