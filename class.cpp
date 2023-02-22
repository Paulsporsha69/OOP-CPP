
#include<iostream>
#include<conio.h>
using namespace std;
class student {
    public:
int id;
double cgpa;


};


int main()
{

student Alim,Paul;
Alim.id=101;
Alim.cgpa=3.75;
cout <<Alim.id<<endl<<Alim.cgpa<<endl;
//cout <<Alim.cgpa<<endl;
Paul.id=69;
Paul.cgpa=3.75;
cout <<Paul.id<<endl;
cout <<Paul.cgpa<<endl;

    getch();
}
