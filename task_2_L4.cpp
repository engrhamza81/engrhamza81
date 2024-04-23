//Engr Hamza Ahmad
#include<iostream>
using namespace std;
class Distance{
    private:
    float feet,inches;
    public:
    void getDistance(){
        float f, i, f2=0;
        cout<<"Enter  the DISTENCE IN FEET";
        cin>>f;
        feet=f;
        cout<<"Enter the distance in  inches:";
        cin>>i;
          if  (i>=12)
        {
            f2=f2+1;
        }
        else if (i<12)
        {
            i=i/12;
            f2=f2+i;
        }
       inches=f2;
        
    }
    void add_dist()
    {
        cout<<"Addition of distance is ="<<feet+inches<<endl;

    }
    void subtract_dist()
    {
        cout<<"Subtraction of distance is ="<<feet-inches<<endl;
    }
   void display()
   {
      cout<<"Original  Distance in feet ="<<feet<<endl;
      cout<<"Original in inches is ="<<inches<<endl;

   }
};


int main()
{

Distance d;
d.getDistance();
d.add_dist();
d.subtract_dist();
d.display();

return 0;
}