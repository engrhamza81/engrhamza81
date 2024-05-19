#include<iostream>  // Include the iostream library for input/output operations
#include<vector>    // Include the vector library for using the vector container (not used in this example)
#include<fstream>   // Include the fstream library for file input/output operations (not used in this example)
using namespace std;  // Use the standard namespace

// Template function 'add' that takes two parameters of any types T1 and T2
template<typename T1, typename T2>
void add(T1 a, T2 b) {
    // Output the sum of the two parameters
    cout << "The addition of two numbers is equal to: " << a + b << endl;
}

int main() {
    // Call the template function 'add' with int and float parameters
    add<int, float>(2, 2.33);

    return 0;  // Return 0 to indicate successful execution
}
