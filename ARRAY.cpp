#include<iostream>
using namespace std;
int main ()
{
	double sum=0;
	int count=0;
	int x[5]={1,2,3,4,5};
	for (int i=0; i <5; i++)
	{
		cout<<x[i]<<"  "<<"\n";
		sum=sum+x[i];
		count++;
		
	}
	cout<<" SUM OF THE ARRAY IS ::"<<sum<<"\n";
		cout<<" SUM OF THE Average of the array  IS ::"<<sum/count<<"\n";
}

