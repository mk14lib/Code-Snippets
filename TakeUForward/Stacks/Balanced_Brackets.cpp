#include <bits/stdc++.h>
using namespace std;

string balanced_brackets(string s)
{
    stack<int> st;
    cout << s << " ";
    
    for(char i : s)    
    {
        if ( i == '{' or i == '(' or i == '[' ) 
        {
            st.push(i);
        }
        else
        {
            if(st.empty()) return "NO";
            
            char ch = st.top();
            st.pop();
            
            if ((ch == '(' and i == ')') or (ch == '{' and i == '}') or (ch == '[' and i == ']'));
            else
            {
                return "NO";
            }
        }
    }
    
    if (st.empty()) 
        return "YES";
    else
        return "NO";
}

int main()
{
    string s1 = "{[()]}";
    string s2 = "{[(])}";     
    string s3 = "{{[[(())]]}}";
    
    for(int i = 0; i < 3; i++)
    {
        string s = (i == 0? s1: (i == 1? s2: s3));
        
        cout << balanced_brackets(s) << endl;
    }
    
    return 0;
}
