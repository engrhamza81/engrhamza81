//HAMZA AHMAD 2023217
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to display vector data
void displayVector(const vector<int>& vec, const string& name) {
    cout << name << " vector data:";
    for (int num : vec) {
        cout << " " << num;
    }
    cout << endl;
}

int main() {
    // Seed the random number generator
    srand(time(nullptr));

    // Declare three integer vectors
    vector<int> vec1(10);
    vector<int> vec2(10);
    vector<int> vec3(10);

    // Fill vectors with random values
    for (int i = 0; i < 10; ++i) {
        vec1[i] = rand() % 10 + 1; // random number between 1 and 10
        vec2[i] = rand() % 10 + 11; // random number between 11 and 20
        vec3[i] = vec1[i];
    }

    // Display vector data
    displayVector(vec1, "vec1");
    displayVector(vec2, "vec2");
    displayVector(vec3, "vec3");

    // Check vector object relations for all relational operators
    if (vec1 != vec2)
        cout << "Operation: vec1 != vec2;\nvec1 vector and vec2 vector are not equal." << endl;

    if (vec1 == vec3)
        cout << "Operation: vec1 == vec3;\nvec1 vector and vec3 vector are equal." << endl;

    if (vec1 < vec2)
        cout << "Operation: vec1 < vec2;\nvec1 vector is less than vec2 vector." << endl;

    if (vec2 > vec1)
        cout << "Operation: vec2 > vec1;\nvec2 vector is greater than vec1 vector." << endl;

    if (vec2 >= vec1)
        cout << "Operation: vec2 >= vec1;\nvec2 vector is greater or equal to vec1 vector." << endl;

    if (vec1 <= vec2)
        cout << "Operation: vec1 <= vec2;\nvec1 vector is less or equal to vec2 vector." << endl;

    return 0;
}
