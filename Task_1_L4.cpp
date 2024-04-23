//Engr Hamza Ahmad
#include<iostream>
using namespace std;
class student{
    private:
    string roll_no;
    string  name;
    int age;
    float marks;
    float cgpa;
    public:
    void get_Detail()
    {
         string r;
         string n;
         int a;
         float m, c;
        cout<<"Your name:";
        cin>>n;
        name=n;
        cout<<"Enter Your roll No :";
        cin>>r;
        roll_no=r;
        cout<<"Enter your Marks out of 500";
        if (marks<=500)
        {
            cin>>m;
            //while(m<1  || m<500);
        }
        else {cout<<"Sorry";}
        cout<<"Enter your cgpa";
        cin>>c;
    }
    void print_detail()
    {
        
        cout<<"----------\n";
        cout<<"YOUR name is="<<name<<endl;
        cout<<"Your marks is ="<<marks<<endl;
        cout<<"Your roll no is ="<<roll_no<<endl;
        cout<<"Your CGPA is ="<<cgpa<<endl;
        cout<<"Your percent age is ="<<(marks/500)*100<<endl;

    }
 };
int main()
{
    student s;
    s.get_Detail();
    s.print_detail();


return 0;
}