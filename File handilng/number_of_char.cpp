//Engr.Hamza Ahmad
#include<iostream>
#include<fstream>
using namespace std;


int main(){
    int no_of_words=0;
    string word;
    fstream file("Document.txt",ios::in);
    if(file.is_open())
    {
        while(file>>word)
        {
            no_of_words++;
        }
    }
    cout<<"The number of line founded is ="<<no_of_words<<endl;



return 0;
}