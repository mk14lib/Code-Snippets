#include <iostream>
#include <vector>
using namespace std;

// recursive insertion sort
void insertion_sort(int arr[], int i, int n)
{
    // base case 
    if (i >= n) return;

    int j = i;
    while(j > 0 && arr[j-1] > arr[j])
    {
        swap(arr[j-1], arr[j]);
        j--;
    }
    
    insertion_sort(arr, i+1, n);
}


int main()
{
    int arr[] {7,3,2,5,1,5,3,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr, 0, n);
    
    for(int i: arr) cout << i << " ";
    return 0;
}
