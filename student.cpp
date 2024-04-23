#ifndef student
#define student
#include<iostream>
using namespace std;
void student_record(string name, string roll_no, char grade, int marks, float gpa)
{
    cout<<"The Name of the student is ="<<name <<endl;
    cout<<"The Roll No of the student is ="<<roll_no <<endl;
    cout<<"The  Grade of the student is ="<< grade<<endl;
    cout<<"The  Markes of the student is ="<<marks <<endl;
    cout<<"The GPA of the student is ="<<gpa <<endl;
}
string st_name[5]={"HAMZA ","ALI","AHMAD","ADIL","ARBAZ"};
string st_rollno[5]={"u2023217","u2023101","u2023123","u2023355","u2023124"};
float st_gpa[5]={3.5,3.6,3.4,3.5,3.4};
char st_grade[5]={'A','B','C','D','E'};
int st_markes[5]={20,19,18,17,16};
void display (){
for (int  i = 0; i <5; i++)
{
cout<<"--------STUDENT NO#"<<i+1<<" Record-----------\n";
  student_record(st_name[i],st_rollno[i],st_grade[i],st_markes[i],st_gpa[i]);
}
}
//int h;
//cout<<"Do you want to delet any data of a student :";
//cin>>h;
//for (int  i = 0; i <h; i++)
//{
//    if (h=i){
//    st_grade[i]=NULL;
//    st_markes[i]=NULL;
//    st_gpa[i]=NULL;
//    // delete st_name[i];
//    // st_rollno[i]=delete
//}
//else {
//         
//}
//}
//
//
//
//}
#endif
