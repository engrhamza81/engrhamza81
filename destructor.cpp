//Engr.Hamza Ahmad
#include<iostream>
using namespace std;

class student{
    public:
    int age;
    string name;
    ~student ()
    {
           cout<<"This is called Destructor"<<endl;
    }
};
int main(){
    student s;
    s.age=19;
    s.name="hamza";
    cout<<s.age<<endl;
    cout<<s.name<<endl;

return 0;
}