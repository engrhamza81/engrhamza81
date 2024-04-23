#include<iostream>
using namespace std;
int main()
{
	//char name[12]="hamza";
	char name[12]={'h','a','m','z','a','\0'};
	char *ptr;
	ptr=name;
	cout<<ptr;
	for (int i=sizeof(name)-1;i>=0 ; i--)
	{
		cout<<name[i];
	}
	//cout<<name<<endl;
}
