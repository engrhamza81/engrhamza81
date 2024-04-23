#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum UserType {
    ADMIN,
    STUDENT,
    TEACHER,
};

enum Department {
    COMPUTER_SCIENCE,
    ELECTRICAL_ENGINEERING,
    MECHANICAL_ENGINEERING,
    MATERIAL_SCIENCE,
};

enum EducationLevel {
    UNDERGRADUATE,
    GRADUATE,
};

class Person {
protected:
    string name;
    int age;

public:
    Person(string name, int age) : name(name), age(age) {}

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    string getName() const {
        return name;
    }
};

class Course {
private:
    string name;
    int credits;
    string teacherName;

public:
    Course(string name, int credits, string teacherName) : name(name), credits(credits), teacherName(teacherName) {}

    void display() const {
        cout << "Course Name: " << name << endl;
        cout << "Credits: " << credits << endl;
        cout << "Teacher: " << teacherName << endl;
    }

    string getCourseName() const {
        return name;
    }

    string getTeacherName() const {
        return teacherName;
    }
};

// Continue with the remaining code in the next response...
class Grade {
private:
    string letter_grade;
    float numeric_grade;

public:
    Grade(string letter_grade, float numeric_grade) : letter_grade(letter_grade), numeric_grade(numeric_grade) {}

    void display() const {
        cout << "Letter Grade: " << letter_grade << endl;
        cout << "Numeric Grade: " << numeric_grade << endl;
    }
};

class Student : public Person {
private:
    EducationLevel educationLevel;
    Department department;
    vector<Course> courses;
    vector<Grade> grades;

public:
    Student(string name, int age, EducationLevel educationLevel, Department department)
        : Person(name, age), educationLevel(educationLevel), department(department) {}

    // Default constructor for Student
    Student() : Person("Arman", 23), educationLevel(UNDERGRADUATE), department(COMPUTER_SCIENCE) {
        // Default courses for the student
        Course defaultCourse("Introduction to Programming", 3, "John Doe");
        Grade defaultGrade("A", 90.0);
        courses.push_back(defaultCourse);
        grades.push_back(defaultGrade);
    }

    void display() const {
        Person::display();
        cout << "Education Level: " << educationLevel << endl;
        cout << "Department: " << department << endl;

        // Display Courses and Grades
        cout << "Courses and Grades:" << endl;
        for (size_t i = 0; i < courses.size(); i++) {
            courses[i].display();
            grades[i].display();
        }
    }

    void enrollInCourse(const Course& course, const Grade& grade) {
        courses.push_back(course);
        grades.push_back(grade);
        cout << "Enrolled in course successfully!" << endl;
    }
      void editProfile() {
        cout << "Enter new name: ";
        getline(cin, name);

        cout << "Enter new age: ";
        cin >> age;
        cin.ignore(); // Consume the newline character

        cout << "Enter new education level (0 for UNDERGRADUATE, 1 for GRADUATE): ";
        int eduLevel;
        cin >> eduLevel;
        educationLevel = static_cast<EducationLevel>(eduLevel);
        cin.ignore(); // Consume the newline character

        cout << "Enter new department (0 for COMPUTER_SCIENCE, 1 for ELECTRICAL_ENGINEERING, 2 for MECHANICAL_ENGINEERING, 3 for MATERIAL_SCIENCE): ";
        int dept;
        cin >> dept;
        department = static_cast<Department>(dept);
        cin.ignore(); // Consume the newline character

        cout << "Student profile edited successfully!" << endl;
    }


    void unenrollFromCourse(const string& courseName) {
        for (size_t i = 0; i < courses.size(); i++) {
            if (courses[i].getCourseName() == courseName) {
                courses.erase(courses.begin() + i);
                grades.erase(grades.begin() + i);
                cout << "Unenrolled from course successfully!" << endl;
                return;
            }
        }
        cout << "Course not found!" << endl;
    }

    void displayAllCoursesTaken() const {
        for (size_t i = 0; i < courses.size(); i++) {
            courses[i].display();
            grades[i].display();
        }
    }
};

class Teacher : public Person {
private:
    Department department;
vector<Course> courses;
public:
    // Default constructor
    Teacher() : Person("John Doe", 40), department(COMPUTER_SCIENCE) {}

    Teacher(string name, int age, Department department)
        : Person(name, age), department(department) {}

    void display() const {
        Person::display();
        cout << "Department: " << department << endl;
    }

    Department getDepartment() const {
        return department;
    }

