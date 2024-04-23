#include<iostream>
#include<cmath> 
using namespace std;
int x=4;
void f1();
void f2(int x , int y);
int main()
{
	

	cout<<"the value of x  :: "<<x<<"\n";
	for (int j=0;j<=10; j++)
	{
		int x=j*2;
		cout<<"the value of x is ::"<<x<<endl;
		}
		f1();
		cout<<" the value of x is::n"<<x<<endl;
		return 0;
		
}
void f1()
{
	
	cout <<"the value of x is::"<<x<<endl;
	
}
