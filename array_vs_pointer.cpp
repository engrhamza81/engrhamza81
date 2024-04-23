#include<iostream>
using namespace std;
int main()
{
    int num, arr[num];
    cout<<"Enter size of array:";
    cin>>num;
    for(int i=0; i<num; i++)
    {
    	cout<<"Enter Num :"<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"------YOU GIVE-----\n";
    for(int i=0; i<num; i++)
    {
        cout<<*(arr+i)<<"  ";
    }
   
   
return 0;
}
