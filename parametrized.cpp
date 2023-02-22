
#include<iostream>
#include<conio.h>
using namespace std;
class student {
    public:
int id;
double cgpa;
void display()
{
    cout<<id<<endl;
    cout<<cgpa<<endl;
}
void setValue(int x,double y)
{
  id= x;
  cgpa=y;
}
};



int main()
{

student Alim,Paul;
Alim.setValue(101,3.75);

Alim.display();
Paul.setValue(102,3.69);
Paul.display();

    getch();
}


