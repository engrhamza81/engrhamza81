#include<iostream>
using namespace std;
struct employ {
	string name;
	int salery;
	int period;
};
int main()
{
	int num;
	cout<<"Enter number of employ \n";
	cin>>num;
	employ e[num];
	for (int i=0; i<=num; i++)
	{
		cout<<"Enter name of Employ"<<i+1<<"\n";
		cin>>e[i].name;
		cout<<"Enter salery of Employ\n";
		cin>>e[i].salery;
		cout<<"Enter period of Employ\n";
		cin>>e[i].period;
	}
}
