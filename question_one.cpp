#include<iostream>
 #define metric 1
 #define imperial 2 
using namespace std;
 double mili_to_inches(int inches){
    return inches*25.4;
 }
 double inches_to_mili(int mili){
    return mili/25.4;
 }
int main()
{
    int result;
    cout<<"SELECT MODE"<<endl;
    cout<<"1.MEtRIC  MODE"<<endl;
    cout<<"2.  IMPRERAL MODE"<<endl;
    cin>>result;
    if (result==metric)
    {
         double mlength;
        cout<<"Enter length in mili meter\n";
        cin>>mlength;
        cout<<"RESULT IS ="<<mili_to_inches(mlength);
    }
    else if (result==imperial)
       {
            double ilength;
            cout<<"Enter lengtg in inches:\n";
            cin>>ilength;
            cout<<"RESULT IS ="<<inches_to_mili(ilength);
            
            
        }

     return 0;
}
