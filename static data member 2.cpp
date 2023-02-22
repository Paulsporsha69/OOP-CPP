#include<iostream>
using namespace std;
class employee
{

    int id;
     static int count ;
 public :
    void setvalue()
    {

        cout<< "Enter the id :";
        cin>>id;miomo
      count++;

    }
    void getvalue()
    {
        cout<< "The id is :"<<id<<endl;
        cout << "count number is "<<count<<endl;
    }
    static void getcount(void){
    cout<<"The value of count is "<<count<<endl;
    }

};
 int employee :: count;//default value is 0;


int main()
{
    employee p,a,u,l;
    p.setvalue();
    p.getvalue();
    employee ::getcount();

     a.setvalue();
    a.getvalue();
employee :: getcount();

     u.setvalue();
    u.getvalue();
    employee ::getcount();

     l.setvalue();
    l.getvalue();
 employee ::getcount();
}
