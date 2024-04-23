#include<iostream>
using namespace std;

void find_min_max()
{
    int *max, *min, arr[5];
    for (int i=0; i<5; i++)
    {
        cout<<"Enter num"<<i+1<<endl;
        cin>>arr[i];
    }
      for (int j=0; j<5; j++)
	  {
		   if (j==0){
		   	    max=&arr[0];
		   	    min=&arr[0];
		   }
        else if (arr[j]>*max)
        {
            max=&arr[j];
        }
        else if (arr[j]<*min)
        {
            min=&arr[j];
        }
      //  else min=arr[j];
       }
        cout<<"Mxaimum value is ="<<*max;
        cout<<"\nMinimum value is ="<<*min;
       
}
 int main() 
 { 
   // int arr[10];
    find_min_max();



return 0;
}
