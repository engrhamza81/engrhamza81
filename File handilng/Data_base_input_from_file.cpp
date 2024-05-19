//Engr.Hamza Ahmad
#include<iostream>
#include<fstream>
using namespace std;
class student{
    public:
    int age;
    string name;
    string roll_no;
    char grade;
    student(int a=0, string n=" ", string r=" ", char g='z'): age(a),name(n),roll_no(r), grade(g) {} 
    };
    void read_from_file(string filename, student arr[], int size)
    {
    int age;
    string name;
    string roll_no;
    char grade;
    ifstream file(filename);
    for (int  i = 0; i <size; i++)
    {
        file>> age;
        file>> name;
        file>>roll_no;
        file>> grade;
        arr[i]=student(age,name,roll_no,grade);
    }
 }
int main(){
    string line;
    int size=0;
    fstream obj("data.txt");
     while (getline(obj, line)) {
        size++;
    }

    student arr[size]; // Create an array of 'student' objects with size equal to the number of lines in the file

    // Read data from the file and store it in the array
   read_from_file("data.txt", arr, size);

    // Print the information of each student stored in the array
    for (int i = 0; i < size; i++) {
        cout << "The name of student " << i + 1 << " is: " << arr[i].name << endl;
        cout << "The age of student " << i + 1 << " is: " << arr[i].age << endl;
        cout << "The grade of student " << i + 1 << " is: " << arr[i].grade << endl;
        cout << "TheRoll NO of student " << i + 1 << " is: " << arr[i].roll_no << endl;
    }
return 0;
}
