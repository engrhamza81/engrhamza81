// Engr.Hamza Ahmad
#include<iostream>  // Include the iostream library for input/output operations
#include<vector>    // Include the vector library for using the vector container
#include<fstream>   // Include the fstream library for file input/output operations
using namespace std;  // Use the standard namespace

// Define a template class 'pairr' with two type parameters T1 and T2
template <class T1, class T2>
class pairr {
private:
    T1 x;  // Private member variable of type T1
    T2 y;  // Private member variable of type T2

public:
    // Constructor to initialize x and y with given values a and b
    pairr(T1 a, T2 b) : x(a), y(b) {}

    // Member function to display the values of x and y
    void display() {
        cout << "The value of first parameter is Equal to: " << x << endl;  // Output the value of x
        cout << "The value of second parameter is Equal to: " << y << endl;  // Output the value of y
    }
};

int main() {
    // Create an object 'p' of class 'pairr' with int and string types
    pairr<int, string> p(2, "HAMZA");

    // Call the display function to output the values of the object
    p.display();

    return 0;  // Return 0 to indicate successful execution
}
