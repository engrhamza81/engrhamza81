//Engr.Hamza Ahmad
#include<iostream>
using namespace std;
class complex {
    private:
    double img ,real;
    public:
    complex(double i=0, double r=0):img(i),real(r) {}
    
    complex operator +(complex obj)
    {
        complex result;
        result.real=real+obj.real;
        result.img=img+obj.img;
        return result;
    }
    void display()
    {
        cout<<"Result="<<real<<"+"<<img<<"i"<<endl;
    }
};

int main(){
    complex c1(20,30);
    complex c2(2,3);
    complex sum=c1+c2;
    sum.display();


return 0;
}