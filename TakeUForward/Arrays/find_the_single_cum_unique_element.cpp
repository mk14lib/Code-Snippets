#include <iostream>
#include <vector>
using namespace std;

int getSingleElement(vector<int> &arr){
    // method-1: O(N) time complexity
    // int res = 0;
    // for(int i: arr)
    // {
    //     res ^= i;
    // }
    // return res;

    // method-2: O(logN) time complexity
    // binary search method

    int low = 0;
    int high = arr.size()-1;

    while(low < high)
    {
        int mid = low + (high - low)/2;
        
        if (mid % 2 == 0) // if mid is even
        {
            if (arr[mid] == arr[mid+1]) // check if current element and succeeding element are same or not
            {
                low = mid + 2; // increment evenly
            }
            else
            {
                high = mid;
            }
        }
        else // if mid is odd
        {
            if (arr[mid] == arr[mid-1]) // check if current and preceding element are same or not
            {
                low = mid + 1; // increment oddly
            }
            else
            {
                high = mid;
            }
        }
    }
    return arr[low];
    
}

int main()
{
    vector<int> arr {1, 1, 2, 3, 3, 4, 4};
    
    for(int i: arr) cout << i << " ";
    cout << endl;
    
    cout << getSingleElement(arr) << endl;
    return 0;
}
