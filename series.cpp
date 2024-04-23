#include<iostream>
using namespace std;
int foo(int n)
{
	if (n==0||n==1) return n;
	else return foo(n-1)+foo(n-2);
}
int main ()
{
	cout<<foo(5);
}
