#include <iostream>
#include <vector>
using namespace std;

int linear_search(vector<int> arr, int k)
{
    for(int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == k)
            return i;
    }
    return -1;
}

int main()
{
    vector<int> arr {1,2,3,4,5};
    int k = 2;
    cout << linear_search(arr, k) << endl;
    return 0;
}
