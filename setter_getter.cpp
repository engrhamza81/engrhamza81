//Engr.Hamza Ahmad
#include<iostream>
using namespace std;
class employ {
    private:
    int age;
    string name;
    public:
    void setter(int a, string s)
    {
        age=a;
        name=s;

    }
    int get_age()
    {
        return age;
    }
    string get_name()
    {
        return name;
    }
};

int main()
{
   employ e1;
   e1.setter (19, "HAMZA");
   // Accessing and printing age and name
    cout << "Age: " << e1.get_age() << endl;
    cout << "Name: " << e1.get_name() << endl;


return 0;
}