#include<iostream>
using namespace std;
int main(){
    int size;
    
    cout<<"Enter size of array";
    cin>>size;
    int * array= new int  [size];
    array[0]=2003333333333333333333;
    cout<<array[0];
    delete[] array ;


return 0;
}
