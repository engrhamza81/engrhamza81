#include <iostream>
#include <string>
using namespace std;

enum Department {
    ComputerScience,
    DataScience,
    ElectricalEngineering,
    MechanicalEngineering,
    MaterialsEngineering,
    CivilEngineering
};

enum GradeCriteria {
    A, B, C, D, F
};

const int Max_Students = 100;
const int Max_Teachers = 50;
const int Max_Courses = 50;

class Person {
private:
    string name;
    int reg_number;
    int age;
    Department department;

public:
    Person() {}

    Person(string _name, int _reg_number, int _age, Department _department) {
        name = _name;
        reg_number = _reg_number;
        age = _age;
        department = _department;
    }

    string getName() const { return name; }
    int getRegNumber() const { return reg_number; }
    int getAge() const { return age; }
    Department getDepartment() const { return department; }

    static void addStudent(Person students[], int& numStudents, const Person& newStudent) {
        if (numStudents < Max_Students) {
            students[numStudents++] = newStudent;
            cout << "Student " << newStudent.getName() << " added successfully!" << endl;
        } else {
            cout << "Maximum capacity reached! Cannot add more students." << endl;
        }
    }

    static void removeStudent(Person students[], int& numStudents, int idToRemove) {
        int foundIndex = -1;
        for (int i = 0; i < numStudents; ++i) {
            if (students[i].reg_number == idToRemove) {
                foundIndex = i;
                break;
            }
        }

        if (foundIndex != -1) {
            for (int i = foundIndex; i < numStudents - 1; ++i) {
                students[i] = students[i + 1];
            }
            numStudents--;
            cout << "Student with ID " << idToRemove << " removed successfully." << endl;
        } else {
            cout << "Student with ID " << idToRemove << " not found." << endl;
        }
    }

    static void updateStudent(Person students[], int numStudents, int studentId, const Person& newStudent) {
        bool found = false;
        for (int i = 0; i < numStudents; ++i) {
            if (students[i].reg_number == studentId) {
                students[i] = newStudent;
                found = true;
                break;
            }
        }
        if (found) {
            cout << "Student with ID " << studentId << " updated successfully." << endl;
        } else {
            cout << "Student with ID " << studentId << " not found." << endl;
        }
    }

    static void addTeacher(Person teachers[], int& numTeachers, const Person& newTeacher) {
        if (numTeachers < Max_Teachers) {
            teachers[numTeachers++] = newTeacher;
            cout << "Teacher " << newTeacher.getName() << " added successfully!" << endl;
        } else {
            cout << "Maximum capacity reached! Cannot add more teachers." << endl;
        }
    }

    static void removeTeacher(Person teachers[], int& numTeachers, int idToRemove) {
        int foundIndex = -1;
        for (int i = 0; i < numTeachers; ++i) {
            if (teachers[i].reg_number == idToRemove) {
                foundIndex = i;
                break;
            }
        }

        if (foundIndex != -1) {
            for (int i = foundIndex; i < numTeachers - 1; ++i) {
                teachers[i] = teachers[i + 1];
            }
            numTeachers--;
            cout << "Teacher with ID " << idToRemove << " removed successfully." << endl;
        } else {
            cout << "Teacher with ID " << idToRemove << " not found." << endl;
        }
    }

    static void updateTeacher(Person teachers[], int numTeachers, int teacherId, const Person& newTeacher) {
        bool found = false;
        for (int i = 0; i < numTeachers; ++i) {
            if (teachers[i].reg_number == teacherId) {
                teachers[i] = newTeacher;
                found = true;
                break;
            }
        }
        if (found) {
            cout << "Teacher with ID " << teacherId << " updated successfully." << endl;
        } else {
            cout << "Teacher with ID " << teacherId << " not found." << endl;
        }
    }
};

class Course {
private:
    int course_code;
    string course_name;
    Department department;
    string teacher;
    int* studentsEnrolled;
    int numStudentsEnrolled;
    

public:
    Course() {}

    Course(int _course_code, string _course_name, Department _department, string _teacher) {
        course_code = _course_code;
        course_name = _course_name;
        department = _department;
        teacher = _teacher;
        numStudentsEnrolled = 0;
        studentsEnrolled = new int[Max_Students];
    }

    ~Course() {
        delete[] studentsEnrolled;
    }

