//topic 1
/*#include<iostream>
using namespace std;
class Test{
public :
    int sum(int a,int b){
    return a+b;}
    double sum (double a,double b)
    {
        return a+b;
    }
    int sum(int a)
    {
        return a;
    }
    double sum(double a,int b)
    {
       return a+b;
    }
        double sum(int a,double b)
    {
       return a+b;
    }



};
int main()
{
    Test t;
   cout<< t.sum(10)<<endl;
   cout<<  t.sum(10,20)<<endl;
   cout<<  t.sum(5.7,20)<<endl;
   cout<<  t.sum(10,2.6)<<endl;
   cout<<  t.sum(10.5,20.7)<<endl;

}*/
//topic 2
#include<iostream>
using namespace std;
class circuit
{
    private:
int real;
int img;
public:

   circuit(int r=0,int i=0)
   {
       real=r;
       img=i;
   }
   circuit operator-(circuit c)
   {
       circuit res;
       res.real=real-c.real;
       res.img=img-c.img;
       return res;
   }
   void print()
   {
       cout<<real<<" "<<"i"<<img<<endl;
   }
};
int main()
{
    circuit z1 (3,4),z2(4,-3),z3(0,6);
    circuit z4;
    z4=z1-z2-z3;
    z4.print();

}
//topic 3;
/*
#include<iostream>
using namespace std;
class A
{
public :
   virtual void Print(){
cout<<"Inside Print() of class A"<<endl;
}

};
class B:public  A{
public:
void  Print(){
cout<<"Inside Print() of class B"<<endl;
}
};
int main()
{
    A a;
a.Print();
B b;
b.Print();
A *p;
p=&a;
p->Print();
p=&b;
p->Print();
}


//Topic 4
/*
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
int main()
{
A a;
a.print();
B b;
b.Print();
A *p;
p=&a;
p->Print();
p=&b;
p->Print();
}



//topic 5
#include<iostream>
using namespace std;
class A{
private:
int x;
public:
     A()
    {
        x = 0;
    }
  friend  void  Add(A &value);

    friend void Inc(A &m);
    friend void Dec(A &n);
    void Add(A &value)
{
    value.x = value.x + 74;
}

void Incx(A &m)
{
    m.x = m.x + 11;
}

void Decx(A &n)
{
    n.x = n.x - 1;
}
};
int main(int arg,const char*argv[])
{
    A val, inc, dec;
    val.Display_data();
    Add(val);
    val.Display_data();
    Incx(inc);
    inc.Display_data();
    Decx(dec);
    dec.Display_data();
    return 0;
}

*/















