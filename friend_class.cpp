//Engr.Hamza Ahmad
#include<iostream>
using namespace std;
class post{
    private:
    int age;
    string text;
    friend class user;
};
class user{
    public :
    void setdata(post& p1, string newtext, int a)
    {
        p1.text=newtext;
        p1.age=a;
        cout<<"This post is Done successfuly\n";
        cout<<p1.text;
        cout<<endl<<p1.age;
    }
   
};

int main(){
    post h;
    user u;
    u.setdata(h, "My Name Is HAMZA AHMAD",19);


return 0;
}