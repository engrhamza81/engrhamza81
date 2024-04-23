#include<iostream>
using namespace std;

int main() {
    int size = 0;
    int *array = new int[5]{1, 2, 3, 4, 5};

    // Display the original array
    for (int i = 0; i < 5; i++) {
        cout << array[i] << "  ";
    }
    cout << endl;

    int max;
    cout << "Enter how much you want to increase: ";
    cin >> max;

    // Create a new array with increased size
    int *arraynew = new int[5 + max];

    // Copy elements from the old array to the new array
    for (int i = 0; i < 5; i++) {
        arraynew[i] = array[i];
    }

    // Input new elements for the increased size
    for (int i = 5; i < 5 + max; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arraynew[i];
    }

    // Delete the old array
    delete[] array;

    // Assign the new array to the original pointer
    array = arraynew;

    // Set arraynew to NULL to avoid potential issues
    arraynew = NULL;

    cout << "--------------------\n";

    // Display the new array
    for (int i = 0; i < 5 + max; i++) {
        cout << array[i] << endl;
    }

    // Deallocate memory for the new array
    delete[] array;

    return 0;
}
