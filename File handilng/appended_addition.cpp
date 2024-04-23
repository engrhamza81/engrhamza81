//Engr.Hamza Ahmad
#include<iostream>
#include<fstream>
using namespace std;


int main(){
  ofstream text;
  text.open("Document.txt",ios::app);
  if (text.is_open()){
    
  text<<"Appended text is ADDED"<<endl;
    
  }
  text.close();

return 0;
}