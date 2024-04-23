//Engr.Hamza Ahmad
#include<iostream>
#include<fstream>
using namespace std;


int main(){
    string search,line;
    int line_number=1;
    bool found =false;
    cout<<"Enter The string You Search:";
    getline(cin, search);
    fstream text("Document.txt",ios::in);
    if(text.is_open())
    {
        while(getline(text,line))
        {
            if(line.find(search)!=string::npos){
                cout<<"The String line is ="<<line_number;
                found=true;
            }
            
            line_number++;
        }
    }
    if(!found)
    {
        cout<<"The String is not found"<<endl;
    }
    text.close();


return 0;
}