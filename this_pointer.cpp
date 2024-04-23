//Engr.Hamza Ahmad
#include<iostream>
using namespace std;
class A{
    private:
    int x;
    public:
     void setdata(int x)
     {
       // if we use this  x=x;  it will give garbige value thats why we use (this pointer)
       this ->x=x;
     }
     void show()
     {
        cout<<x;
     }
};

int main(){
    A obj;
    obj.setdata(100);
    obj.show();


return 0;
}