    static void addCourse(Course courses[], int& numCourses, const Course& newCourse) {
        if (numCourses < Max_Courses) {
            courses[numCourses++] = newCourse;
            cout << "Course " << newCourse.getCourseName() << " added successfully!" << endl;
        } else {
            cout << "Maximum capacity reached! Cannot add more courses." << endl;
        }
    }

    static void removeCourse(Course courses[], int& numCourses, int courseCode) {
        int foundIndex = -1;
        for (int i = 0; i < numCourses; ++i) {
            if (courses[i].getCourseCode() == courseCode) {
                foundIndex = i;
                break;
            }
        }

        if (foundIndex != -1) {
            for (int i = foundIndex; i < numCourses - 1; ++i) {
                courses[i] = courses[i + 1];
            }
            numCourses--;
            cout << "Course with code " << courseCode << " removed successfully." << endl;
        } else {
            cout << "Course with code " << courseCode << " not found." << endl;
        }
    }
    void updateCourse(Course courses[], int numCourses, int courseCode, const Course& newCourse) {
        bool found = false;
        for (int i = 0; i < numCourses; ++i) {
            if (courses[i].getCourseCode() == courseCode) {
                courses[i] = newCourse;
                found = true;
                break;
            }
        }

        if (found) {
            cout << "Course with code " << courseCode << " updated successfully." << endl;
        } else {
            cout << "Course with code " << courseCode << " not found." << endl;
        }
    }
    void enrollStudent(int studentId) {
        if (numStudentsEnrolled < Max_Students) {
            studentsEnrolled[numStudentsEnrolled++] = studentId;
            cout << "Student with ID " << studentId << " enrolled in course " << course_code << " successfully." << endl;
        } else {
            cout << "Maximum capacity reached! Cannot enroll more students in course " << course_code << "." << endl;
        }
    }

    bool isStudentEnrolled(int studentId) {
        for (int i = 0; i < numStudentsEnrolled; ++i) {
            if (studentsEnrolled[i] == studentId) {
                return true;
            }
        }
        return false;
    }
    void viewTopStudent() {
        if (numStudentsEnrolled == 0) {
            cout << "No students enrolled in this course." << endl;
            return;
        }

        int topStudentId = studentsEnrolled[0]; // Assuming the first student has the highest grade initially
        int highestMarks; /* Obtain the marks of the first student */

        for(int i=1; i < numStudentsEnrolled; ++i) 
		{
            // Compare marks of the current student with the highest marks
            // If the current student has higher marks, update topStudentId and highestMarks
            // Obtain the marks of the current student
        }

        cout << "Top Student in Class:\n";
        cout << "Student ID: " << topStudentId << endl;
        cout << "Highest Marks: " << highestMarks << endl;
    }
     void viewGradeDivision() {
        if (numStudentsEnrolled == 0) {
            cout << "No students enrolled in this course." << endl;
            return;
        }

        int gradeCounts[5] = {0}; // Array to store the count of students in each grade category

        // Iterate through enrolled students and count the number of students in each grade category
        for (int i = 0; i < numStudentsEnrolled; ++i) {
            int studentId = studentsEnrolled[i];
            // Assuming 'getGradeForStudent' is a function that retrieves the grade for a given student ID
            GradeCriteria grade=getGradeForStudent(studentId); // You need to implement this function
            switch (grade) {
                case A:
                    gradeCounts[0]++;
                    break;
                case B:
                    gradeCounts[1]++;
                    break;
                case C:
                    gradeCounts[2]++;
                    break;
                case D:
                    gradeCounts[3]++;
                    break;
                case F:
                    gradeCounts[4]++;
                    break;
                default:
                    break;
            }
        }

        // Display the grade-wise division of students
        cout << "Grade-wise Division of Students:\n";
        cout << "A: " << gradeCounts[0] << " students\n";
        cout << "B: " << gradeCounts[1] << " students\n";
        cout << "C: " << gradeCounts[2] << " students\n";
        cout << "D: " << gradeCounts[3] << " students\n";
        cout << "F: " << gradeCounts[4] << " students\n";
    }
    class Grade {
private:
    int studentId;
    GradeCriteria grade;

public:
    Grade() {}
    Grade(int _studentId, GradeCriteria _grade) : studentId(_studentId), grade(_grade) {}

    int getStudentId() const { return studentId; }
    GradeCriteria getGrade() const { return grade; }

