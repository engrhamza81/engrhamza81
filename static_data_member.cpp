//Engr.Hamza Ahmad
#include<iostream>
using namespace std;
class employ{
    private:
    int age;
    string name;
     static int count ; //static data member through which we can count number of object
    public :
    void setdata(int a,string s)
    {
        age=a;
        name=s;
        count ++;
    }
    void showcount()
    {
        cout<<"Tha number of Object are "<<count;
    }
};
int  employ:: count=0;   //we declear here because it will use for evary object

int main(){
    employ e1;
    e1.setdata(19,"HAMZA AHMAD");
    employ e2;
    e2.setdata(17, "YASIR AHMAD");
    employ e3;
    e3.setdata(15, "HARIS AHMAD");
    e1.showcount();


return 0;
}