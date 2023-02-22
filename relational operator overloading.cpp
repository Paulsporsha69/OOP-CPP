
#include<iostream>
#include<bits/stdc++.h>
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
   /* Complex operator +(Complex ob)
    {
         Complex res;
         res.real=real+ob.real;
         res.imag=imag+ob.imag;
         return res;
    }
   void print()
    {
        cout<<real<<"+i"<<imag<<endl;

    }*/
     bool operator >(Complex ob)
        {
        return real+imag>(ob.real+ob.imag);
        }
         bool operator <(Complex ob)
        {
        return real+imag<(ob.real+ob.imag);
        }
    bool operator ==(Complex ob)
        {
        return real+imag==(ob.real+ob.imag);
        }

};
int main()
{
    Complex c1(3,4),c2(3,4);
    Complex c4;
//    c4=c1+c2+c3;
   // c4.print();
    if(c1>c2)
        cout<<"c1";
        else if(c1==c2 )cout<<"c1=c2"<<endl;
    else
        cout <<"c2";
}
