//Engr.Hamza Ahmad
#include<iostream>
#include<fstream>
using namespace std;


int main(){
    ofstream text;
    text.open("Document.txt",ios::out);
    if(text.is_open())
    {
        text<<"Engineer Hamza From GIKI"<<endl;
    }
    text.close();


return 0;
}