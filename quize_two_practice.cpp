#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter string: \n";
	cin>>n;
	string *array=new string[n];
	for (int i=0; i<n; i++)
	{
		cin>>array[i];
	}
	cout<<"------------------\n";
	for (int i=n-1; i>=0; i--)
	{
		cout<<array[i];
	}
}
