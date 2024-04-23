#include<iostream>
#include<string>
using namespace std;
int main()
{
//string n;
     char n[12];
	cout<<"Enter string: \n";
	cin.getline(n,12);
	cout<<"------------------\n";
	for (int i=sizeof(n)-1; i>=0; i--)
	{
		cout<<n[i];
	}
}
