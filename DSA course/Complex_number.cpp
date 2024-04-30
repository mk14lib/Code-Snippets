#include <bits/stdc++.h>
using namespace std;

class ComplexNumber{
    double real;
    double imag;
    
    public:
    ComplexNumber(double real, double imag)
    {
        this->real = real;
        this->imag = imag;
    }
    
    void add(ComplexNumber const &c2)
    {
        this->real += c2.real;
        this->imag += c2.imag;
    }
    
    void multiply(ComplexNumber const& c2)
    {
        // (a1 + jb1) * (a2 + jb2) = real(a1*a2 - b1*b2) + imag(a1*b2 + a2*b1)
        real = (real*c2.real - imag*c2.imag);
        imag = (real*c2.imag) + (c2.real*imag);
    }
    
    void print()
    {
        cout << real << showpos << imag << "i" << noshowpos << endl;
    }
};

int main()
{
    
    ComplexNumber c1(10, -6);
    ComplexNumber c2(15, 4);
    cout << "Before addition: ";
    c1.print();
    c1.multiply(c2);
    cout << "After addition: ";
    c1.print();
    

    return 0;
}
