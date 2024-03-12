#include <iostream>
#include <vector>
using namespace std;

int counting_consective_ones(vector<int> arr)
{
    int whichever_is_max = 0;
    int count = 0;
    
    for(int i: arr)
    {
        if (i != 1)
        {
            whichever_is_max = max(whichever_is_max, count);
            count = 0;
        }
        else
        {
            count++;
        }
    }
    
    return max(whichever_is_max, count);
}

int main()
{
    vector<int> arr {1, 0, 1, 1, 0, 1};
    
    for(int i: arr) cout << i << " ";
    cout << endl;
    cout << "Maximum consective one's: " << counting_consective_ones(arr);
    return 0;
}
