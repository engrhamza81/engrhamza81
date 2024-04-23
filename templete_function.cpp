//Engr.Hamza Ahmad
#include<iostream>
using namespace std;
template <typename T, typename H>
void add(T a,H b)
{
    cout<<"Result is ="<<a+b;
}
template <typename T, typename H>
void display(T s, H a)
{
    cout<<"\nThe first perameter is equal to "<<s<<endl;
    cout<<"\nThe second  perameter is equal to "<<a<<endl;
}

int main(){
    add<int,float>(2,2.2);
    display<string ,char>("HAMZA",'h');
    add<char,int>('h',5);

return 0;
}