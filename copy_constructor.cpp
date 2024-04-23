//Engr.Hamza Ahmad
#include<iostream>
using namespace std;
class student{
    public:
    int roll_no;
    string name;
    student(){
        name="HAMZA";
        roll_no=2023217;
    }
    student (student &s3)
    {
       roll_no =s3.roll_no;
       name= s3.name;
    }

};
int main(){
   // student s;
    student s1;
    student s2(s1);
    cout<<s2.name<<endl;
    cout<<s2.roll_no<<endl;
return 0;
}