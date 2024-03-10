#include <iostream>
#include <map>
using namespace std;

/* method-1: straight forward swapping
void selection_sort(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}
*/

// method-2: copy index and sort --> correct method 
void selection_sort(int arr[], int n)
{
    for(int i = 0; i < n; ++i)
    {
        int mini = i;
        for(int j = i+1; j < n; ++j)
        {
            if (arr[i] > arr[j]) {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
}

int binary_search(int arr[], int n, int k)
{
    int left  = 0;
    int right = n-1;
    
    while(left <= right)
    {
        int middle = (left + right)/2;
        
        if (arr[middle] == k) {
            return middle;
        }
        else if (arr[middle] > k) {
            right = middle-1;
        }
        else {
            left = middle+1;
        }
    }
    return -1; // if not found
}

int main()
{
    int arr[] {13,46,24,52,20,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    
    for(int i: arr) cout << i << " ";
    cout << endl;
    
    cout << binary_search(arr, n, 13);
    
    return 0;
}
