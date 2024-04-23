//Engr Hamza Ahmad
#include<iostream>
using namespace std;
class Bank_account{
    private :
    double balance ;
    string account_no;
    public :
    void get_data(double  bal, string  acc)
    {
        balance=bal;
        cout<<"Your Current Balance="<<balance<<endl;
        account_no=acc;
        cout<<"Your Account no is="<<account_no<<endl;
    }
    void deposit()
    {
        double amount;
        cout<<"How much you deposit :"<<endl;
        cin>>amount;
        balance=balance+amount;
        cout<<"Your new balace is ="<<balance<<endl;

    }
    void  withdrawal()
    {
        double amount;
       // double amount ;
        cout<<"How much you withdraw:";
        cin>>amount;
        if (amount<=balance)
        {
           balance=balance-amount;
           cout<<"Your balance after Withdrawl="<<balance;
        }
        else {
            cout<<"Sorry! You dont have sufficent Balance"<<endl;
         }
        // void display()
        // {
        //     cout<<
        // }
        
    }


};

int main()
{
    Bank_account acc1;
    acc1.get_data(9000.00,"jhdsfjkfd8643");
    // double widrlamount;
    // double deposamount;
   acc1.deposit();
    acc1.withdrawal();


return 0;
}