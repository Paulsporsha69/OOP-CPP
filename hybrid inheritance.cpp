#include<iostream>
using namespace std;
class A
{
private :
    int ax;
public :
A(int a)
{
     ax=a;}
    ~A(){}
    int getA()
    {
        return ax;
    }

};
class B:virtual public A
{
private :
    int bx;
public :
B(int a,int b):A(a)
{
     bx=b;}
    ~B(){}
    int  getB()
    {
        return bx;
    }

};
class C:virtual   A
{
private :
    int cx;
public :
C(int a,int c):A(a)
       {
     cx=c;
    }
    ~C(){}
    int  getC()
    {
        return cx;
    }

};
class D:public B,public C
{
private :
    int dx;
public:

    D(int a,int b,int c,int d):B(a,b),C(a,c),A(a)
    {
        dx=d;
    }
    ~D()
    {

    }
   int  getD()
    {
        return dx;
    }
    int sum()
    {
cout<<getB()+getC()+dx+getA()<<endl;
        }
};
int main()
{

   D d(1,2,3,4) ;
   d.sum();
}
