// //Engr.Hamza Ahmad
// #include<iostream>
// using namespace std;


// int main(){
//     int age;
//     cout<<"Enter your age: ";
//     cin>>age;
//     try
//     {
//         if (age>18)
//         {
//             cout<<"Your are Eligable\n";
//         }
//        else throw(age);
        
//     }
//     catch(int num)
//     {
//         cout<<"Denied your age is "<<num<<endl;
//     }
    


// return 0;
// }
// //Engr.Hamza Ahmad
// #include<iostream>
// #include<vector>
// using namespace std;


// int main(){
// int array[4]={1,2,3,4};
// vector <int> vec(array,array+4);
// vector<int>::iterator iter=vec.begin();
// cout<<"First Element of the vactor is="<<*iter;
// for (int  i = 0; i <4; i++)
// {
//    cout<<"  "<<*iter;
//    iter++;
// }


// return 0;
// }
//Engr.Hamza Ahmad
// #include<iostream>
// #include<vector>
// #include<fstream>
// using namespace std;

// class student{
//    public:

//    int roll_no;

//    string name;

//    void get_data()
//    {
//       int r;
//       string n;

//      cout<<"Enter Name of the student :";
//      cin>>n;

//      name=n;
//      cout<<"Enter Roll_No of the Student :";
//      cin>>r;

//      r=roll_no;
//    }
//      void store_data_ina_file(string filename, student S)
//    {
      
//     fstream file(filename,ios::app);

//    file <<S.name << "  "<< S.roll_no ;
    
// }

// };
 

// int main(){

//     fstream file("final.txt",ios::in|ios::out);

//     if(file.is_open());

//    string line;

//     while(getline(file,line))
//     {
//       cout<<line<<endl;
//     }
//     file.clear();

//     file<<"Hamza Ahmad\n Jallozai nowshera \n Peshawar\n";

//     int line_no=1;

//     string search;

//     bool found=false;

//     cout<<"Enter the string that you search :";

//     getline(cin,search);

//    file.clear(); // Clear any error flags

//     file.seekg(0, ios::beg);

//     while (getline(file,line))
//     {
//       if (line.find(search)!=string::npos)
//       {
//          cout<<"The string is found at line Number :"<<line_no<<endl;

//         found=true;
//       }
//        line_no++;
//     }
//     if(!found){

//       cout<<"The string is not found";
//     }

//     int no_of_char=0;

//     char ch;

//     file.clear();

//      file.seekg(0, ios::beg);

//     while(file.get(ch)){
//       no_of_char++;
//     }
//     cout<<"\nThe no Char found is = "<<no_of_char<<endl;

//     int no_of_line=0;

//     file.clear();

//      file.seekg(0, ios::beg);

//     while(getline(file,line))
//     {
//       no_of_line++;
//     }
//     cout<<"The no line is ="<<no_of_line<<endl;

//     file.close();

//     student s;

//     s.get_data();

//     s.store_data_ina_file("final.txt",s);

// return 0;
// }
//Engr.Hamza Ahmad
// #include<iostream>
// #include<vector>
// #include<fstream>
// using namespace std;
// class employ{
//    public:
//    int salery;
//    employ(int s=0):salery(s) {}
//    employ operator-(employ obj)
//    {
//       obj.salery=obj.salery-salery;
//       return obj;
//    }
//   friend ostream& operator<<(ostream &out, const employ &e) {
//     out << e.salery; // Output the salary of employ object
//     return out; // Return the ostream object
// }
// friend istream& operator>>(istream in, employ &ein)
// {
//    cout<<"Enter salery :";
//    in>>ein.salery;
// }
// };

// int main(){
//    employ e1;
//    employ e2;
//    employ e3;
//    cout<<"Enter Salery :";
//    cin>>e1.salery;
//    cout<<"Enter Salery :";
//    cin>>e2.salery;
//    cout<<"The subtraction of the salery :";
//    e3=e2-e1;
//    cout<<e3;


// return 0;
// }
// //Engr.Hamza Ahmad
// #include<iostream>
// #include<vector>
// #include<fstream>
// using namespace std;
// template <class T1, class T2>
// class pairr{
//    private:
//    T1 x;
//    T2 y;
//    public:
//    pairr(T1 a, T2 b):x(a),y(b) {}
//    void display()
//    {
//       cout<<"The value of first perameter  is Equal to :"<<x<<endl;
//       cout<<"The value of Second perameter is Equal to :"<<y<<endl;
//    }
// };

// int main(){
//    pairr<int,string>p(2,"HAMZA");
//    p.display();


// return 0;
// }
//Engr.Hamza Ahmad
#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
template<typename T1, typename T2>
void add(T1 a,T2 b)
{
   cout<<"The addition of two number is Equal to :"<<a+b<<endl;
}

int main(){

add<int ,float>(2,2.33);

return 0;
}