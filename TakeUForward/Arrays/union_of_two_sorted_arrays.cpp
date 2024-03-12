#include <iostream>
#include <vector>
using namespace std;

// time complexity: o(m+n)
vector <int> sortedArray(vector <int> a, vector <int> b)
{
    // extra space: o(m+n), auxiliary stack space: o(1)
    vector<int> res;
    
    int i = 0;
    int j = 0;
    
    while(i < a.size() and j < b.size())
    {
        if (a[i] <= b[j])
        {
            if (res.size() == 0 or res.back() != a[i]) {
                res.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (res.size() == 0 or res.back() != b[j]) {
                res.push_back(b[j]);
            }
            j++;
        }
    }
    
    while(i < a.size())
    {
        res.push_back(a[i]);
        i++;   
    }
    
    while(j < b.size())
    {
        res.push_back(b[j]);
        j++;
    }
    return res;
}

int main()
{
    vector<int> a {1, 2, 3, 4, 6};
    vector<int> b {2, 3, 5};
    vector<int> arr = sortedArray(a, b);
    
    for(int i: arr) cout << i << " ";
    cout << endl;
    return 0;
}
