#include<iostream>
using namespace std;
class employ{
	private:
		int a,b,c;
	public:
	int d,e;
	void get_data(int a1,int b1,int c1);
	void show_data()
	{
		cout<<"|-------------Welcom To Class----------------|"<<endl;
		cout<<"The value of a is="<<a<<endl;
		cout<<"The value of b is="<<b<<endl;
		cout<<"The value of c is="<<c<<endl;
		cout<<"The value of d is="<<d<<endl;
		cout<<"The value of e is="<<e<<endl;
		}	
	};
void employ :: get_data(int a1,int b1,int c1)
{
	a=a1;
	b=b1;
	c=c1;
	}	
	int main()
	{
		employ hamza;
		hamza.d=4;
		hamza.e=5;
		hamza.get_data(1,2,3);
		hamza.show_data();
		
	}

