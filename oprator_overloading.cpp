//Engr.Hamza Ahmad
#include<iostream>
using namespace std;
class Int{
    private:
    int x;
    public:
    void setdata(int y)
    {
        x=y;
    }
    Int()
    {
        x=0;
    }
    void showresult(){cout<<"THE REESULT IS EQUAL TO :"<<x<<endl;}
   Int operator +(Int obj)
    {
        Int result;
        result.x=x+obj.x;
       return result;
    }
};
int main(){
    Int obj1,obj2,obj3;
    obj1.setdata(100);
    obj2.setdata(200);
    obj3=obj1+obj2;
    obj3.showresult();
    


return 0;
}