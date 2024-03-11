#include <iostream>
#include <vector>
#include <pair>
using namespace std;

pair<int, int> second_Smallest_Largest(vector<int>& arr, int n)
{
    int max = arr[0];
    int min = arr[0];
    int second_min = INT_MAX;
    int second_max = INT_MIN;
    
    for(int i = 1; i < n; i++)
    {
        if (max < arr[i]) 
        {
            second_max = max;
            max = arr[i];
        }
        if (arr[i] < max && arr[i] > second_max)
        {
            second_max = arr[i];
        }
        
        if (min > arr[i])
        {
            second_min = min;
            min = arr[i];
        }
        
        if (second_min > arr[i] && min < arr[i])
        {
            second_min = arr[i];
        }
    }
    
    return make_pair(second_min, second_max);
}

int main()
{
    vector<int> arr {9,5,3,4,6,7,8,2,1};  
  
    int n = arr.size();
    for(int i: arr) cout << i << " ";
    cout << endl;

    pair<int, int> result = second_Smallest_Largest(arr, n);
    cout << "Second Smallest: " << setw(2) << result.first << "\nSecond Largest: " << setw(3) << result.second << endl;
    return 0;
}
