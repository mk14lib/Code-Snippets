#include <iostream>
#include <vector>
using namespace std;

int LargestElement(vector<int>& arr, int n)
{
    int max = 0;
    for(int i = 0; i < n; i++)
    {
        if(max < arr[i])
          max = arr[i];
    }
    return max;
}

int main()
{
    vector<int> arr {9,5,3,4,6,7,8,2,1};  
    int n = arr.size();
    cout << "Largest Element in given array: " << LargestElement(arr, n) << endl;
}
