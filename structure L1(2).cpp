#include<iostream>
using namespace std;
int num;
struct employ{
	int salery;
	int workinghours;
	string name;
};
struct exp{
	int period;
	string comp_name;
	employ e;
};
void employ_info(employ e,exp x)
	{
		for (int i=1; i<=num; i++)
		{
			cout<<"\n*********Data of Employs"<<i<<"*************\n";
			cout<<" \nName of Employ:"<<i<<"is="<<e.name<<endl;
			cout<<" \nsalery of Employ:"<<i<<"is="<<e.salery<<endl;
			cout<<" \n\nworking Hours of Employ:"<<i<<"is="<<e.workinghours<<endl;
			cout<<" \nperiod of Employ:"<<i<<"is="<<x.period;
			cout<<" \ncompany of Employ:"<<i<<"is="<<x.comp_name<<endl;
		}
	}
int main()
{
	employ e;
	exp x;
	cout<<" Enter No of Employ ::\n";
	cin>>num;
	for (int i=1; i<=num; i++)
	{
		cout<<"Enter Name of Employ "<<i<<":\n";
		cin>>e.name;
		cout<<"Enter salery of Employ "<<i<<":\n";
		cin>>e.salery;
		cout<<"Enter working hours  of Employ "<<i<<":\n";
		cin>>e.workinghours;
		cout<<"Enter period  of Employ "<<i<<":\n";
		cin>>x.period;
		cout<<"Enter company Name of Employ "<<i<<":\n";
		cin>>x.comp_name;
	}
	employ_info(e,x);
}
