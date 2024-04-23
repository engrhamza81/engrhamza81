//Engr.Hamza Ahmad
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream text;
    text.open("Document.txt",ios::in|ios::out);
    string old_text;
    while (getline(text,old_text))
    {
        cout<<old_text<<endl;
    }
     text.clear();
    text<<"This is new text added here"<<endl;
    text<<"I am doing EleectricAL Engineering"<<endl;
    text.close();
    


return 0;
}