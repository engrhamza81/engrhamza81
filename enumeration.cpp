#include <iostream>

// Define an enumeration named Color with three values
enum Color {
    Red,
    Green,
    Blue
};

int main() {
    // Declare a variable of type Color
    Color myColor = Green;

    // Use the variable
    if (myColor == Red) {
        std::cout << "The color is Red." << std::endl;
    } else if (myColor == Green) {
        std::cout << "The color is Green." << std::endl;
    } else if (myColor == Blue) {
        std::cout << "The color is Blue." << std::endl;
    }

    return 0;
}
enum gColor {
    Redd =5,
    Greeen = 10,
    Bluee = 15
};

