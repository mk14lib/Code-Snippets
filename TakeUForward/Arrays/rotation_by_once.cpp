#include <iostream>
#include <vector>
using namespace std;

void rotateOnlyOnce(vector<int>& arr, int n)
{
    int temp = arr[0];
    for(int i = 1;i < n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

int main()
{
    vector<int> arr {9,5,3,4,6,7,8,2,1};  
    int n = arr.size();

    rotateOnlyOnce(arr, n);
    for(int i: arr) cout << i << " ";
    cout << endl;
    
    return 0;
}

