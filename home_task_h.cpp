//Engr.Hamza Ahmad
#include<iostream>
using namespace std;
class Bank_account{
    private:
    string account_no;
    double balance;
    public:
    void get_balance(double a)
    {
         balance=a;
    }
    void get_account_no(string s)
    {
        account_no=s;
    }
    void deposit (double ammount )
    {
        balance=balance+ammount;
        cout<<"The amount that is depodit is = "<<ammount<<endl;
        
    }
    void withdraw(double amount )
    {
        if (balance>amount )
        {
            cout<<"WithDraw amount is = "<<amount<<endl;
            balance=balance-amount;
            
        }
        else {
            cout<<"NO BALANCE";
        }
    }
    void display ()
    {
        cout<<"THE REMAINING BALANCE IS = "<<balance<<endl;
        cout<<"The account No# is = "<<account_no;

    }
};
class transiction{
    private:
    Bank_account* sender;
    Bank_account* reciver;
    double amount;
    public :
   void  transaction(Bank_account* s, Bank_account* r, double a)
    {
        sender=s;
        reciver=r;
        amount =a;
    }
//    bool execute() {
//         if (sender->withdraw(amount)) {
//             reciver->deposit(amount);
//             return true;
//         } else {
//             return false;
//         }


};

int main(){
    Bank_account b;
    b.get_balance(2020);
    cout<<endl;
    b.get_account_no("30214hahddld");
    b.withdraw(202);
    b.deposit(2000);
    cout<<endl;
    b.display();


return 0;
}