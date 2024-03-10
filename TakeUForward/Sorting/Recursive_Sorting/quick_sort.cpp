#include <iostream>
#include <vector>
using namespace std;


// Quick sort 
// Time Complexity: O(N*logN)
// Space Complexity: O(1) + O(N) auxiliary stack space.
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    
    while(i < j) 
    {
        // low --> high
        while(arr[i] <= pivot && i <= high-1)
        {
            i++;
        }
        
        // high --> low
        while(arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    
    swap(arr[j], arr[low]);
    return j;
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int partition_index = partition(arr, low, high);
        quicksort(arr, low, partition_index - 1);
        quicksort(arr, partition_index + 1, high);
    }
}

int main()
{
    int arr[] {9, 4, 7, 6, 3, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr, 0, n-1);
    
    for(int i: arr) cout << i << " ";
    return 0;
}
