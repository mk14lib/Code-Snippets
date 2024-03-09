#include <iostream>
using namespace std;

int main()
{
    // hash table
    int n = 6;
    int arr[n+1] {0, };
    int range = 4;
    int input[6] {1, 3, 4, 3, 4, 1};
    
    for(int i: input) arr[i]++;
    for(int i = 1; i <= n; ++i) cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}
