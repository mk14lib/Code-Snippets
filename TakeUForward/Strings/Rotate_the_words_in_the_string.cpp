#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "This is a decent string";
    
    string result;
    string temp;
    
    int i = s.length();
    
    while(i-- >= 0)
    {
        if (s[i] == ' ' or i == -1)
        {
            reverse(temp.begin(), temp.end());
            temp += s[i];
            result += temp;
            
            temp = "\0";
        }
        else 
        {
            temp += s[i];
        }
    }
    
    cout << result;
    return 0;
}
