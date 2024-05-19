#include<iostream>  // Include the iostream library for input/output operations
#include<vector>    // Include the vector library for using the vector container
#include<fstream>   // Include the fstream library for file input/output operations
using namespace std;  // Use the standard namespace

// Define the 'employ' class
class employ {
public:
    int salery;  // Public member variable to store the salary

    // Constructor with default salary value
    employ(int s=0) : salery(s) {}

    // Overload the '-' operator to subtract salaries of two 'employ' objects
    employ operator-(employ obj) {
        obj.salery = obj.salery - salery;  // Subtract the salary of the current object from obj's salary
        return obj;  // Return the modified obj
    }

    // Friend function to overload the '<<' operator for output
    friend ostream& operator<<(ostream &out, const employ &e) {
        out << e.salery;  // Output the salary of the 'employ' object
        return out;  // Return the ostream object
    }

    // Friend function to overload the '>>' operator for input
    friend istream& operator>>(istream &in, employ &ein) {
        cout << "Enter salary: ";  // Prompt the user to enter salary
        in >> ein.salery;  // Read the salary from the input stream
        return in;  // Return the istream object
    }
};

int main() {
    employ e1;  // Create an 'employ' object e1
    employ e2;  // Create an 'employ' object e2
    employ e3;  // Create an 'employ' object e3

    cout << "Enter Salary: ";  // Prompt the user to enter the salary for e1
    cin >> e1.salery;  // Read the salary into e1

    cout << "Enter Salary: ";  // Prompt the user to enter the salary for e2
    cin >> e2.salery;  // Read the salary into e2

    cout << "The subtraction of the salary: ";  // Output the message
    e3 = e2 - e1;  // Subtract e1's salary from e2's salary and store the result in e3

    cout << e3;  // Output the salary of e3

    return 0;  // Return 0 to indicate successful execution
}
