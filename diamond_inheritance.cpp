//Engr.Hamza Ahmad
#include<iostream>
using namespace std;
class A {
    public :
    void displayA()
    {
        cout<<"This is class A\n";
    }
};
class B:public virtual A{
    public :
    void displayB()
    {
        cout<<"This is class B\n";
    }
};
class C: public virtual  A {
    public :
    void displayC()
    {
        cout<<"This is class C\n";
    }
};
class D : public B, public C {
    public :
    void displayD()
    {
        cout<<"This is class D\n";
    }
};
class E : public D {
    public :
    void displayE()
    {
        cout<<"This is class E\n";
    }
};

int main(){
    E obj;
    obj.displayA();


return 0;
}