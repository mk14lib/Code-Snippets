#include <iostream>
#include <vector>
using namespace std;

int missing_number(vector<int> arr, int range)
{
    int n = (range*(range+1))/2;
    
    for(int i = 0; i < arr.size(); i++)
    {
        n -= arr[i];
    }
    return n;

    /* approach 2: xor operation
    int xor1 = 0, xor2 = 0;
    
    for(int i =0; i < range; i++)
    {
        xor1 = xor1 ^ arr[i];
        xor2 = xor2 ^ (i + 1);
    }
    
    return xor1 ^ xor2;
    */
}

int main()
{
    int range = 5;
    vector<int> arr {1,2,4,5};
    // int range = 3;
    // vector<int> arr {1,3};
    
    for(int i: arr) cout << i << " ";
    cout << endl;
    
    cout << "Missing Number: " << missing_number(arr, range) << endl;
    return 0;
}
