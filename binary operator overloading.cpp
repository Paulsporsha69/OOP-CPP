
#include<iostream>
using namespace std;
class Complex
{
private :
    int real,imag;
public:
    Complex(int r=0,int i=0)
    {
    real =r;
    imag=i;
    }
    Complex operator +(Complex ob)
    {
         Complex res;
         res.real=real+ob.real;
         res.imag=imag+ob.imag;
         return res;
    }
    void print()
    {
        cout<<real<<"+i"<<imag;
    }

};
int main()
{
    Complex c1(3,4),c2(4,6),c3(6,8);
    Complex c4;
    c4=c1+c2+c3;
    c4.print();
}
