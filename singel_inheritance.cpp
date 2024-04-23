//Engr.Hamza Ahmad
#include<iostream>
using namespace std;
class A{
    public :
    void dislayA()
    {
        cout<<"This is class A\n";
    }
};
class B : public A{
    public :
    void dislayB()
    {
        cout<<"This is class b\n";
    }
};

int main(){
    B obj;
  obj.dislayA();


return 0;
}