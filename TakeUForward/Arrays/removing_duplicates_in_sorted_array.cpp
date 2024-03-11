#include <iostream>
#include <vector>
using namespace std;

// quicksort
int partition(vector<int>& arr, int low, int high)
{
    int pivot = arr[0];
    int i = low; 
    int j = high;

    while(i < j)
    {
        while(arr[i] <= pivot and i <= high-1)
        {
            i++;
        }

        while(arr[j] > pivot and j >= low+1)
        {
            j--;
        }

        if(i < j) 
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i], arr[low]);
    return j;
}

void quicksort(vector<int>& arr, int low, int high)
{
    // divide and conquer algorithm
    if(low < high)
    {
        int partition_index = partition(arr, low, high);
        quicksort(low, paritition_index-1);
        quicksort(partition_index+1, high);
    }
}

int removeDuplicateinSortedArray(vector<int>& arr, int n)
{
    int duplicate = arr[0];
    int count = 1;
  
    for(int i = 1; i < n; i++)
    {
        if(duplicate != arr[i])
        {
            count++;
            duplicate = arr[i];
        }
    }
    return temp.size();
}

int main()
{
    vector<int> arr {9,5,3,3,2,1,5,4,6,7,8,2,1};  
    int n = arr.size();
    quicksort(arr, 0, n-1);
      
    for(int i: arr) cout << i << " ";
    cout << endl;
      
    cout << "Size of sorted array without duplicates: " << \
    removeDuplicateinSortedArray(arr, n) << endl;
    return 0;
}
