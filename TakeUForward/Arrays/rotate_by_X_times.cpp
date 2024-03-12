#include <iostream>
#include <algorithm>
using namespace std;

void rotate_left_x_times(vector<int>& arr, int x)
{
    reverse(arr.begin(), arr.begin()+x);
    reverse(arr.begin()+x, arr.end());
    reverse(arr.begin(), arr.end());
}

int main()
{
    vector<int> arr {5, 4, 2, 1, 3}; 
    int x = 3;
    rotate_left_x_times(arr, x);
    for(int i: arr) cout << i << " ";
    cout << endl;
    return 0;
}
