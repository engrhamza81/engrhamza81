#include<iostream>
using namespace std;
int num;
class cars{
    public:
    string name;
    int model;
    string com_name;
    int price;
};
void display(cars c[])
{
  cout<<"---------YOU GAVE--------\n";
    for (int i = 0; i < num; i++)
   {
     cout<<"Name of Car "<<i+1<<"= ";
     cout<<c[i].name<<endl;
     cout<<" Model of Car "<<i+1<<"= ";
     cout<<c[i].model<<endl;
     cout<<"COMPANY NAME of Car "<<i+1<<"= ";
     cout<<c[i].com_name<<endl;
     cout<<"price of Car "<<i+1<<"= ";
     cout<<c[i].price<<endl;
  
}
} 



int main(){
    
    cout<<"Enter no of Cars:";
    cin>>num;

   cars c[num];
   for (int i = 0; i < num; i++)
   {
     cout<<"Enter Name of Car "<<i+1<<" =";
     cin>>c[i].name;
     cout<<"Enter  Model of Car "<<i+1<<" =";
     cin>>c[i].model;
     cout<<"Enter COMPANY NAME of Car "<<i+1<<" =";
     cin>>c[i].com_name;
     cout<<"Enter price of Car "<<i+1<<" =";
     cin>>c[i].price;
   }
   display(c);
   


return 0;
}