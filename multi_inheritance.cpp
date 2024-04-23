//Engr.Hamza Ahmad
#include<iostream>
using namespace std;
class A{
    public :
    void displayA()
    {
        cout<<"This is class A\n";
    }
};
class B{
    public :
    void displayB()
    {
        cout<<"This is class B\n";
    }
};
class C: public A, public B{
    public :
    void displayC()
    {
        cout<<"This is class A\n";
    }
};

int main(){
    C obj;
    obj.displayA();
    obj.displayB();
    obj.displayC();


return 0;
}