#include<iostream>
using namespace std;
class Myclass{
public:
    int x;
    static int count ;


Myclass()
{
    count++;
}
};

int Myclass ::count;
int main()
{
cout << "Initial count :"<<Myclass :: count<<endl ;
Myclass obj1,obj2,obj3;
cout << "Initial count after 3 objects :"<<Myclass :: count<<endl ;


   return 0;
}
