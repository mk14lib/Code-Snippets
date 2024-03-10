#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[],int low,int mid,int high)
{
    /*
    Steps:
    1. Take temp_array and two pointers - left, right.
    2. left = 0, (lower_bound).
    3. right = n, (upper_bound).
    4. iterate with condition (left <= mid and right <= high)
    5. In loop, if (left element > right element) then copy left element to temp_array else right element.
    6. Take another two loop to take all the remain elements in the splits of array.
    7. Finally copy the temp_array data to original_array with index: (i - low).
    */
    
    vector<int> temp;
    
    int left = low;
    int right = mid+1;
    
    while(left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;            
        }
    }
    
    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    
    while(right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    
    for(int i = low; i <= high; ++i)
    {
        arr[i] = temp[i - low];
    }
    
}

// mergesort 
// Time complexity: O(nlogn) 
// Space complexity: O(n)  
void mergesort(int arr[], int low, int high)
{
    /*
    Steps:
    1. Base class, if (LOWER_INDEX >= UPPER_INDEX) then RETURN.
    2. Split the array into exactly 2 halves and Sort. 
    3. merge the array in the end using merge function.
    */
    
    if (low >= high) return;
    int mid = (low + high)/2;
    mergesort(arr, low, mid);
    mergesort(arr, mid+1, high);
    merge(arr, low, mid, high);
}



int main()
{
    int arr[] {9, 4, 7, 6, 3, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr, 0, n-1);
    
    for(int i: arr) cout << i << " ";
    return 0;
}
