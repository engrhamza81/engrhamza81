#include<iostream>
#include<iomanip>
#include<bitset>
using namespace std;
int main()
{
    int n;
    int arr[10];
    for ( int i = 0; i <10; i++)
    {
        cout<<"\nEnter number:";
        cin>>arr[i];
        cout<<setw(5)<<arr[i]<<" :";
       cout<<bitset<16>((int)arr[i]);
    }
return 0;
}
