//Engr.Hamza Ahmad
#include<iostream>
using namespace std;
template<class C1, class C2>
 class test{
    private:
    C1 x;
    C2 y;
    public:
    test(C1 a, C2 b):x(a),y(b) {}
    void display()
    {
        cout<<"The value of first perameter is "<<x<<endl;
        cout<<"The value of second perameter is "<<y<<endl;
    }
};

int main(){
  test<int ,string> t(81,"HAMZA");
  t.display();

return 0;
}