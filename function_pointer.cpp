#include<iostream>
using namespace std;
typedef int(*ptr)(int, int); 
int add(int a, int b)
{
	return a+b;
}
void calculator(int a1, int b1, ptr p1 )
{
	cout<<p1(a1, b1);
}
int main()
{
 
	ptr p1=&add;
	calculator(2,3,p1);
}
