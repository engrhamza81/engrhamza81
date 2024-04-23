#include<iostream>
using namespace std;
struct student{
	int reg_no;
	string name;
	student *ptr;
};
int main ()
{
	student S1;
	S1.name="Dr. GHULAM ISHAQ KHAN";
	S1.reg_no=1993000;
	S1.ptr= &S1;
	cout<<S1.ptr->name;
    cout<<endl<<S1.ptr->reg_no;
}

