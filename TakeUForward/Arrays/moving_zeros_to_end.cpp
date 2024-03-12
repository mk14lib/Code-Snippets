#include <iostream>
#include <vector>
using namespace std;

vector<int>& moveZerotoEnd(vector<int>& arr, int n)
{
    /* method-1 with extra space 
    vector<int> temp;
    
    for(int i = 0; i < n; ++i)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }
    
    for(int i = temp.size(); i < n; i++)
    {
        temp.push_back(0);
    }
    
    arr.assign(temp.begin(), temp.end());
    return arr;
    */
    
    // method-2: two pointers approach
    int j = 0;
    
    for(int i = 0; i < n; i++) 
    {
        if (arr[i] == 0) 
        {
            j = i;
            break;
        }
    }
    
    for(int i = j+1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    
    return arr;
}

int main()
{ 
    vector<int> arr {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};  
    int n = arr.size();    
    vector<int> res = moveZerotoEnd(arr, n);
    for(int i: res) cout << i << " ";
    cout << endl;
    return 0;
}
