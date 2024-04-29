//Engr.Hamza Ahmad
#include<iostream>
#include<fstream>
using namespace std;


int main(){
    int no_of_charr=0;
    char  ch;
    fstream file("Document.txt",ios::in);
    if(file.is_open())
    {
        while(file.get(ch))
        {
            no_of_charr++;
        }
    }
    cout<<"The number of line founded is ="<<no_of_charr<<endl;



return 0;
}