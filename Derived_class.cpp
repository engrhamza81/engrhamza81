//Engr.Hamza Ahmad
#include<iostream>
using namespace std;
class base{
    public:
    int a;
    int b;
    int answer;
    base(int x, int y):a(x),b(y) {}
    void result()
    {
        answer=a+b;
        cout<<"The addition of two number is Equal to :"<<answer<<endl;
    }
};
class derived_1 :public base{
    public:
    derived_1(int k, int l):base(k,l) {}
    void result()
    {
        answer=a+b;
        cout<<"The addition of two number is Equal to :"<<answer<<endl;
    }
};
class derived_2 :public base{
    public:
    derived_2(int p, int q):base(p,q) {}
    void result()
    {
        answer=a+b;
        cout<<"The addition of two number is Equal to :"<<answer<<endl;
    }
};

int main(){
    int g,h,i,j;
    cout<<"Enter 1 vale :";
    cin>>g;
    cout<<"Enter 2 vale :";
    cin>>h;
    cout<<"Enter 3 vale :";
    cin>>i;
    cout<<"Enter 4 vale :";
    cin>>j;
    derived_1 obj1(g,h);
    derived_2 obj2(i,j);
    obj1.result();
    obj2.result();
    if (obj1.answer>obj2.answer)
    {
       cout<<"Obj 1 Have bigger value\n";
    }
    
    


return 0;
}