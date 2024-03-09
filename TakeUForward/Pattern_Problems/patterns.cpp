#include <iostream>
#include <vector>
#include <unordered_set>
#include <set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue> 
#include <forward_list>
#include <list>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
/*
    // common algorithms in use for competitive programming
    string s = "abc";
    
    do {
        cout << s << endl;
    }
    while(next_permutation(s.begin(), s.end()));
    
    // prints the number of set bits of a given number
    cout << __builtin_popcount(0xf) << endl;


    int arr[8] {34, 2, 42, 12, 56, 87, 12, 0, };
    sort(arr, arr+8); // ascending order
    sort(arr, arr+8, greater<int>()); // descending order
    
    for(int i : arr) cout << i << " ";
    cout << endl;

    int arr1[8] {34, 2, 42, 12, 56, 87, 12, 0, };
    int min = *min_element(arr1, arr1+8);
    int max = *max_element(arr1, arr1+8);
    
    cout << "min: " << min << " " << "max: " << max << endl;



    // multiset, set -- part of set header
    // similarly, mutlimap and map
    
    // priority_queue concepts -- min heap and max heap
    // general syntax offers min heap -- root node has lowest value
    priority_queue<int> pq; 
    
    for(int i = 0; i < 8; i++)
    {
        int value;
        cin >> value;
        pq.emplace(value);
    }
    
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
  
    // extended syntax offers max heap -- root node has highest value
    priority_queue<int, vector<int>, greater<int>> pq; 
    
    for(int i = 0; i < 8; i++)
    {
        int value;
        cin >> value;
        pq.emplace(value);
    }
    
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

#ifdef PATTERN

* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 

#endif

    int N = 5;
    for(int i = 1; i <= N; i++)
    {
        int j = 1;
        for(j = 1; j <= i; j++)
        cout << "* ";
        
        cout << endl;
    }    
    
    for(int i = N-1; i > 0; i--)
    {
        int j = 1;
        for(j = 1; j <= i; j++)
        cout << "* ";
        
        cout << endl;
    }


#ifdef 

1 
0 1 
0 1 0 
1 0 1 0 
1 0 1 0 1 

#endif

    int ik = 0;
    int N = 5;
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            ik ^= 1;
            cout << ik << " ";
        }
        cout << endl;
    }

#ifdef PATTERN

1
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

#endif

    int N = 5;
    int value = 1;
    for(int i = 1; i <= N; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << value << " ";
            ++value;
        }
        cout << endl;
    }

#ifdef

A
A B 
A B C 
A B C D 
A B C D E 

#endif
    int N = 5;
    for(int i = 1; i <= N; ++i)
    {
        char ch = 'A';
        for(int j = 1; j <= i; ++j)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

#ifdef

E 
D E 
C D E 
B C D E 
A B C D E 

#endif

    int N = 5;
    for(int i = 1; i <= N; i++)
    {
        char ch = 'E'-i+1;
        for(int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

#ifdef

* * * * 
*     * 
*     * 
* * * * 

#endif

    for(int i = 0; i < 4; ++i)
    {
        for(int j = 0; j < 4; j++)
        {
            if (i == 0 || j == 0 || i == 3 || j == 3) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }

#ifdef PATTERN

    *
   ***
  *****
 *******
*********

#endif
    
    int val = 1;
    int n = 5;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j > i; j--)
        {
            cout << " ";
        }
        
        for(int j = 1; j <= val; j++)
        {
            cout << "*";
        }
        val += 2;
        cout << endl;
    }

#ifdef PATTERN

*********
 *******
  *****
   ***
    *

#endif

    int n = 5;
    int val = (2*n - 1);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j < i; j++)
        {
            cout << " ";
        }
        
        for(int j = 1; j <= val; j++)
        {
            cout << "*";
        }
        val -= 2;
        cout << endl;
    }

#ifdef PATTERN

1        1
12      21
123    321
1234  4321
1234554321

#endif

    int n = 5;
    int sp = 2*n-2;
    for(int i = 1; i <= n; i++)
    {
        int j = 1;
        for(j = 1; j <= i; j++)
        {
            cout << j;
        }

        for(int j = sp; j >= 1; j--)
        cout << " ";
        
        sp -= 2;
        
        --j;
        for(; j >=1; j--)
        {
            
            cout << j;
        }
        cout << endl;
    }

#ifdef PATTERN

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

#endif

    int n = 5;
    for(int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for(int j = i; j <= n-1; j++)
        cout << " ";
        
        int j = 0;
        for(j = 0; j < i; j++) cout << ch++;
        ch--;
        for(j = 1; j < i; j++) cout << --ch;
        
        cout << endl;
    }
    


#ifdef PATTERN

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
    
#endif

    int n = 5;
    char ch = '*';
    int spaces = 2*n-2;
    int stars = 0;
    
    for(int i = 1; i <= 2*n-1; i++)
    {
        if (i > n) stars = 2*n-i;
        else stars = i;
        
        // stars
        for(int j = 1; j <= stars; j++) cout << ch;
        
        // spaces
        for(int j = 1; j <= spaces; j++) cout << " ";
        
        // stars
        for(int j = 1; j <= stars; j++) cout << ch;

        cout << endl;
        
        if (i < n) spaces -= 2;
        else spaces += 2;
    }

#ifdef PATTERN

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

#endif

    int n = 5;
    int stars = n;   
    int spaces = 0;
    
    for(int i = 1; i <= n; ++i)
    {
        
        // stars
        for(int j = 1; j <= stars; ++j) cout << "*";
        
        // spaces
        for(int j = 1; j <= spaces; ++j) cout << " ";
        
        // stars
        for(int j = 1; j <= stars; ++j) cout << "*";
        
        stars = n-i;
        spaces += 2;
        
        cout << endl;
    }
    
    spaces = 2*n-2;
    for(int i = 1; i <= n; ++i)
    {
        stars = i;
        
        // stars
        for(int j = 1; j <= stars; ++j) cout << "*";
        
        // spaces
        for(int j = 1; j <= spaces; ++j) cout << " ";
        
        // stars
        for(int j = 1; j <= stars; ++j) cout << "*";
        
        spaces -= 2;
        
        cout << endl;
    }
*/ 

#ifdef PATTERN

4444444
4333334
4322234
4321234
4322234
4333334
4444444

#endif

    int n = 4;
    for(int i = 0; i < 2*n-1; ++i)
    {
        for(int j = 0; j < 2*n-1; ++j)
        {
            int top = i;
            int right = j;
            int left = (2*n-2) - j;
            int bottom = (2*n-2) - i;
            
            cout << n - min(min(top, left), min(right, bottom));
        }
        cout << endl;
    }
    
    return 0;
}

