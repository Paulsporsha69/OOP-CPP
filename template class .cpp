/*#include<iostream>

using namespace std;
template <class mytemp>
mytemp add (mytemp a,mytemp b)
{
    return a+b;

}

int main()
{
    cout<<add(102,10)<<endl;
    cout<<add(10.4,34.0)<<endl;


}*/
//multiple template
#include<iostream>

using namespace std;
template <class mytemp1,class mytemp2>
mytemp2 add (mytemp1 a,mytemp2 b)
{
    return a+b;

}

int main()
{
    cout<<add(102,10.4)<<endl;
    cout<<add(10.4,34.0)<<endl;


}
