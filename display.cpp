
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

};



int main()
{

student Alim,Paul;
Alim.id=101;
Alim.cgpa=3.75;
Alim.display();
Paul.id=69;
Paul.cgpa=3.75;
Paul.display();

    getch();
}

