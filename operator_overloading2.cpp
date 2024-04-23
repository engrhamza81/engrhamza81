#include<iostream>
using namespace std;
class employ{
    private:
    int age;
    string name;
    public:
    employ(int x=0, string s="HAMZA"):age(x),name(s) {}
   friend ostream&operator<< (ostream& obj, employ e)
    {
        obj<<"Name of the Employ is :"<<e.name<<endl;
        obj<<"Age of Employ is :"<<e.age<<endl;
    }
};
int main()
{
    employ e1;
    cout<<e1<<endl;
}