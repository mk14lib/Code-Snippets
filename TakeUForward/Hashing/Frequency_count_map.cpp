#include <iostream>
#include <map>
using namespace std;

void countarr(int arr[], int n)
{
    map<int, int> mp;
    
    for(int i = 0; i < n; i++)  mp[arr[i]]++;
    
    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;
    
    for(auto i : mp)
    {
        if (maxFreq < i.second)
        {
            maxEle = i.first;
            maxFreq = i.second;
        }
        
        if(minFreq > i.second)
        {
            minEle = i.first;
            minFreq = i.second;   
        }
    }
    
    cout << "Maximum Frequency element: " << maxEle << endl;
    cout << "Minimum Frequency element: " << minEle << endl;
}

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countarr(arr, n);
    return 0;
}
