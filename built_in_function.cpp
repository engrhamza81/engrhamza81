#include <iostream>
#include <windows.h> // Include Windows.h for Windows-specific functions

using namespace std;

// Function to set the cursor position
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    gotoxy(9, 5);
    cout << "Engr.Hamza Ahmad\n";
    return 0;
}
