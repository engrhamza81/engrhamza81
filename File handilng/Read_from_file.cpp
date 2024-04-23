//Engr.Hamza Ahmad
#include<iostream>
#include<fstream>
using namespace std;


int main(){
    ifstream obj;
    obj.open("Document.txt",ios::in);
    string line;
    while(getline(obj,line))
    {
        cout<<line<<endl;
    }
    obj.close();


return 0;
}