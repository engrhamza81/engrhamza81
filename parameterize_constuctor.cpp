//Engr.Hamza Ahmad
#include<iostream>
using namespace std;
class student{
    public:
    int age ;
    string name;
    student(int a, string s)
    {
        age=a;
        name=s;
    }
};

int main(){
    student s(19, "HAMZA");
    s.name="GIKI SWABI";
    cout<<s.name<<endl;
    cout<<s.age;



return 0;
}