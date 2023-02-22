

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

bool  operator && (Complex ob)
{
  return (real&& imag) && (ob.real&& ob.imag);
}
};
int main()
{
    Complex c1(6,4),c2(0,4);
    Complex c4;

    if(c1&& c2)
        cout<<"ok"<<endl;
        //else if(c1==c2 )cout<<"c1=c2"<<endl;
    else
        cout <<"error";
}
