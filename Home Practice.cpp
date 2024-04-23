#include<iostream>
using namespace std;;
int main()
{
	int a,b,c;
	cout<<"ENTER num 1=\n";
	cin>>a;
	cout<<"Enter nUM 2=\n";
	cin>>b;
	cout<<"ENTER 1 For Addition\n";
	cout<<"ENTER 2 For Multplication\n";
	cout<<"ENTER 3 For subtraction\n";
	cout<<"ENTER 4 For dvision\n";
	cout<<"ENTER 5 For reminder\n";
	cin>>c;
	switch (c)
	{
		case 1:
		cout<<a+b;
		break;
		case 2:
		cout<<a*b;
		break;
		case 3:
		cout<<a-b;
		break;
		case 4:
		cout<<a/b;
		break;
		case 5:
		cout<<a%b;
		break;
		default :
		cout<<"Enter correct option\n";
		break;
	}
	
}

