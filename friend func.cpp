/*#include<iostream>
using namespace std;
class rectangular;
class cost
{
    int costrate ;
public :
    void setvalue(int a)
    {
        costrate=a;
    }

    int totalcost(rectangular A);
    int area(rectangular A);

};

class rectangular
{
    int height;
    int width;
public :
        void set (int a ,int b){height=a; width = b ;}
          int area(){return height*width;}
      friend  int cost :: area (rectangular A);
        friend int cost:: totalcost(rectangular A);
};
int cost ::  totalcost(rectangular A)

{
    return costrate*A.height*A.width;
}
int cost ::  area(rectangular A)
   {return A.height *A.width; };

int main()
{
    rectangular r;
    r.set(2,3);
    cost c;
    c.setvalue(100);
    cout<<r.area()<<endl;
    cout<<c.totalcost(r)<<endl;
    return 0;
}*/
#include<iostream>
using namespace std;
class A{
public:
virtual void Print()=0;
};
class B:public A{
public:
void Print(){
cout<<"Inside Print() of class B"<<endl;
}
};
int main(){
/*
a.print();*/
B b;
b.Print();A a;
A *p;
p=&a;
p->Print();
p=&b;
p->Print();
}

