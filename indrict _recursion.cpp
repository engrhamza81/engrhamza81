// write a programe that print numbers in such a way when even number come 
//come subtract 1, & when odd add 1
#include<iostream>
using namespace std;
int n=1;
void odd();
void even()
{
	if (n<=10)
	{
		cout<<n-1<<" ";
		n++;
		odd();
	}
}
void odd()
{
	if (n<=10)
	{
		cout<<n+1<<" ";
		n++;
		even();
	}
}
int main ()
{
	odd();
	
}
