#include<iostream> // Include the input-output stream library
#include<vector> // Include the vector library
#include<fstream> // Include the file stream library
using namespace std; // Use the standard namespace

class student { // Define the student class
public: // Access specifier

    int roll_no; // Declare roll number variable

    string name; // Declare name variable

    void get_data() { // Member function to get data from user
        int r; // Temporary variable for roll number
        string n; // Temporary variable for name

        cout << "Enter Name of the student: "; // Prompt user for name
        cin >> n; // Read name

        name = n; // Assign input to class variable
        cout << "Enter Roll_No of the Student: "; // Prompt user for roll number
        cin >> r; // Read roll number

        roll_no = r; // Assign input to class variable (corrected assignment)
    }

    void store_data_ina_file(string filename, student S) { // Member function to store data in a file
        fstream file(filename, ios::app); // Open file in append mode

        file << S.name << "  " << S.roll_no; // Write student data to file
    }
};

int main() { // Main function

    fstream file("final.txt", ios::in | ios::out); // Open file in input-output mode

    if (file.is_open()) { // Check if file is open

        string line; // Declare string variable to hold file lines

        while (getline(file, line)) { // Read file line by line
            cout << line << endl; // Print each line
        }
        file.clear(); // Clear any error flags

        file << "Hamza Ahmad\nJallozai nowshera\nPeshawar\n"; // Write data to file

        int line_no = 1; // Initialize line number counter

        string search; // Declare search string

        bool found = false; // Flag to check if search string is found

        cout << "Enter the string that you search: "; // Prompt user for search string

        getline(cin, search); // Read search string

        file.clear(); // Clear any error flags
        file.seekg(0, ios::beg); // Move file pointer to beginning

        while (getline(file, line)) { // Read file line by line
            if (line.find(search) != string::npos) { // Check if search string is in line
                cout << "The string is found at line Number: " << line_no << endl; // Print line number
                found = true; // Set found flag
            }
            line_no++; // Increment line number
        }
        if (!found) { // If search string not found
            cout << "The string is not found"; // Print not found message
        }

        int no_of_char = 0; // Initialize character counter

        char ch; // Declare char variable to read characters

        file.clear(); // Clear any error flags
        file.seekg(0, ios::beg); // Move file pointer to beginning

        while (file.get(ch)) { // Read file character by character
            no_of_char++; // Increment character counter
        }
        cout << "\nThe no of chars found is = " << no_of_char << endl; // Print character count

        int no_of_line = 0; // Initialize line counter

        file.clear(); // Clear any error flags
        file.seekg(0, ios::beg); // Move file pointer to beginning

        while (getline(file, line)) { // Read file line by line
            no_of_line++; // Increment line counter
        }
        cout << "The no of lines is = " << no_of_line << endl; // Print line count

        file.close(); // Close the file

        student s; // Create a student object

        s.get_data(); // Get data for the student

        s.store_data_ina_file("final.txt", s); // Store student data in file
    }
    return 0; // Return 0 to indicate successful execution
}
