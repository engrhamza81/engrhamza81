//Engr.Hamza Ahmad
#include<iostream>
using namespace std;


int main(){
int array[12]={1,2,3,4,5,4,3,2,7,8,5,8};
for (int  i = 0; i < 12; i++)
{
    if (array[i+1]==array[i])
    {

    }
    else{
        cout<<array[i];
    }
}


return 0;
}