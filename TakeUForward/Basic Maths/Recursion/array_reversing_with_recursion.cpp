#include <iostream>
using namespace std;

void reverse_array(int i, int j, int arr[])
{
    if (i >= j) return;
    swap(arr[i], arr[j]);
    return reverse_array(i+1, j-1, arr);
}

int main()
{
    // reversing array using recursion method
    int arr[] {1,2,3,4,5,6,7,8};
    reverse_array(0, 7, arr);
    
    for(int i: arr) cout << i << " ";
    cout << endl;
    return 0;
}
