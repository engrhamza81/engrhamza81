#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	//two players---->>roll dice 6 time--->>
	string player1,player2;
	int random,random2,sum1 = 0,sum2 = 0;
	cout<<"Enter first players:\t";
	cin>>player1;
	cout<<player1 <<" roll the dice 6 time:\n";
	for(int i=0;i<6;i++)
	{
		cout<<i+1 << "times\t";
		random = 1 + rand() %6;
		cout<<random<<endl;
		system("pause");
		sum1 = sum1 + random;
	}
	cout<<"total sum of player 1:\t"<<sum1<<endl;
	
	cout<<"\n Enter second player name:\t";
	cin>>player2;
	cout<<player2 <<"Roll the dice 6 times \n";
	for(int i=0;i<6;i++)
	{
		cout<<i+1  <<"times \t";
		random2 = 1 + rand()%6;
		cout<<random2<<endl;
		system("pause"); 
		sum2 =sum2 + random2;
	}
	cout<<"The sum for second player:\t"<<sum2<<endl;
	if(sum1 > sum2)
	{
		cout<<"Congratulatios "<<player1 <<" has won the dice game \n";
	}
	else if(sum1 == sum2)
	{
		cout<<"Match draww-----!<<endl";
	}
	else
	{
		cout<<"Congratulatios "<<player2 <<" has won the dice game \n";
	}
	
}

