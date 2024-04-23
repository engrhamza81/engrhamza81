#include <iostream>
using namespace std;

int main()
{
	int profSalary = 30000;          
	int engSalary = 50000;
	int LectSalary = 20000;
	int money = 100000;
	int trans;
	char prof;
	int n = 1;
	cout << "Welcome to Transiction system" << endl;
	cout << "A.Professor" << endl;
	cout << "B.Engineer" << endl;
	cout << "C.Lecturer" << endl;
	while (n != 0)
	{
		cout << "Enter your profession (A,B or C) :";
		cin >> prof;
		if (prof == 'A')
		{
			cout << "Enter money you want to transict" << endl;
			cin >> trans;
			if (trans <= profSalary)
			{
				money = money - trans;
				cout << "Transiction Succesfull" << endl;
				cout << "Money left" << endl;
				cout << money << endl;
			}
			else if (trans > profSalary)
			{
				cout << "Limit exceeds" << endl;
			}
		}

		else if (prof == 'B')
		{
			cout << "Enter money you want to transict" << endl;
			cin >> trans;

			if (trans <= engSalary)
			{
				money = money - trans;
				cout << "Transiction Succesfull" << endl;
				cout << "Money left" << endl;
				cout << money << endl;
			}

			else if (trans > engSalary)
			{
				cout << "Limit exceeds" << endl;
			}
		}

		else if (prof == 'C')
		{
			cout << "Enter money you want to transict" << endl;
			cin >> trans;
			if (trans <= LectSalary)
			{
				money = money - trans;
				cout << "Transiction Succesfull" << endl;
				cout << "Money left" << endl;
				cout << money << endl;
			}
			else if (trans > LectSalary)
			{
				cout << "Limit exceeds" << endl;
			}
		}
		else
		{
			cout << "Invalid input" << endl;
		}
	}
}

