#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the quantity of number: ";
	cin>>a;
	int arry[a];
	for(int i=0;i<a;i++)
	{
		cin>>arry[i];
	}
	cout<<"you entered: "<<endl;
	for(int i=0;i<a;i++)
	{		
		cout<<arry[i]<<endl;
	}
	cout<<"after resorted"<<endl;
	for(int i=0;i<a;i++){
		for(int j=i+1;j<a;j++){
		if(arry[i]>arry[j])
		{		
			int temp=arry[i];
			arry[i]=arry[j];
			arry[j]=temp;
			
		}				
	}
	}
	for(int i=0;i<a;i++)
	{
		cout<<arry[i]<<endl;
	}
	
}
