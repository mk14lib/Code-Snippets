#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    vector<int> stack1 {1,1,1,2,3}, stack2 {2,3,4}, stack3 {1,4,1,1};
    map<int, int> mp;
    const int numOfStacks = 3;
    
    for(int i = 0; i < numOfStacks; ++i)
    {
        vector<int> selectStack = (i == 0? stack1: (i == 1? stack2: stack3));
        
        int sum = 0;
        for(int item : selectStack)
        {
            sum += item;
            mp[sum]++;
        }
    }
    
    cout << "Debug Output: " << endl;
    for(auto item: mp) cout << item.first << " " << item.second << endl;
    
    cout << "\nResult: " << endl;
    int ans = 0;
    for(auto item: mp)
    {
        if(item.second == 3)
        {
            ans = max(ans, item.first);
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
