#include <iostream>
#include <string>

// Enum to represent different types of shapes
enum ShapeType {
    CIRCLE,
    SQUARE,
    TRIANGLE
};

// Structure to represent a shape
struct Shape {
    ShapeType type;
    std::string color;
    double dimensions;
};

// Function to display information about a shape
void displayShape(const Shape& shape) {
    std::cout << "Shape Type: ";
    switch (shape.type) {
        case CIRCLE:
            std::cout << "Circle";
            break;
        case SQUARE:
            std::cout << "Square";
            break;
        case TRIANGLE:
            std::cout << "Triangle";
            break;
        default:
            std::cout << "Unknown";
            break;
    }
    std::cout << "\nColor: " << shape.color << "\nDimensions: " << shape.dimensions << std::endl;
}

int main() {
    // Declare an instance of the Shape structure
    Shape myShape;

    // Get input from the user
    std::cout << "Enter shape type (0 for Circle, 1 for Square, 2 for Triangle): ";
    int shapeType;
    std::cin >> shapeType;
    myShape.type = static_cast<ShapeType>(shapeType);

    std::cout << "Enter color: ";
    std::cin >> myShape.color;

    std::cout << "Enter dimensions: ";
    std::cin >> myShape.dimensions;

    // Display information about the entered shape
    displayShape(myShape);

    return 0;
}
