//Engr.Hamza Ahmad
#include<iostream>
using namespace std;
class student{
    private :
    string name;
    int age;
    //int roll_no;
    public:
    void setname()
    {
        string name1;
        cout<<"Enter Name =";
        cin>>name1;
        name=name1;
    }
    void setage()
    {
        int a;
        cout<<"Enter Age =";
        cin>>a;
        age=a;
    }
    void display()
    {
        cout<<"-------*********--------\n";
        cout<<name<<endl;
        cout<<age<<endl;
    }
};

int main(){
    student s;
    s.setname();
    s.setage();
    s.display();


return 0;
}