#include<iostream>
using namespace std;
int sum(int x, int y)
{
	if (x==y){
		return x;
	}
	else return x+sum(x+1,y);
}
int main()
{
	cout<<sum(1,4);
}
