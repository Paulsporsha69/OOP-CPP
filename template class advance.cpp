#include<iostream>
using namespace std;
template <typename T,typename U>
class weight {
private :

T kg;
U grams;

public:
    void setdata(T a, U b)
    {
        kg=a;
        grams=b;
    }
 T getdatakg()
{
    return kg;
}
U getdatagrams()
{
    return grams;
}

};
int main()
{
    weight <int,double>obj1;
    obj1.setdata(4,7.9);
    cout<<"Value :"<<obj1.getdatakg()<<endl;

cout<<"Value of grams:"<<obj1.getdatagrams()<<endl;

}
