#include <iostream>
using namespace std;

void func1(int i, int n)
{
    if (i > n) return;
    cout <<  i << " ";
    return func1(i+1, n);
}

void func2(int i, int n)
{
    if (i < 1) return;
    cout <<  i << " ";
    return func2(i-1, n);
}

int main()
{
    // recursion: print from 1 to N 
    int n = 5;
    func1(1, n);
    cout << endl;
    
    // print from N to 1
    func2(n, n);
    
    return 0;
}
