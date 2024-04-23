//Engr.Hamza Ahmad
#include<iostream>
using namespace std;
class employ{
    private :
    int somedata;
    public :
    employ(int a)
    {
        somedata=a;
    }
     friend void read(employ abc);
};
void read(employ abc)
{
    cout<<abc.somedata;
}


int main(){
   employ e(50);
   read(e);



return 0;
}