
#include<iostream>
#include<conio.h>
using namespace std;
class Student {
    public:
int id;
double cgpa;
void display()
{
    cout<<id<<endl;
    cout<<cgpa<<endl;
}

Student (int x,double y)
{
    id=x;
    cgpa=y;
}
};



int main()
{

Student Alim(101,3.75);
Alim.display();

Student Paul(102,3.69);
Paul.display();

    getch();
}
