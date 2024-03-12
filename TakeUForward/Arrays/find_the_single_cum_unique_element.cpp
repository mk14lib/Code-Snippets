#include <iostream>
#include <vector>
using namespace std;

int getSingleElement(vector<int> &arr){
    int res = 0;
    for(int i: arr)
    {
        res ^= i;
    }
    return res;
}

int main()
{
    vector<int> arr {1, 1, 2, 3, 3, 4, 4};
    
    for(int i: arr) cout << i << " ";
    cout << endl;
    
    cout << getSingleElement(arr) << endl;
    return 0;
}
