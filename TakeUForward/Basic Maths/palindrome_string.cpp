#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string st)
{
    cout << endl;
    int n = st.length();
    for(int i = 0; i <= n/2; i++)
        if (st[i] != st[n-i-1]) return false;
    return true;
}

int main()
{
    // method-1: O(N)
    string st = "ABCDCBA";
    string temp = st;
    reverse(temp.begin(), temp.end());
    if (st == temp) cout << "Palindrome";
    else cout << "Not Palindrome";
    
    // method-2: O(N/2)
    if (compare(st)) cout << "Palindrome";
    else cout << "Not Palindrome";
    
    return 0;
}
