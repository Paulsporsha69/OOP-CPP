#include<iostream>
using namespace std;
//BASE CLASS
class employee{


  public :
   int id;
    float salary;
    employee(int inpid)
      {
          id=inpid;
          salary =34.0;
      }
      employee(){};


};
//dereived class
/*class {{derived -class-name}}:{{visibility-mode}}{{base-class-name}}
{
   class member/methods /etc..

}
Note;
1.Default visibility mode is private.
2.Public visibility mode: Public member of the base class becomes public members of the derived class
3.Private visibility mode: Public members of the class becomes private members of the derived class
4.Private members are never inherited.
*/

//creating a derived class
class programmer: public employee{
public :
    programmer (int inpid){
        id=inpid;
    }
int languagecode=9;
void get()
{
    cout<<id<<endl;
}
};
int main()
{
    programmer rohan(1) ,harry(2);
    cout<<harry.salary<<endl;
   cout<< rohan.salary<<endl;;
   programmer skillf(10);
   cout<<skillf.languagecode<<endl;
   skillf.get();

   return 0;
}
