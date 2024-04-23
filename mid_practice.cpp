//Engr.Hamza Ahmad
#include<iostream>
using namespace std;
void alias()
{
    typedef  int integer;
    integer a=100;
    cout<<"Given Number is ="<<a<<endl;
}
void Array_as_pointer()
{
    int array[5]={1,2,3,4,5};
    cout<<"The address of first index Element by Arrey name printing is="<<array<<endl;
    int *index=array;
    cout<<"The elenent on index 1 is ="<<*index<<endl;
}
void BitWise_operator()
{
 int a=10;
	int b=20;
	int c=a&b;
	int d=a|b;
	int e=a^b;
//	int f=a ~ b;
	int g=a<<2;
	int h=b>>2;
	cout<<"AND operator="<<c<<endl;
	cout<<"OR operator="<<d<<endl;
	cout<<"XOR operator="<<e<<endl;
	cout<<"left shift of 2 operator="<<g<<endl;
	cout<<"Right shift of 2 operator="<<h<<endl;
}
void character_pointer()
{
    char name[10]={'H','A','M','Z','A','\0'};
    cout<<name<<endl;
    char *ptr;
    ptr=name;
    cout<<ptr<<endl;
    cout<<"By For LOOP\n";
    for (int  i = sizeof(name); i>=0; i--)
    {
        cout<<name[i];
    }
    
}
void classes()
{
    class car{
        public:
        int model;
        string name;
        int num;
        void display(car c[])
        {
           for (int i = 0; i < num; i++)
           {
            cout<<c[i].name<<endl;
            cout<<c[i].model<<endl;
           }
           
        }
        
    };


}


int main(){
    int reply;
    cout<<"Enter 1 For Alies Topic\n";
    cout<<"Enter 2 For For Array as pointer Topic\n";
    cout<<"Enter 3 For For Bitwise Topic\n";
    cout<<"Enter 4 For For Char As Pointer Topic\n";
    cout<<"Enter 5 For For class Topic\n";
    cin>>reply;
    switch (reply)
    {
    case 1:
       alias();
        break;
    case 2:
       Array_as_pointer();
        break;
    case 3:
       BitWise_operator();
        break;
    case 4:
       character_pointer();
        break;
    case 5:
      
       classes();
       //classes
        break;
    
    default:
    cout<<"You Enter Wrong\n";
        break;
    }


return 0;
}