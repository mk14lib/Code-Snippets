#include <bits/stdc++.h>
using namespace std;

int summer(vector<int>& v)
{
    int sum = 0;
    for(int i: v) sum += i;
    return sum;
}

int equalstacks(vector<int> h1, vector<int> h2, vector<int> h3)
{
    int totalHeight = h1.size() + h2.size() + h3.size();
    
    int sum1 = summer(h1);
    int sum2 = summer(h2);
    int sum3 = summer(h3);
    
    int minHeight = min(min(sum1, sum2), sum3);
    
    int top1 = 0, top2 = 0, top3 = 0;
    
    while(totalHeight)
    {
        if (sum1 > minHeight)
        {
            sum1 = sum1 - h1[top1];
            top1 = top1 + 1;
            
            if (sum1 < minHeight) 
                minHeight = sum1;
        }
        
        if (sum2 > minHeight)
        {
            sum2 = sum2 - h2[top2];
            top2 = top2 + 1;
            
            if (sum2 < minHeight) 
                minHeight = sum2;
        }        
        
        if (sum3 > minHeight)
        {
            sum3 = sum3 - h3[top3];
            top3 = top3 + 1;
            
            if (sum1 < minHeight) 
                minHeight = sum3;
        }
        
        if (minHeight == 0)
            return 0;
        
        totalHeight--;
    }
    
    return minHeight;
}

int main()
{
    vector<int> h1 {3,2,1,1,1};
    vector<int> h2 {4,3,2};
    vector<int> h3 {1,1,4,1};
    
    cout << equalstacks(h1, h2, h3) << endl;
    
    return 0;
}
