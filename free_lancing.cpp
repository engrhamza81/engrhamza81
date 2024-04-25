#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace TaskManagement {
    // Base Task class
    class Task {
    protected:
        string title;
        string description;
        double budget;
        string deadline;

    public:
        Task(const string& _title, const string& _description, double _budget, const string& _deadline)
            : title(_title), description(_description), budget(_budget), deadline(_deadline) {}

        virtual void display() const {
            cout << "Title: " << title << endl;
            cout << "Description: " << description << endl;
            cout << "Budget: " << budget << endl;
            cout << "Deadline: " << deadline << endl;
        }

        // You can add more methods here as needed

        bool operator<(const Task& other) const {
            return budget < other.budget && deadline < other.deadline;
        }

        bool operator<=(const Task& other) const {
            return budget <= other.budget;
        }

        bool operator>(const Task& other) const {
            return budget > other.budget;
        }

        bool operator>=(const Task& other) const {
            return budget >= other.budget;
        }

        bool operator==(const Task& other) const {
            return budget == other.budget;
        }

        bool operator!=(const Task& other) const {
            return budget != other.budget;
        }
    };

    // Specialized task types
    class WritingTask : public Task {
    public:
        WritingTask(const string& _title, const string& _description, double _budget, const string& _deadline)
            : Task(_title, _description, _budget, _deadline) {}

        void display() const override {
            cout << "Writing Task" << endl;
            Task::display(); // Call base class display method
            // Add specific display for WritingTask if needed
        }
    };

    class ProgrammingTask : public Task {
    public:
        ProgrammingTask(const string& _title, const string& _description, double _budget, const string& _deadline)
            : Task(_title, _description, _budget, _deadline) {}

        void display() const override {
            cout << "Programming Task" << endl;
            Task::display(); // Call base class display method
            // Add specific display for ProgrammingTask if needed
        }
    };

    // Class for managing tasks
    
}

namespace UserManagement {
    // Base User class
    class User {
    protected:
        string username;
        string email;
        // Add more user attributes as needed

    public:
        User(const string& username, const string& email)
            : username(username), email(email) {}

        // Methods for registration, login, profile management, etc.
       

        void* loginUser(const string& username, const string& email) {
            if(this->username == username && this->email == email){
                return this;
            }
            return nullptr; // Implement user login logic
        }

        // Other user management methods can be added here
    };

    // Client class inheriting from User
    class Client : public User {
    public:
        Client(const string& username, const string& email)
            : User(username, email) {}
        
        // Add client-specific methods if needed
    };

    // Freelancer class inheriting from User
    class Freelancer : public User {
    public:
        Freelancer(const string& username, const string& email)
            : User(username, email) {}
        
        // Add freelancer-specific methods if needed
    };
}

int main() {
    using namespace TaskManagement;
    using namespace UserManagement;

    char userType;
    cout << "Are you a Client (C) or a Freelancer (F)? ";
    cin >> userType;

    User* loggedInUser = nullptr;

    if (userType == 'C') {
        string username, email;
        cout << "Enter your username: ";
        cin >> username;
        cout << "Enter your email: ";
        cin >> email;
        Client client(username, email);
        loggedInUser == client.loginUser(username, email);
    } else if (userType == 'F') {
        string username, email;
        cout << "Enter your username: ";
        cin >> username;
        cout << "Enter your email: ";
        cin >> email;
        Freelancer freelancer(username, email);
        loggedInUser == freelancer.loginUser(username, email);
    } else {
        cout << "Invalid choice." << endl;
        return 1;
    }

    if (loggedInUser != nullptr) {
        cout << "Login successful!" << endl;
        // Show functionalities based on user type
        // For now, just print the user type
        if (userType == 'C') {
            cout << "Client functionalities" << endl;
        } else if (userType == 'F') {
            cout << "Freelancer functionalities" << endl;
        }
    } else {
        cout << "Login failed. Please try again." << endl;
    }

    return 0;
}
