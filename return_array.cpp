#include<iostream>
using namespace std;
int * creat_array(int n)
{
    int *array=new int [n];
    for (int  i = 0; i < n ;i++)
    {
        cout<<"Eenter element:"<<i+1<<"=";
       cin>> array[i];
    }
    return array;
    
}
int main(){
    int size;
    cout<<"Enter Size of array"<<endl;
    cin>>size;
     int *p=creat_array(size);
     cout<<"-----You gave---------\n";
     for (int  i = 0; i <size; i++)
     {
        cout<<p[i];
     }
     
   delete []p;
   cout<<endl;
   cout<<p[0];



return 0;
}