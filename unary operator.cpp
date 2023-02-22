#include<iostream>
using namespace std;
class weight
{
private:
    int kg;
public:
    weight ()
    {
        kg=0;
    }
weight(int x)
{
    kg=x;
}
void printweight ()
{
    cout<<"Weight in kg :"<<kg<<endl;
}
/*void operator ++()
{
    ++kg;
}*/
weight  operator ++()
{
    weight temp;
    temp.kg=++kg;
    return temp;
    }
void operator ++(int )//post increment
{
    kg++;
}
void operator --()
{
    --kg;
}
/*void operator --(int )//post increment
{
    kg--;
}*/

};
int main()
{
  /*  weight obj;
    obj.printweight();
    ++obj;
    obj.printweight();
    obj++;
     obj.printweight();
     --obj;
      obj.printweight();
      obj--;
       obj.printweight();*/
   weight obj1,obj2;
   obj2=++obj1;
obj2.printweight();


    return 0;
}
