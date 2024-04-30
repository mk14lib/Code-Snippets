#include <bits/stdc++.h>
using namespace std;

class fraction {
    int numerator;
    int denominator;
    
    public:
    fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    
    void add(fraction const &f2)
    {
        // To add to fraction find the lcm first
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        
        // cross multiply existing denominators with numerators and sum up to get resulting numerator
        int num = (x * numerator) + (y * f2.numerator);
        
        
        // finally numerator will be resulting numerator found above and denominator is simply the LCM
        numerator = num;
        denominator = lcm;
        
        // simplify the fraction further using gcd if possible
        simplify(); 
    }
    
    void simplify()
    {
        // To simplify find gcd and divide both numerator and denominator with gcd 
        int gcd = 1;
        int j = min(numerator, denominator);
        
        for(int i = 1; i <= j; ++i)
        {
            if ((numerator % i == 0) and (denominator % i == 0))
            {
                gcd = i;
            }
        }
        
        numerator = numerator/gcd;
        denominator = denominator/gcd;
    }
    
    void print()
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int main()
{
    
    fraction f1(10, 2);
    fraction f2(15, 4);
    cout << "Before addition: ";
    f1.print();
    f1.add(f2);
    cout << "After addition: ";
    obj.print();
    

    return 0;
}
