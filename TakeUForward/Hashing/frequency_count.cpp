#include <iostream>
#include <vector>
using namespace std;

void countarr(int arr[], int n)
{
    vector<bool> visited(n, false);
    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;
    
    for(int i = 0; i < n; i++)
    {
        int count = 1;
        
        if (visited[i] == true)
        {
            continue;
        }
        
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        
        if (count > maxFreq)
        {
            maxEle = arr[i];
            maxFreq = count;
        }
        
        if (count < minFreq)
        {
            minEle = arr[i];
            minFreq = count;
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

