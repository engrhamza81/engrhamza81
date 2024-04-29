//Engr.Hamza Ahmad
#include<iostream>
#include<fstream>
using namespace std;

class student{
    public:
    string name;
    int age;
    string roll_no;
    student(string n,int a, string r):name(n),age(a),roll_no(r) {}
};
int main(){
    ofstream file("Document.txt");
    student s1("Hamza",19,"2023217");
    if(file.is_open())
    {
        file<<"The Name of the student is:"<<s1.name<<endl;
        file<<"The Age of the student is:"<<s1.age<<endl;
        file<<"The Roll No of the student is:"<<s1.roll_no<<endl;
    }


return 0;
}