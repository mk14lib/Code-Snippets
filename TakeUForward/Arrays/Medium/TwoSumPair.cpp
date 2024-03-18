#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


vector<int> twoSumPair(vector<int>& arr, int n, int target)
{
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        if (mp.find(target-arr[i]) != mp.end())
        {
            return {mp[target-arr[i]], i};
        }
        mp[arr[i]] = i;
    }
    return {-1, -1};
}

int main()
{
    vector<int> arr {2,1,3,4};
    int target = 4;
    int n = arr.size();
    
    vector<int> res = twoSumPair(arr, n, target);
    for(int i: res) cout << i << " ";

    return 0;
}
