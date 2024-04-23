//Engr.Hamza Ahmad
#include<iostream>
using namespace std;
class student{
    public:
    int age;
    string name;
    student ()
    {
        //Default constructer which initilize the values if we did not give it in main function
        name="Hamza";
        age=19; }

};
int main(){
    student s;
    s.name="GIKI Swabi";
    cout<<s.name<<endl;
    cout<<s.age<<endl;


return 0;
}