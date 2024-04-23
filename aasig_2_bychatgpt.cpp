#include <iostream>
#include <string>

using namespace std;

// Enumerations
enum class Department { ComputerScience, ElectricalEngineering, MechanicalEngineering };
enum class EducationLevel { Undergraduate, Graduate };
enum class Grade { A, B, C, D, F };

// Course Class
class Course {
public:
    string name;
    Department department;
    EducationLevel level;
};

// Person Class (Base Class)
class Person {
public:
    string name;
    int age;
};

// Student Class
class Student : public Person {
public:
    int studentID;
    Course* enrolledCourses[10]; // Maximum of 10 enrolled courses
    Course* droppedCourses[10]; // Maximum of 10 dropped courses
};

// Teacher Class
class Teacher : public Person {
public:
    int teacherID;
    Course* allocatedCourses[10]; // Maximum of 10 allocated courses
};

// GradeRecord Class
class GradeRecord {
public:
    Student* student;
    Course* course;
    Grade grade;
};

// Function prototypes
void addStudent(Student students[], int& studentCount);
void enrollCourse(Student& student, Course* course);

int main() {
    const int MAX_STUDENTS = 100;
    Student students[MAX_STUDENTS];
    int studentCount = 0;

    // Sample usage
    addStudent(students, studentCount);
    // Add more functionality as needed

    return 0;
}

// Function to add a student
void addStudent(Student students[], int& studentCount) {
    Student newStudent;
    // Code to input student details from user
    students[studentCount++] = newStudent;
}

// Function to enroll a student in a course
void enrollCourse(Student& student, Course* course) {
    for (int i = 0; i < 10; ++i) {
        if (student.enrolledCourses[i] == nullptr) {
            student.enrolledCourses[i] = course;
            break;
        }
    }
    // Code to update course enrollment records
}
