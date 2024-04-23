#include<iostream>
using namespace std;
int main()
{
	string name="hamza";
	void *ptr;
	ptr=&name;
	cout<<"The address of string is ="<<ptr<<endl;
	cout<<"The data on address is ="<<(*(string*)ptr)<<endl;
}