    void editProfile() {
        cout << "Enter new name: ";
        getline(cin, name);

        cout << "Enter new age: ";
        cin >> age;
        cin.ignore(); // Consume the newline character

        cout << "Enter new department (0 for COMPUTER_SCIENCE, 1 for ELECTRICAL_ENGINEERING, 2 for MECHANICAL_ENGINEERING, 3 for MATERIAL_SCIENCE): ";
        int dept;
        cin >> dept;
        department = static_cast<Department>(dept);
        cin.ignore(); // Consume the newline character

        cout << "Teacher profile edited successfully!" << endl;
    }

 void allocateCourseToTeacher() {
    // Simulating the process of course allocation
    string courseName;
    int credits;

    cout << "Enter the course name to allocate: ";
    getline(cin, courseName);

    cout << "Enter the course credits: ";
    cin >> credits;
    cin.ignore(); // Consume the newline character

    // Assuming the teacher can only teach one course at a time
    Course course(courseName, credits, getName());  // Teacher's name is set as the course teacher
    cout << "Course allocated to teacher successfully!" << endl;

    // Updating the teacher's courses
    courses.clear();
    courses.push_back(course);

        cout << "Course allocated to teacher successfully!" << endl;
     }    
};

// Now, let's implement the StudentsRecord class with its functions...
class StudentsRecord {
private:
    vector<Student> students;
    vector<Teacher> teachers;

public:
    void addStudent();
    void editStudentProfile();
    void displayAllStudents() const;
    void enrollStudentInCourse();
    void unenrollStudentFromCourse();
    void displayAllCoursesTaken() const;

    void addTeacher();
    void removeTeacher(const string& teacherName);
    void editTeacherProfile();
    void displayAllTeachers() const;
};

class Admin {
private:
    StudentsRecord studentsRecord;

public:
    void startAdminMenu();
};

// Implementing functions for StudentsRecord class
void StudentsRecord::addStudent() {
    students.emplace_back();
    cout << "Student added successfully!" << endl;
}

void StudentsRecord::editStudentProfile() {
    string targetName;
    cout << "Enter the name of the student to edit: ";
    getline(cin, targetName);

    for (auto& student : students) {
        if (student.getName() == targetName) {
            student.editProfile();
            return;
        }
    }

    cout << "Student not found!" << endl;
}

void StudentsRecord::displayAllStudents() const {
    for (const auto& student : students) {
        student.display();
        cout << endl;
    }
}

void StudentsRecord::enrollStudentInCourse() {
    string targetName;
    cout << "Enter the name of the student to enroll: ";
    getline(cin, targetName);

    for (auto& student : students) {
        if (student.getName() == targetName) {
            // Ask for the course details
            string courseName;
            int credits;

            cout << "Enter the course name: ";
            getline(cin, courseName);

            cout << "Enter the course credits: ";
            cin >> credits;
            cin.ignore(); // Consume the newline character

            // Ask for the teacher's name
            string teacherName;
            cout << "Enter the teacher's name for the course: ";
            getline(cin, teacherName);

            Course course(courseName, credits, teacherName);

            string letterGrade;
            float numericGrade;

            cout << "Enter the letter grade: ";
            getline(cin, letterGrade);

            cout << "Enter the numeric grade: ";
            cin >> numericGrade;
            cin.ignore(); // Consume the newline character

            Grade grade(letterGrade, numericGrade);

            student.enrollInCourse(course, grade);
            return;
        }
    }

    cout << "Student not found!" << endl;
}

void StudentsRecord::unenrollStudentFromCourse() {
    string targetName;
    cout << "Enter the name of the student to unenroll: ";
    getline(cin, targetName);

    for (auto& student : students) {
        if (student.getName() == targetName) {
            string courseName;

            cout << "Enter the course name to unenroll: ";
            getline(cin, courseName);

            student.unenrollFromCourse(courseName);
            return;
        }
    }

    cout << "Student not found!" << endl;
}

void StudentsRecord::displayAllCoursesTaken() const {
    for (const auto& student : students) {
        student.displayAllCoursesTaken();
    }
}

void StudentsRecord::addTeacher() {
    teachers.emplace_back();
    cout << "Teacher added successfully!" << endl;
}

void StudentsRecord::removeTeacher(const string& teacherName) {
    for (auto it = teachers.begin(); it != teachers.end(); ++it) {
        if (it->getName() == teacherName) {
            teachers.erase(it);
            cout << "Teacher removed successfully!" << endl;
            return;
        }
    }
    cout << "Teacher not found!" << endl;
}

void StudentsRecord::editTeacherProfile() {
    string targetName;
    cout << "Enter the name of the teacher to edit: ";
    getline(cin, targetName);

    for (auto& teacher : teachers) {
        if (teacher.getName() == targetName) {
            teacher.editProfile();
            return;
        }
    }

    cout << "Teacher not found!" << endl;
}

