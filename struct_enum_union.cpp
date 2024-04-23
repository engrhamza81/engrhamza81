#include <iostream>
using namespace std;

// Enum to represent different shape types
enum ShapeType {
    Rectangle,
    Circle,
    Triangle
};

// Enum to represent different colors
enum Color {
    Red,
    Blue,
    Green
};

// Union to hold shape-specific data
union ShapeData {
    struct {
        int width;
        int height;
    } RectangleData;
    
    struct {
        int radius;
    } CircleData;
    
    struct {
        int base;
        int height;
    } TriangleData;
};

// Structure to represent a shape
struct Shape {
    ShapeType type;
    Color color;
    ShapeData data;
};

// Function to print shape information
void printShapeInfo(Shape shape) {
    cout << "Shape: ";
    switch(shape.type) {
        case Rectangle:
            cout << "Rectangle" << endl;
            cout << "Color: ";
            break;
        case Circle:
            cout << "Circle" << endl;
            cout << "Color: ";
            break;
        case Triangle:
            cout << "Triangle" << endl;
            cout << "Color: ";
            break;
    }
    
    switch(shape.color) {
        case Red:
            cout << "Red" << endl;
            break;
        case Blue:
            cout << "Blue" << endl;
            break;
        case Green:
            cout << "Green" << endl;
            break;
    }
    
    switch(shape.type) {
        case Rectangle:
            cout << "Dimensions: Width = " << shape.data.RectangleData.width << ", Height = " << shape.data.RectangleData.height << endl;
            break;
        case Circle:
            cout << "Dimensions: Radius = " << shape.data.CircleData.radius << endl;
            break;
        case Triangle:
            cout << "Dimensions: Base = " << shape.data.TriangleData.base << ", Height = " << shape.data.TriangleData.height << endl;
            break;
    }
}

int main() {
    Shape rectangle = {Rectangle, Red, {10, 5}};
    Shape circle = {Circle, Blue, {7}};
    Shape triangle = {Triangle, Green, {6, 8}};
    
    printShapeInfo(rectangle);
    printShapeInfo(circle);
    printShapeInfo(triangle);
    
    return 0;
}

