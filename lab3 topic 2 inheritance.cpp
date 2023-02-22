
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A
{
private:
    int x=1;
protected:
    int y=2;
public :

    int z=3;
    int getx()
    {
return x;
    }

};
class B:public A
{
    public:
  int gety()
    {
        return y;
    }
};
int main()
{
    B b;
    cout<<"X="<<b.getx()<<endl;
    cout<<"Y="<<b.gety()<<endl;
    cout<<"Z="<<b.z<<endl;
}
