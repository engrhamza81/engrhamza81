#include<iostream>
using namespace std;
class employ{
    private:
    int age;
    string name;
    public:
    employ(int x=0, string s="HAMZA"):age(x),name(s) {}
   friend istream&operator>> (istream& obj, employ &e)
    {
        cout<<"Enter name of Employ:";
        obj>>e.name;
        cout<<"Enter Age of Employ:";
        obj>>e.age;
        return obj;
    }
    void display()
    {
        cout<<"----------Yor data------------\n";
        cout<<name<<endl;
        cout<<age<<endl;
    }

};
int main()
{
    employ e1;
    cin>>e1;
    e1.display();
}