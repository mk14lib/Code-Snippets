#include <iostream>
#include <map>
using namespace std;

// Bubble Sort
// Time complexity: O(N2)
// Space Complexity: O(1)
void bubble_sort(int arr[], int n)
{
    for(int i = n-1; i >= 0; i--)
    {
        // optimized #1
        bool already_sorted = true;
        
        // { basic
        for(int j = 0; j <= i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                
                // optimized #2
                already_sorted = false;
            }
        }
        // }
        
        // { optimized #3
        if ( already_sorted ) 
            break;
        // }
    }
}

int main()
{
    int arr[] {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, n);
    
    for(int i: arr) cout << i << " ";
    cout << endl;
    
    return 0;
}