void StudentsRecord::displayAllTeachers() const {
    for (const auto& teacher : teachers) {
        teacher.display();
        cout << endl;
    }
}

// Implementing functions for Admin class
void Admin::startAdminMenu() {
    int choice;
    do {
        cout << "Choose an option:" << endl;
        cout << "0: Add student" << endl;
        cout << "1: Edit student profile" << endl;
        cout << "2: Display all students" << endl;
        cout << "3: Enroll student in a course" << endl;
        cout << "4: Unenroll student from a course" << endl;
        cout << "5: Display all courses taken by students" << endl;
        cout << "6: Add teacher" << endl;
        cout << "7: Remove teacher" << endl;
        cout << "8: Edit teacher profile" << endl;
        cout << "9: Display all teachers" << endl;
        cout << "10: Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Consume the newline character

        switch (choice) {
            case 0:
                studentsRecord.addStudent();
                break;
            case 1:
                studentsRecord.editStudentProfile();
                break;
            case 2:
                studentsRecord.displayAllStudents();
                break;
            case 3:
                studentsRecord.enrollStudentInCourse();
                break;
            case 4:
                studentsRecord.unenrollStudentFromCourse();
                break;
            case 5:
                studentsRecord.displayAllCoursesTaken();
                break;
            case 6:
                studentsRecord.addTeacher();
                break;
            case 7: {
                string teacherName;
                cout << "Enter the name of the teacher to remove: ";
                getline(cin, teacherName);
                studentsRecord.removeTeacher(teacherName);
                break;
            }
            case 8:
                studentsRecord.editTeacherProfile();
                break;
            case 9:
                studentsRecord.displayAllTeachers();
                break;
            case 10:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 10);
}

// Main function for user interaction
int main() {
    int userType;
    cout << "Choose user type:" << endl;
    cout << "0: Admin" << endl;
    cout << "1: Student" << endl;
    cout << "2: Teacher" << endl;
    cout << "Enter your choice: ";
    cin >> userType;
    cin.ignore(); // Consume the newline character

    // Declare StudentsRecord object
    StudentsRecord studentsRecord;

    switch (userType) {
        case ADMIN: {
            Admin admin;
            admin.startAdminMenu();
            break;
        }

        case STUDENT: {
            // Implement Student menu here
            Student student;
            int studentChoice;

            do {
                cout << "Student Menu:" << endl;
                cout << "1: Check Personal details" << endl;
                cout << "2: Enroll in available courses" << endl;
                cout << "3: View final grades" << endl;
                cout << "4: View list of all teachers" << endl;
                cout << "5: View enrolled, dropped, and completed courses" << endl;
                cout << "6: Exit" << endl;
                cout << "Enter your choice: ";
                cin >> studentChoice;
                cin.ignore(); // Consume the newline character

                switch (studentChoice) {
                    case 1:
                        student.display();
                        break;
                    case 2:
                        studentsRecord.enrollStudentInCourse(); // Call the function to enroll in a course
                        break;
                    case 3:
                        student.displayAllCoursesTaken(); // Assuming this function displays final grades
                        break;
                    case 4:
                        studentsRecord.displayAllTeachers(); // Call the function to display all teachers
                        break;
                    case 5:
                        studentsRecord.displayAllCoursesTaken(); // Call the function to display enrolled, dropped, and completed courses
                        break;
                    case 6:
                        cout << "Exiting Student menu. Goodbye!" << endl;
                        break;
                    default:
                        cout << "Invalid choice. Please try again." << endl;
                }
            } while (studentChoice != 6);

            break;
        }

        case TEACHER: {
            // Implement Teacher menu here
            Teacher teacher;
            int teacherChoice;

            do {
                cout << "Teacher Menu:" << endl;
                cout << "1: Check personal details" << endl;
                cout << "2: Allocate courses to teachers" << endl;
                cout << "3: Exit" << endl;
                cout << "Enter your choice: ";
                cin >> teacherChoice;
                cin.ignore(); // Consume the newline character

                switch (teacherChoice) {
                    case 1:
                        teacher.display();
                        break;
                    case 2: {
                        teacher.allocateCourseToTeacher(); // Call the function to allocate a course to the teacher
                        break;
                    }
                    case 3:
                        cout << "Exiting Teacher menu. Goodbye!" << endl;
                        break;
                    default:
                        cout << "Invalid choice. Please try again." << endl;
                }
            } while (teacherChoice != 3);

            break;
        }

        default:
            cout << "Invalid user type. Exiting program. Goodbye!" << endl;
    }

    return 0;
}

// End of main function


// End of main function