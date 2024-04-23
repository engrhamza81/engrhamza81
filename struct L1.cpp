#include<iostream>
using namespace std;
//struct car{
//	int modle;
//	string name;
//	int engine;
//	};
//	
//int main()
//{
//	int a;
//	cout<<"Enter the number of car: ";
//	cin>>a;
//	
//	car car123[a];
//	for(int i=0;i<a;i++)
//	{
//		cout<<"For the car: "<<i+1<<endl;
//		cout<<"Enter the modle of the car: ";
//		cin>>car123[i].modle;
//		
//		cout<<"Enter the name of the car: ";
//		cin>>car123[i].name;
//		
//		cout<<"Enter the engine of the car: ";
//		cin>>car123[i].engine;
//		
//	}
//	
//}

struct car{
	string name;
	int modle;
	};

struct person{
	string name;
	int age;
	car car123;
	};
	void car_info(car car123)
	{
		cout<<"The car name is: "<<car123.name<<endl;
		cout<<"The modle is: "<<car123.modle<<endl;
	}
	void person_info(person p1)
	{
		cout<<"The name of the person is: "<<p1.name<<endl;
		cout<<"The age of the person is: "<<p1.age<<endl;
		
		car_info(p1.car123);
		
	}

int main()
{
	car car123;
	car123.name="honda";
	car123.modle=2023;
	
	person p1;
	p1.name="arbaz";
	p1.age=19;
	p1.car123=car123;
	
	person_info(p1);
}