    static void assignGrade(Grade grades[], int& numGrades, int studentId, GradeCriteria newGrade) {
        bool found = false;
        for (int i = 0; i < numGrades; ++i) {
            if (grades[i].getStudentId() == studentId) {
                grades[i] = Grade(studentId, newGrade);
                found = true;
                cout << "Grade assigned/updated successfully for student with ID " << studentId << "." << endl;
                break;
            }
        }
        if (!found) {
            if (numGrades < Max_Students) {
                grades[numGrades++] = Grade(studentId, newGrade);
                cout << "Grade assigned successfully for student with ID " << studentId << "." << endl;
            } else {
                cout << "Maximum capacity reached! Cannot assign more grades." << endl;
            }
        }
    }
    
};

void assignMarksAndGrades(int studentId, int marks) {
    // Placeholder implementation
    // Here, you can assign grades based on marks
    // For demonstration purposes, let's assume a simple grading scheme
    GradeCriteria grade;
    if (marks >= 90) {
        grade = A;
    } else if (marks >= 80) {
        grade = B;
    } else if (marks >= 70) {
        grade = C;
    } else if (marks >= 60) {
        grade = D;
    } else {
        grade = F;
    }
    // Assign the grade using the Grade class
    Grade::assignGrade(grades, numGrades, studentId, grade);
}

    int getCourseCode() const { return course_code; }
    string getCourseName() const { return course_name; }
    Department getDepartment() const { return department; }
    string getTeacher() const { return teacher; }
};


