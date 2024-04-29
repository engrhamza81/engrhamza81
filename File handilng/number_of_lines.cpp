//Engr.Hamza Ahmad
#include<iostream>
#include<fstream>
using namespace std;


int main(){
  int no_of_line=0;
  string line;
  fstream file("Document.txt",ios::in);
  if(file.is_open())
  {
    while(getline(file,line))
    {
        no_of_line++;
    }
  }
  cout<<"The Number of line counted is="<<no_of_line<<endl;


return 0;
}