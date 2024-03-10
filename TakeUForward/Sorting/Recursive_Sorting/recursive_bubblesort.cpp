#include <iostream>
#include <vector>
using namespace std;

// Time Complexity: O(N2)
// Space Complexity: O(N) stack space
void recursive_bubblesort(int arr[], int n)
{
    // base case: if (n becomes 1) then return
    if (n == 1) return;
    
    for(int i = 0; i < n-2; ++i)
    {
        if (arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }
    
    recursive_bubblesort(arr, n-1);
}



int main()
{
    int arr[] {9, 4, 7, 6, 3, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    recursive_bubblesort(arr, n);
    
    for(int i: arr) cout << i << " ";
    return 0;
}
