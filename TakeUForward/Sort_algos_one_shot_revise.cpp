#include <bits/stdc++.h>
using namespace std;

void Rbubble_sort(int arr[], int n)
{
    if (n == 1) return; 
    for(int i = 0; i <= n-2; i++)
    {
        if (arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }
    Rbubble_sort(arr, n-1);
}

void Rinsertion_sort(int arr[], int i, int n)
{
    if (i == n) return;
    
    int j = i;
    while(j > 0 and arr[j-1] > arr[j])
    {
        swap(arr[j-1], arr[j]);
        j--;
    }
    Rinsertion_sort(arr, i+1, n);
}

void bubble_sort(int arr[], int n)
{
    for(int i = n-1; i >= 0; i--)
    {
        bool already_sorted = true;
        for(int j = 0; j < i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j+1], arr[j]);
                already_sorted = false;
            }
        }
        if (already_sorted) break;
    }
}

void insertion_sort(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j])
        {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

void selection_sort(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int min = i;
        for(int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

/* Merge sort */
void merge(int arr[], int low, int mid, int high)
{
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

    for(int i = low; i <= high; i++)
    {
        arr[i] = temp[i-low];
    }
}

void mergesort(int arr[], int low, int high)
{
    if(low >= high) return;
    int mid = (low + high)/2;
    mergesort(arr, low, mid);
    mergesort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

/* Quick sort */
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    
    while(i < j)
    {
        while(arr[i] <= pivot && i <= high-1)
        {
            i++;
        }
        
        while(arr[j] > pivot && j >= low+1)
        {
            j--;
        }
        
        if (i < j) 
        {
            swap(arr[i], arr[j]);
        }
    }
    
    swap(arr[low], arr[j]);
    return j;
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int partition_index = partition(arr, low, high);
        quicksort(arr, low, partition_index-1);
        quicksort(arr, partition_index+1, high);
    }
}

int main()
{
    /* Input #1 */
    int arr[] {9, 5, 3, 2, 4, 7};
    
    /* Input #2 */
    // int arr[] {1,2,3,4,5};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // Rbubble_sort(arr, n);
    
    // Rinsertion_sort(arr, 0, n);
    
    // bubble_sort(arr, n);
    
    // insertion_sort(arr, n);
    
    // selection_sort(arr, n);
    
    // mergesort(arr, 0, n-1);
    
    quicksort(arr, 0, n-1);
    
    /* Output */
    for(int i: arr) cout << i << " ";
    return 0;
}
