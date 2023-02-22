#include<iostream>
using namespace std;
class shape
{

public:
 virtual void getarea()=0;


};
class circle :public shape
{
public:
    void getarea()
    {
        cout<<"Enter circle radius"<<endl;
        int r;

        cin>>r;
        cout<<"Area :"<<(3.1416*r*r)<<endl;
    }
};
class rect:public shape{

public :
    void getarea()
    {
        cout<<"Enter length and height"<<endl;
        int l,b;
        cin>>l;
        cin>>b;
        cout<<"Area of rect is:"<<(l*b);
    }
};

int main()
{
    circle c1;
    c1.getarea();
    rect r1;
    r1.getarea();
}







