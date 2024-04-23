//Engr.Hamza Ahmad
#include "student.cpp"
#include<string>

enum department{Electrical,Chemical,Mechanical,Software};
enum Educational_level{graduate,undergraduate};
enum grades{A,B,C,D,E,F};
enum person{Admin=1, students, teacher};
class student_data{
    public:
    string name;
     string reg_no;
    
    void get_studendata()
    {
        string r,m;
        cout<<"Enter your name:";
        cin>>m;
        name=m;
        cout<<"Enter the reg_no:";
        cin>>r;
        reg_no=r;
    }
    };
class course{

    public:
    int l,reply;
    student_data sd;
    string cname[9];
    void get_coursdata(){
     string cs[l];
             cout<<"Enter 0 for Electricla Department \n ";
            cout<<"Enter 1for Chemical Department \n ";
            cout<<"Enter 2 for Mechanical Department \n ";
            cout<<"Enter 3 for Software Department \n ";
            cin>>reply;
           switch (reply)
           {
            case Electrical:
            cout<<"YOu selected electrical:\n";
            break;
            case Chemical:
            cout<<"YOu selected Chemical:\n";
            break;
            case Mechanical:
            cout<<"YOu selected Mechanical:\n";
            break;
            case Software:
            cout<<"YOu selected Software:\n";
            break;
           default:
           cout<<"Wrong click!\n";
            break;
           }
           cout<<"Enter Education level\n";
           cout<<"Enter 0 for Graduated\n";
           cout<<"Enter 1 for UndertGraduated\n";
           switch (0,1)
           {
            case graduate:
            cout<<"You are Postgraduated student\n";
            break;
            case undergraduate:
            cout<<"You are Undertgraduated student\n";
            break;
           default:
           cout<<"Wrong selection\n";
            break;
           }
    cout<<"Enter no of couses less than 9: ";
    cin>>l;
    for (int i = 0; i < l; i++)
    {
        cout<<"Enter cours NO#"<<i+1<<"name:";
        cin>>cs[i];
        cname[i]=cs[i];
    }
    }

};
class teacher_data{
    public:
    string name[100] ;
    string cours[100];
    string detail[100];
    void get_teacher_data()
    {
        department dp;
        int n ,m,reply;

            cout<<"Enter No of student you add or remove:";
            cin>>n;
            for (int  i = 0; i < n; i++)
            {
                cout<<"Enter name of student :"<<i+1<<":";
                cin>>name[i];
            }
            cout<<"Enter 0 for Electricla Department \n ";
            cout<<"Enter 1for Chemical Department \n ";
            cout<<"Enter 2 for Mechanical Department \n ";
            cout<<"Enter 3 for Software Department \n ";
             cin>>reply;
           switch (reply)
           {
            case Electrical:
            cout<<"YOu selected electrical:\n";
            break;
            case Chemical:
            cout<<"YOu selected Chemical:\n";
            break;
            case Mechanical:
            cout<<"YOu selected Mechanical:\n";
            break;
            case Software:
            cout<<"YOu selected Software:\n";
            break;
            default:
            cout<<"Wrong click!\n";
            break;
}
         cout<<"Enter your you CNic to store Data\n";
         cin>>detail[0];
     }
};
int main(){
    course c;
   teacher_data tech;
   
     int h;
    cout<<"Enter 1 for admin\n ";
    cout<<"Enter 2 for Studeent\n ";
    cout<<"Enter 3 for Teacher\n ";
    cin>>h;
    switch (h)
    {
    case Admin:
    int select;
      cout<<"Enter 1 of Teacher\n";
      cout<<"Enter 2 of Student\n";
      cin>>select;
      if (select==1)
      {
        tech.get_teacher_data();
      }
      if (select==2)
      {
         c.get_coursdata();
      }
     break;
    case students:

         c.sd.get_studendata();
         c.get_coursdata();
        break;
    case teacher:
        int e;
         cout<<"Enter 1 For checking Students Record else You can check you record\n";
         cin>>e;
         if (e==1) {
          display();}
         else {
          tech.get_teacher_data();}
        break;
    
    default:
        break;
    }
return 0;
}
