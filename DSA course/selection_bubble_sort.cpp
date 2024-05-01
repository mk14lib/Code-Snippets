#include <bits/stdc++.h>
using namespace std;

void selectionsort(vector<int>& v)
{
    int n = v.size();
    
    for(int i = 0; i <= n-2; ++i) {
        
        int select = i;
        
        for(int j = i+1; j <= n-1; ++j) {
            if (v[select] > v[j]) {
                select = j;
            }
        }
        
        swap(v[i], v[select]);
    }
}

void bubblesort(vector<int>& v)
{
    int n = v.size();
    
    for(int count = 1; count <= n-1; ++count) {
        
        bool isSorted=true;
        
        for(int j = 0; j <= n-2; ++j) {
            if (v[j+1] < v[j]) {
                swap(v[j+1], v[j]);
                isSorted=false;
            }
        }
        
        if (isSorted == true) {
            break;
        }
    }
}

int main()
{
    vector<int> v { 5, 4, 3, 2, 8, 7};
    // selectionsort(v);
    bubblesort(v);
    
    for(int i: v) cout << i << " ";
    cout << endl;
    return 0;
}
