#include<iostream>
using namespace std;
int main(){
         int num;
         cout<<"Enter size of array :";
         cin>>num;
         int *array=new int [num];
         for (int  i = 0; i < num; i++)
         {
            cout<<"Enter Element :"<<i+1<<" :";
            cin>>array[i];
         }
         cout<<"--------------------\n";
          for (int  i = 0; i < num; i++)
         {
            cout<<array[i];
         }
         int num2;
         cout<<"\nHOW MUCH YOU INCREASE\n";
         cin>>num2;
         int *array2= new int [num+num2];
         for (int  i = 0; i <num; i++)
         {
            array2[i]=array[i];
         }
         for (int i=num; i<num+num2; i++)
         {
            cout<<"Enter Element "<<i+1<<":";
            cin>>array2[i];
         }
         delete [] array;
         array=array2;
         array2=NULL;
         cout<<"--------------------\n";

         for (int  i = 0; i <num+num2; i++)
         {
            cout<<array[i]<<endl;;
         }
         
         
         
        return 0;
}