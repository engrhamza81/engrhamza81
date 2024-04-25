//Engr.Hamza Ahmad
#include<iostream>
#include<fstream>
using namespace std;


int main(){
    fstream text;
    string line;
    text.open("Quizetwo.pdf",ios::in|ios::out);
    if(text.is_open())
    {
        while (getline(text, line))
        {
            cout<<line<<endl;
        }
        text<<"New file is created\n";
        
    }
   text.clear();
   text<<"Additional text that add below\n";
    text.close();
return 0;
}