int main() {
    Person students[Max_Students];
    Person teachers[Max_Teachers];
    Course courses[Max_Courses];
    Grade grades[Max_Students];
    int numStudents = 0, numTeachers = 0, numCourses = 0, numGrades = 0;

    cout << "Welcome to the Student Management System!" << endl;

    // Menu
    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Admin\n";
        cout << "2. Student\n";
        cout << "3. Teacher\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // Admin Menu
                int adminChoice;
                do {
                    cout << "\nAdmin Menu:\n";
                    cout << "1. Add Student\n";
                    cout << "2. Remove Student\n";
                    cout << "3. Update Student\n";
                    cout << "4. Add Teacher\n";
                    cout << "5. Remove Teacher\n";
                    cout << "6. Update Teacher\n";
                    cout << "7. Add Course\n";
                    cout << "8. Remove Course\n";
                    cout << "9. Update Course\n";
                    cout << "10. Exit\n";
                    cout << "Enter your choice: ";
                    cin >> adminChoice;

                    switch (adminChoice) {
                       case 1: {
    // Add Student
    string name;
    int reg_number, age, departmentIndex;
    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter registration number: ";
    cin >> reg_number;
    cout << "Enter age: ";
    cin >> age;
    cout << "Select department:\n";
    for (int i = 0; i < 6; ++i) {
        cout << i + 1 << ". " << static_cast<Department>(i) << endl;
    }
    cin >> departmentIndex;
    Person::addStudent(students, numStudents, Person(name, reg_number, age, static_cast<Department>(departmentIndex - 1)));
    break;
}

case 2: {
    // Remove Student
    int idToRemove;
    cout << "Enter student ID to remove: ";
    cin >> idToRemove;
    Person::removeStudent(students, numStudents, idToRemove);
    break;
}

 case 3: {
    // Update Student
    int studentId;
    cout << "Enter student ID to update: ";
    cin >> studentId;

    // Gather updated student details
    string newName;
    int newRegNumber, newAge, newDepartmentIndex;
    cout << "Enter new student name: ";
    cin.ignore();
    getline(cin, newName);
    cout << "Enter new registration number: ";
    cin >> newRegNumber;
    cout << "Enter new age: ";
    cin >> newAge;
    cout << "Select new department:\n";
    for (int i = 0; i < 6; ++i) {
        cout << i + 1 << ". " << static_cast<Department>(i) << endl;
    }
    cin >> newDepartmentIndex;

    // Create a new Person object with updated details
    Person updatedStudent(newName, newRegNumber, newAge, static_cast<Department>(newDepartmentIndex - 1));

    // Call updateStudent function
    Person::updateStudent(students, numStudents, studentId, updatedStudent);
    break;
}
                       
case 4: {
    // Add Teacher
    string name;
    int reg_number, age, departmentIndex;
    cout << "Enter teacher name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter registration number: ";
    cin >> reg_number;
    cout << "Enter age: ";
    cin >> age;
    cout << "Select department:\n";
    for (int i = 0; i < 6; ++i) {
        cout << i + 1 << ". " << static_cast<Department>(i) << endl;
    }
    cin >> departmentIndex;

    // Call addTeacher function
    Person::addTeacher(teachers, numTeachers, Person(name, reg_number, age, static_cast<Department>(departmentIndex - 1)));
    break;
}

 case 5: {
    // Remove Teacher
    int idToRemove;
    cout << "Enter teacher ID to remove: ";
    cin >> idToRemove;

    // Call removeTeacher function
    Person::removeTeacher(teachers, numTeachers, idToRemove);
    break;
}
                       
 case 6: {
    // Update Teacher
    int teacherId;
    cout << "Enter teacher ID to update: ";
    cin >> teacherId;

    // Prompt for new details
    string name;
    int reg_number, age, departmentIndex;
    cout << "Enter updated teacher name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter updated registration number: ";
    cin >> reg_number;
    cout << "Enter updated age: ";
    cin >> age;
    cout << "Select updated department:\n";
    for (int i = 0; i < 6; ++i) {
        cout << i + 1 << ". " << static_cast<Department>(i) << endl;
    }
    cin >> departmentIndex;

    // Call updateTeacher function
    Person::updateTeacher(teachers, numTeachers, teacherId, Person(name, reg_number, age, static_cast<Department>(departmentIndex - 1)));
    break;
}
                       
case 7: {
    // Add Course
    int course_code, departmentIndex;
    string course_name, teacherName;
    cout << "Enter course code: ";
    cin >> course_code;
    cout << "Enter course name: ";
    cin.ignore();
    getline(cin, course_name);
    cout << "Select department:\n";
    for (int i = 0; i < 6; ++i) {
        cout << i + 1 << ". " << static_cast<Department>(i) << endl;
    }
    cin >> departmentIndex;
    cout << "Enter teacher name: ";
    cin.ignore();
    getline(cin, teacherName);

    // Call addCourse function
    Course::addCourse(courses, numCourses, Course(course_code, course_name, static_cast<Department>(departmentIndex - 1), teacherName));
    break;
}
                      
 case 8: {
    // Remove Course
    int courseCode;
    cout << "Enter course code to remove: ";
    cin >> courseCode;

    // Call removeCourse function
    Course::removeCourse(courses, numCourses, courseCode);
    break;
}
                      
case 9: {
    // Update Course
    int courseCode;
    cout << "Enter course code to update: ";
    cin >> courseCode;

    // Find the course in the array
    bool courseFound = false;
    for (int i = 0; i < numCourses; ++i) {
        if (courses[i].getCourseCode() == courseCode) {
            // Prompt admin for updated course details
            int updatedCourseCode, departmentIndex;
            string updatedCourseName, updatedTeacherName;
            cout << "Enter updated course code: ";
            cin >> updatedCourseCode;
            cout << "Enter updated course name: ";
            cin.ignore();
            getline(cin, updatedCourseName);
            cout << "Select updated department:\n";
            for (int j = 0; j < 6; ++j) {
                cout << j + 1 << ". " << static_cast<Department>(j) << endl;
            }
            cin >> departmentIndex;
            cout << "Enter updated teacher name: ";
            cin.ignore();
            getline(cin, updatedTeacherName);

            // Update the course
            Course updatedCourse(updatedCourseCode, updatedCourseName, static_cast<Department>(departmentIndex - 1), updatedTeacherName);
          
            
            courseFound = true;
            break;
        }
    }

    // Check if the course was found
    if (!courseFound) {
        cout << "Course with code " << courseCode << " not found." << endl;
    }
    break;
}
                        
case 10: {
cout << "Returning to Main Menu.\n";
 break;
        }
default: {
cout << "Invalid choice! Please enter a number between 1 and 10.\n";
break;
    }
 }
 } while (adminChoice != 10);
 break;
}
                 case 2: {
                // Student Menu
                int studentChoice;
                do {
                    cout << "\nStudent Menu:\n";
                    cout << "1. Check Personal Details\n";
                    cout << "2. Enroll in Available Courses\n";
                    cout << "3. View Final Grades\n";
                    cout << "4. View List of Teachers\n";
                    cout << "5. View Enrolled, Dropped, and Completed Courses\n";
                    cout << "6. Exit\n";
                    cout << "Enter your choice: ";
                    cin >> studentChoice;

                    switch (studentChoice) {
                        case 1: {
    // Check Personal Details
    int studentId;
    cout << "Enter your student ID: ";
    cin >> studentId;
    bool found = false;
    for (int i = 0; i < numStudents; ++i) {
        if (students[i].getRegNumber() == studentId) {
            cout << "Personal Details:" << endl;
            cout << "Name: " << students[i].getName() << endl;
            cout << "Registration Number: " << students[i].getRegNumber() << endl;
            cout << "Age: " << students[i].getAge() << endl;
            cout << "Department: " << students[i].getDepartment() << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student with ID " << studentId << " not found." << endl;
    }
    break;


                       }
                        case 2: {
    // Enroll in Available Courses
    int studentId;
    cout << "Enter your student ID: ";
    cin >> studentId;
    
    // Check if the student exists
    int studentIndex = -1;
    for (int i = 0; i < numStudents; ++i) {
        if (students[i].getRegNumber() == studentId) {
            studentIndex = i;
            break;
        }
    }
    
    if (studentIndex == -1) {
        cout << "Student with ID " << studentId << " not found." << endl;
        break;
    }
    
    // Display available courses
    cout << "Available Courses:" << endl;
    for (int i = 0; i < numCourses; ++i) {
        cout << courses[i].getCourseCode() << ". " << courses[i].getCourseName() << endl;
    }
    
    // Enroll in a course
    int courseCode;
    cout << "Enter the course code to enroll in: ";
    cin >> courseCode;
    
    // Find the course in the courses array
    int courseIndex = -1;
    for (int i = 0; i < numCourses; ++i) {
        if (courses[i].getCourseCode() == courseCode) {
            courseIndex = i;
            break;
        }
    }
    
    // Check if the course exists
    if (courseIndex == -1) {
        cout << "Course with code " << courseCode << " not found." << endl;
        break;
    }
    
    // Enroll the student in the course
    courses[courseIndex].enrollStudent(studentId);
    cout << "Student with ID " << studentId << " enrolled in course " << courseCode << " successfully." << endl;
    break;
}

  case 3: {
    // View Final Grades
    int studentId;
    cout << "Enter your student ID: ";
    cin >> studentId;
    
    // Check if the student exists
    int studentIndex = -1;
    for (int i = 0; i < numStudents; ++i) {
        if (students[i].getRegNumber() == studentId) {
            studentIndex = i;
            break;
        }
    }
    
    if (studentIndex == -1) {
        cout << "Student with ID " << studentId << " not found." << endl;
        break;
    }
    
    // Display final grades
    cout << "Final Grades for Student " << students[studentIndex].getName() << ":" << endl;
    bool foundGrades = false;
    for (int i = 0; i < numGrades; ++i) {
        if (grades[i].getStudentId() == studentId) {
            cout << "Grade: " << static_cast<char>('A' + grades[i].getGrade()) << endl;
            foundGrades = true;
            break;
        }
    }
    
    if (!foundGrades) {
        cout << "No final grades found for student with ID " << studentId << "." << endl;
    }
    break;

                     
 case 4: {
    // View List of Teachers
    cout << "List of Teachers:" << endl;
    for (int i = 0; i < numTeachers; ++i) {
        cout << "Name: " << teachers[i].getName() << endl;
        cout << "Registration Number: " << teachers[i].getRegNumber() << endl;
        cout << "Age: " << teachers[i].getAge() << endl;
        cout << "Department: " << teachers[i].getDepartment() << endl;
        cout << "---------------------------" << endl;
    }
    break;
}
case 5: {
    // View Enrolled, Dropped, and Completed Courses

    cout << "Enrolled Courses:" << endl;
    bool enrolled = false;
    for (int i = 0; i < numCourses; ++i) {
        if (courses[i].isStudentEnrolled(studentId)) {
            enrolled = true;
            cout << courses[i].getCourseName() << endl;
        }
    }
    if (!enrolled) {
        cout << "You are not currently enrolled in any courses." << endl;
    }

    // Implement similar logic for dropped and completed courses if applicable

    break;
}
                     
case 6: {
cout << "Returning to Main Menu.\n";
    break;
    }
default: {
cout << "Invalid choice! Please enter a number between 1 and 6.\n";
    break;
        }
        }
                } while (studentChoice != 6);
                break;
            
            case 3: {
                // Teacher Menu
                int teacherChoice;
                do {
                    cout << "\nTeacher Menu:\n";
                    cout << "1. Check Personal Details\n";
                    cout << "2. View Allocated Courses\n";
                    cout << "3. View Enrolled Students in Each Course\n";
                    cout << "4. Assign Marks and Grades to Students\n";
                    cout << "5. View Top Student in Class\n";
                    cout << "6. View Grade-wise Division of Students\n";
                    cout << "7. Exit\n";
                    cout << "Enter your choice: ";
                    cin >> teacherChoice;

switch (teacherChoice) {
int teacherIndex = -1; // Initialize teacherIndex to an invalid value

// Authenticate teacher login and set teacherIndex accordingly
// For example, you might prompt the teacher to enter their ID and password,
// then search for their ID in the teachers array to find their index

// Once the teacher is authenticated, you can use teacherIndex to access their details
if (teacherIndex != -1) {
    switch (teacherChoice) {
        case 1: {
            // Check Personal Details
            cout << "Name: " << teachers[teacherIndex].getName() << endl;
            cout << "Registration Number: " << teachers[teacherIndex].getRegNumber() << endl;
            cout << "Age: " << teachers[teacherIndex].getAge() << endl;
            cout << "Department: " << teachers[teacherIndex].getDepartment() << endl;
            break;
        }
        // Other cases for teacher functionality
    }
} else {
    cout << "Teacher not logged in. Please log in first." << endl;
}

case 2: {
    // View Allocated Courses
    cout << "Allocated Courses:" << endl;
    bool found = false;
    for (int i = 0; i < numCourses; ++i) {
        if (courses[i].getTeacher() == teachers[teacherIndex].getName()) {
            cout << "Course Code: " << courses[i].getCourseCode() << endl;
            cout << "Course Name: " << courses[i].getCourseName() << endl;
            cout << "Department: " << courses[i].getDepartment() << endl;
            cout << "Teacher: " << courses[i].getTeacher() << endl;
            cout << "--------------------------" << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No courses allocated." << endl;
    }
    break;
}
 case 3: {
    // View Enrolled Students in Each Course
    cout << "Enrolled Students in Each Course:" << endl;
    bool found = false;
    for (int i = 0; i < numCourses; ++i) {
        cout << "Course Code: " << courses[i].getCourseCode() << endl;
        cout << "Course Name: " << courses[i].getCourseName() << endl;
        cout << "Department: " << courses[i].getDepartment() << endl;
        cout << "Teacher: " << courses[i].getTeacher() << endl;
        cout << "Enrolled Students:" << endl;
        found = false;
        for (int j = 0; j < courses[i].getNumStudentsEnrolled(); ++j) {
            for (int k = 0; k < numStudents; ++k) {
                if (courses[i].getStudentsEnrolled()[j] == students[k].getRegNumber()) {
                    cout << students[k].getName() << endl;
                    found = true;
                    break;
                }
            }
        }
        if (!found) {
            cout << "No students enrolled in this course." << endl;
        }
        cout << "--------------------------" << endl;
    }
    break;
}
                   
case 4: {
    // Assign Marks and Grades to Students
    int studentId, marks;
    cout << "Enter student ID: ";
    cin >> studentId;
    cout << "Enter marks: ";
    cin >> marks;

    // Assuming 'courseIndex' is the index of the course in the 'courses' array
    courses[courseIndex].assignMarksAndGrades(studentId, marks);
    break;
}

case 5: {
    // View Top Student in Class
    // Assuming 'courseIndex' is the index of the course in the 'courses' array
    courses[courseIndex].viewTopStudent();
    break;
}

case 6: {
    // View Grade-wise Division of Students
    // Assuming 'courseIndex' is the index of the course in the 'courses' array
    courses[courseIndex].viewGradeDivision();
    break;
}
                        
                     
case 7: {
    cout << "Returning to Main Menu.\n";
    break;
     }
default: {
cout << "Invalid choice! Please enter a number between 1 and 7.\n";
    break;
     }
    }
 } while (teacherChoice != 7);
 break;
 }
case 4: {
cout << "Exiting program. Goodbye!\n";
                break;
}
 default: {
cout << "Invalid choice! Please enter a number between 1 and 4.\n";
break;
            }
        }
         while(choice != 4);

return 0;
}
}
}