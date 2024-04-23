#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int b=20;
	int c=a&b;
	int d=a|b;
	int e=a^b;
	//int f=a ~ b;
	int g=a<<2;
	int h=b>>2;
	cout<<"AND operator="<<c<<endl;
	cout<<"OR operator="<<d<<endl;
	cout<<"XOR operator="<<e<<endl;
	cout<<"left shift of 2 operator="<<g<<endl;
	cout<<"Right shift of 2 operator="<<h<<endl;
//	cout<<"NOT operator="<<f<<endl;
}
