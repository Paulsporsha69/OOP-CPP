#include<iostream>
#include<cstring>
using namespace std;
class Account
{
private :
    char Name[100];
    long long int balance=0;
    int age;
    long int Account_no;
    int pin;
public :

    void create_acc()
    {


        cout<<"Name :";
        cin>>Name;
        cout << "Age :";
        cin>>age;
        if(age>=18)
        {
            cout<< "Enter 10 digits for your account number(It should be 1000000000 >ID <2000000000) :";
            cin>>Account_no;

            cout << "Set a pin :";
            cin>>pin;
            cout<<"Your Account has been opened succcesfully"<<endl;
        }
        else
            cout<<"Bank account is not applicable for you"<<endl;
    }
    void delete_acc()
    {
        long int x;
        cout<<"Enter your account number :"<<endl;
        cin>>x;
        if(x==Account_no)
        {
            if(balance == 0)
            {
                cout<<"Account has been deleted successfully"<<endl;
            }
            else
                cout <<"Account can't be delete"<<endl;
        }
    }
    void deposit()
    {
        int long long bl;
        long int s,x;
        cout<<"Enter your account number :";
        cin>>x;
        if(x==Account_no)
        {
            cout<<"Enter your pin :";
            cin>>s;

            if(s==pin)
            {
                cout<<"Deposit ammount :";
                cin>> bl;
                balance +=bl;
                cout<<"Deposited succcessfully"<<endl;
                cout<<"Your new balance is :"<<balance<<endl;
            }
            else
                cout<<"Your pin is incorrect"<<endl<<"Try again"<<endl;
        }
        else
            cout<<"Invalid account number !";
    }
   void withdraw()
    {
        long int x;
        long long int w;
        cout<<"Enter your account number :"<<endl;
        cin>>x;
        if(x==Account_no)
        {
        int  s1;
            cout<<"Enter your pin :";
            cin>>s1;
            if(s1==pin)
            {
                cout<<"Withdraw ammount :";
                cin>>w;
                balance=balance-w;

                cout<<"Withraw succesfully"<<endl;
                cout<<"Your new balance is :"<<balance<<endl;
            }
            else
                cout<<"Your pin is incorrect"<<endl<<"Try again"<<endl;
        }
        else
            cout<<"Invalid account number !";
    }
    void check_bl()
    {
        long int x;
        cout<<"Enter your account number :"<<endl;
        cin>>x;
        if(x==Account_no)
        {
            int s;
            cout<<"Enter your pin :"<<endl;
            cin>>s;
            if(s==pin)
            {
                cout<<"Your balance is:"<<balance;
            }
            else
                cout<<"Your pin is incorrect"<<endl<<"Try again"<<endl;
        }
        else
            cout<<"Invalid account number";
    }

};
int main()
{
    cout<<"Press 1 for create account"<<endl;
    cout<<"Press 2 for delete old account"<<endl;
    cout<<"Press 3 for deposit money"<<endl;
    cout<<"Press 4 for withdraw money "<<endl;
    cout<<"Press 5 for check balance"<<endl;
    cout<<"Press 6 for exit"<<endl;
    Account paul;
    int n;
    cout <<"Enter your options:";
    while(1)
    {
        cin>>n;
        if(n==1)
        {
            paul.create_acc();

        }
        if(n==2)
        {
            paul.delete_acc();

        }
        if(n==3)
        {
            paul.deposit();

        }
        if(n==4)
        {
            paul.withdraw();

        }
        if(n==5)
        {
            paul.check_bl();

        }
        if(n==6)
        {
            cout<<"Thanks for with us"<<endl;
            break;
        }

    }

}
