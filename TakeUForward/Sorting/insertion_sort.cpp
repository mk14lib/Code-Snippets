#include <iostream>
#include <map>
using namespace std;

// Insertion_sort
// Time complexity: O(N2)
// Space Complexity: O(1)
void insertion_sort(int arr[], int n)
{
    for(int i = 0; i < n; ++i)
    {
        // select each item and sort sub-array using inner loop
        int j = i; 
        while(j > 0 && arr[j-1] > arr[j])
        {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

int main()
{
    int arr[] {13,46,24,52,20,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr, n);
    
    for(int i: arr) cout << i << " ";
    cout << endl;
    
    return 0;
}
