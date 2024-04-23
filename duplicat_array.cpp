#include<iostream>
using namespace std;

int main() {
    int array[10] = {1, 1, 4, 5, 3, 4, 5, 6, 1, 2};

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (array[i] == array[j]) {
                for (int k = j; k < 9; k++) {
                    array[k] = array[k + 1];
                }
                array[9] = 0; // Set the last element to 0 to avoid duplicates
            }
        }
    }

    cout << "-----------------\n";
    for (int m = 0; m < 10; m++) {
        cout << array[m] << " ";
    }

    return 0;
}
