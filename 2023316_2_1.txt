#include <iostream>
#include <string>
using namespace std;

enum Department {
    Computer_Science,
    Mechanical,
    Electrical,
    Civil,
    Chemical,
    Materials
};

enum GradeValue {
    A, B, C, D, F
};

string gradeToString(GradeValue grade) {
    switch (grade) {
        case A: return "A";
        case B: return "B";
        case C: return "C";
        case D: return "D";
        case F: return "F";
        default: return "Invalid Grade";
    }
}

struct Info {
    string name;
    int ID;
    string address;
    string email;
    int phone;
};

struct Course {
    int course_code;
    string name;
    Department department;
};

struct Enrollment {
    int studentIndex;
    int courseCode;
    GradeValue grade;
};

class Person {
public:
    Info* students;
    Course* courses;
    Enrollment* enrollments;
    Info* teachers;
    int studentCapacity;
    int courseCapacity;
    int enrollmentCapacity;
    int teacherCapacity;
    int studentCount;
    int courseCount;
    int enrollmentCount;
    int teacherCount;

    Person() {
        students = new Info[5];
        courses = new Course[5];
        enrollments = new Enrollment[5];
        teachers = new Info[5];
        studentCapacity = 5;
        courseCapacity = 5;
        enrollmentCapacity = 5;
        teacherCapacity = 5;
        studentCount = 0;
        courseCount = 0;
        enrollmentCount = 0;
        teacherCount = 0;
    }

~Person() {
    if (students != nullptr)
        delete[] students;
    if (courses != nullptr)
        delete[] courses;
    if (enrollments != nullptr)
        delete[] enrollments;
    if (teachers != nullptr)
        delete[] teachers;
}

    void addStudent(const Info& student) {
        if (studentCount < studentCapacity) {
            students[studentCount++] = student;
            cout << "Student added successfully." << endl;
        } else {
            cout << "Cannot add more students. Array is full." << endl;
        }
    }

    void removeStudent(int studentIndex) {
        if (studentIndex >= 0 && studentIndex < studentCount) {
            for (int i = studentIndex; i < studentCount - 1; ++i) {
                students[i] = students[i + 1];
            }
            --studentCount;
            cout << "Student removed successfully." << endl;
        } else {
            cout << "Invalid student index." << endl;
        }
    }

    void updateStudentDetails(int studentIndex, const Info& updatedInfo) {
        if (studentIndex >= 0 && studentIndex < studentCount) {
            students[studentIndex] = updatedInfo;
            cout << "Student details updated successfully." << endl;
        } else {
            cout << "Invalid student index." << endl;
        }
    }

    void displayAllStudents() {
        cout << "All Students:" << endl;
        displayPersonDetails(students, studentCount);
    }

    void addTeacher(const Info& teacher) {
        if (teacherCount < teacherCapacity) {
            teachers[teacherCount++] = teacher;
            cout << "Teacher added successfully." << endl;
        } else {
            cout << "Cannot add more teachers. Array is full." << endl;
        }
    }

    void removeTeacher(int teacherIndex) {
        if (teacherIndex >= 0 && teacherIndex < teacherCount) {
            for (int i = teacherIndex; i < teacherCount - 1; ++i) {
                teachers[i] = teachers[i + 1];
            }
            --teacherCount;
            cout << "Teacher removed successfully." << endl;
        } else {
            cout << "Invalid teacher index." << endl;
        }
    }

    void updateTeacherDetails(int teacherIndex, const Info& updatedInfo) {
        if (teacherIndex >= 0 && teacherIndex < teacherCount) {
            teachers[teacherIndex] = updatedInfo;
            cout << "Teacher details updated successfully." << endl;
        } else {
            cout << "Invalid teacher index." << endl;
        }
    }

    void displayAllTeachers() {
        cout << "All Teachers:" << endl;
        displayPersonDetails(teachers, teacherCount);
    }

    void addCourse(const Course& course) {
        if (courseCount < courseCapacity) {
            courses[courseCount++] = course;
            cout << "Course added successfully." << endl;
        } else {
            cout << "Cannot add more courses. Array is full." << endl;
        }
    }

    void removeCourse(int courseIndex) {
        if (courseIndex >= 0 && courseIndex < courseCount) {
            for (int i = courseIndex; i < courseCount - 1; ++i) {
                courses[i] = courses[i + 1];
            }
            --courseCount;
            cout << "Course removed successfully." << endl;
        } else {
            cout << "Invalid course index." << endl;
        }
    }

    void updateCourseDetails(int courseIndex, const Course& updatedInfo) {
        if (courseIndex >= 0 && courseIndex < courseCount) {
            courses[courseIndex] = updatedInfo;
            cout << "Course details updated successfully." << endl;
        } else {
            cout << "Invalid course index." << endl;
        }
    }

    void displayAllCourses() {
        cout << "All Courses:" << endl;
        for (int i = 0; i < courseCount; ++i) {
            cout << "Course Code: " << courses[i].course_code << endl;
            cout << "Course Name: " << courses[i].name << endl;
            cout << "Department: " << getDepartmentString(courses[i].department) << endl;
            cout << endl;
        }
    }

    void enrollStudentInCourse(int studentIndex, int courseCode, GradeValue grade) {
        if (studentIndex >= 0 && studentIndex < studentCount) {
            if (enrollmentCount == enrollmentCapacity) {
                Enrollment* newEnrollments = new Enrollment[enrollmentCapacity * 2];
                for (int i = 0; i < enrollmentCount; ++i) {
                    newEnrollments[i] = enrollments[i];
                }
                delete[] enrollments;
                enrollments = newEnrollments;
                enrollmentCapacity *= 2;
            }

            enrollments[enrollmentCount].studentIndex = studentIndex;
            enrollments[enrollmentCount].courseCode = courseCode;
            enrollments[enrollmentCount].grade = grade;
            ++enrollmentCount;

            cout << "Student enrolled in the course successfully." << endl;
        } else {
            cout << "Invalid student index." << endl;
        }
    }

    void unenrollStudentFromCourse(int studentIndex, int courseCode) {
        for (int i = 0; i < enrollmentCount; ++i) {
            if (enrollments[i].studentIndex == studentIndex && enrollments[i].courseCode == courseCode) {
                for (int j = i; j < enrollmentCount - 1; ++j) {
                    enrollments[j] = enrollments[j + 1];
                }
                --enrollmentCount;
                cout << "Student unenrolled from the course successfully." << endl;
                return;
            }
        }
        cout << "Student not found in the course." << endl;
    }

   void allocateCourseToTeacher(int courseCode, int teacherIndex) {
    // Validate input indices
    if (teacherIndex < 0 || teacherIndex >= teacherCount) {
        cout << "Invalid teacher index." << endl;
        return;
    }

    int courseIndex = findCourseIndex(courseCode);
    if (courseIndex == -1) {
        cout << "Course not found." << endl;
        return;
    }

    for (int i = 0; i < enrollmentCount; ++i) {
        if (enrollments[i].courseCode == courseCode) {
            cout << "Course is already allocated to a teacher." << endl;
            return;
        }
    }

    enrollments[enrollmentCount].studentIndex = teacherIndex;
    enrollments[enrollmentCount].courseCode = courseCode;
    enrollments[enrollmentCount].grade = GradeValue::F;
    ++enrollmentCount;

    cout << "Course allocated to teacher successfully." << endl;
}

void deallocateCourseFromTeacher(int courseCode, int teacherIndex) {
    if (teacherIndex < 0 || teacherIndex >= teacherCount) {
        cout << "Invalid teacher index." << endl;
        return;
    }

    int courseIndex = findCourseIndex(courseCode);
    if (courseIndex == -1) {
        cout << "Course not found." << endl;
        return;
    }
    int enrollmentIndex = -1;
    for (int i = 0; i < enrollmentCount; ++i) {
        if (enrollments[i].studentIndex == teacherIndex && enrollments[i].courseCode == courseCode) {
            enrollmentIndex = i;
            break;
        }
    }

    if (enrollmentIndex != -1) {
        for (int i = enrollmentIndex; i < enrollmentCount - 1; ++i) {
            enrollments[i] = enrollments[i + 1];
        }
        --enrollmentCount;

        cout << "Course deallocated from teacher successfully." << endl;
    } else {
        cout << "Course is not allocated to the specified teacher." << endl;
    }
}

    void displayEnrolledCourses(int studentIndex) {
        cout << "Enrolled Courses:" << endl;
        for (int i = 0; i < enrollmentCount; ++i) {
            if (enrollments[i].studentIndex == studentIndex) {
                int courseIndex = findCourseIndex(enrollments[i].courseCode);
                if (courseIndex != -1) {
                    cout << "Course Code: " << courses[courseIndex].course_code << endl;
                    cout << "Course Name: " << courses[courseIndex].name << endl;
                    cout << "Grade: " << gradeToString(enrollments[i].grade) << endl;
                    cout << endl;
                }
            }
        }
    }

    void displayPersonDetails(Info* personArray, int count) {
        for (int i = 0; i < count; ++i) {
            cout << "ID: " << personArray[i].ID << endl;
            cout << "Name: " << personArray[i].name << endl;
            cout << "Address: " << personArray[i].address << endl;
            cout << "Email: " << personArray[i].email << endl;
            cout << "Phone: " << personArray[i].phone << endl;
            cout << endl;
        }
    }

    int findCourseIndex(int courseCode) {
        for (int i = 0; i < courseCount; ++i) {
            if (courses[i].course_code == courseCode) {
                return i;
            }
        }
        return -1;
    }

    string getDepartmentString(Department department) {
        switch (department) {
            case Computer_Science: return "Computer Science";
            case Mechanical: return "Mechanical";
            case Electrical: return "Electrical";
            case Civil: return "Civil";
            case Chemical: return "Chemical";
            case Materials: return "Materials";
            default: return "Unknown Department";
        }
    }
};

class AdminUser {
public:
    static void handleAdminMenu(Person& people) {
        while (true) {
            cout << "\nAdmin Menu:" << endl;
            cout << "1. Add Student\n2. Remove Student\n3. Update Student Details\n";
            cout << "4. Display All Students\n5. Add Teacher\n6. Remove Teacher\n";
            cout << "7. Update Teacher Details\n8. Display All Teachers\n9. Add Course\n";
            cout << "10. Remove Course\n11. Update Course Details\n12. Display All Courses\n";
            cout << "13. Enroll Student in Course\n14. Unenroll Student from Course\n";
            cout << "15. Allocate Course to Teacher\n16. Deallocate Course from Teacher\n";
            cout << "0. Exit\n";

            int choice;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1: handleAddStudent(people); break;
                case 2: handleRemoveStudent(people); break;
                case 3: handleUpdateStudentDetails(people); break;
                case 4: people.displayAllStudents(); break;
                case 5: handleAddTeacher(people); break;
                case 6: handleRemoveTeacher(people); break;
                case 7: handleUpdateTeacherDetails(people); break;
                case 8: people.displayAllTeachers(); break;
                case 9: handleAddCourse(people); break;
                case 10: handleRemoveCourse(people); break;
                case 11: handleUpdateCourseDetails(people); break;
                case 12: people.displayAllCourses(); break;
                case 13: handleEnrollStudentInCourse(people); break;
                case 14: handleUnenrollStudentFromCourse(people); break;
                case 15: handleAllocateCourseToTeacher(people); break;
                case 16: handleDeallocateCourseFromTeacher(people); break;
                case 0: return;
                default: cout << "Invalid choice. Please try again." << endl;
            }
        }
    }

    static void handleAddStudent(Person& people) {
        Info studentInfo;
        cout << "Enter Student Details:" << endl;
        getInfoFromUser(studentInfo);
        people.addStudent(studentInfo);
    }

    static void handleRemoveStudent(Person& people) {
        int studentIndex;
        cout << "Enter the index of the student to remove: ";
        cin >> studentIndex;
        people.removeStudent(studentIndex);
    }

    static void handleUpdateStudentDetails(Person& people) {
        int studentIndex;
        cout << "Enter the index of the student to update: ";
        cin >> studentIndex;

        Info updatedInfo;
        cout << "Enter Updated Student Details:" << endl;
        getInfoFromUser(updatedInfo);

        people.updateStudentDetails(studentIndex, updatedInfo);
    }

    static void handleAddTeacher(Person& people) {
        Info teacherInfo;
        cout << "Enter Teacher Details:" << endl;
        getInfoFromUser(teacherInfo);
        people.addTeacher(teacherInfo);
    }

    static void handleRemoveTeacher(Person& people) {
        int teacherIndex;
        cout << "Enter the index of the teacher to remove: ";
        cin >> teacherIndex;
        people.removeTeacher(teacherIndex);
    }

    static void handleUpdateTeacherDetails(Person& people) {
        int teacherIndex;
        cout << "Enter the index of the teacher to update: ";
        cin >> teacherIndex;

        Info updatedInfo;
        cout << "Enter Updated Teacher Details:" << endl;
        getInfoFromUser(updatedInfo);

        people.updateTeacherDetails(teacherIndex, updatedInfo);
    }

    static void handleAddCourse(Person& people) {
        Course courseInfo;
        cout << "Enter Course Details:" << endl;
        getCourseInfoFromUser(courseInfo);
        people.addCourse(courseInfo);
    }

    static void handleRemoveCourse(Person& people) {
        int courseIndex;
        cout << "Enter the index of the course to remove: ";
        cin >> courseIndex;
        people.removeCourse(courseIndex);
    }

    static void handleUpdateCourseDetails(Person& people) {
        int courseIndex;
        cout << "Enter the index of the course to update: ";
        cin >> courseIndex;

        Course updatedInfo;
        cout << "Enter Updated Course Details:" << endl;
        getCourseInfoFromUser(updatedInfo);

        people.updateCourseDetails(courseIndex, updatedInfo);
    }

    static void handleEnrollStudentInCourse(Person& people) {
        int studentIndex, courseCode;

        cout << "Enter Student Index: ";
        cin >> studentIndex;

        cout << "Enter Course Code: ";
        cin >> courseCode;

        cout << "Enter Grade (A, B, C, D, F): ";
        char gradeInput;
do {
    cout << "Enter Grade (A, B, C, D, F): ";
    cin >> gradeInput;
} while (gradeInput != 'A' && gradeInput != 'B' && gradeInput != 'C' && gradeInput != 'D' && gradeInput != 'F');

GradeValue grade;
switch (gradeInput) {
    case 'A': grade = GradeValue::A; break;
    case 'B': grade = GradeValue::B; break;
    case 'C': grade = GradeValue::C; break;
    case 'D': grade = GradeValue::D; break;
    case 'F': grade = GradeValue::F; break;
    default: grade = GradeValue::F;
}

        people.enrollStudentInCourse(studentIndex, courseCode, grade);
    }

    static void handleUnenrollStudentFromCourse(Person& people) {
        int studentIndex, courseCode;
        cout << "Enter Student Index: ";
        cin >> studentIndex;

        cout << "Enter Course Code: ";
        cin >> courseCode;

        people.unenrollStudentFromCourse(studentIndex, courseCode);
    }

   static void handleAllocateCourseToTeacher(Person& people) {
        int teacherIndex, courseCode;

        cout << "Enter Teacher Index: ";
        cin >> teacherIndex;

        cout << "Enter Course Code: ";
        cin >> courseCode;
        if (teacherIndex < 0 || teacherIndex >= people.teacherCount) {
            cout << "Invalid teacher index." << endl;
            return;
        }

        int courseIndex = people.findCourseIndex(courseCode);
        if (courseIndex == -1) {
            cout << "Course not found." << endl;
            return;
        }

        for (int i = 0; i < people.enrollmentCount; ++i) {
            if (people.enrollments[i].courseCode == courseCode) {
                cout << "Course is already allocated to a teacher." << endl;
                return;
            }
        }
        people.enrollments[people.enrollmentCount].studentIndex = teacherIndex;
        people.enrollments[people.enrollmentCount].courseCode = courseCode;
        people.enrollments[people.enrollmentCount].grade = GradeValue::F;
        ++people.enrollmentCount;

        cout << "Course allocated to teacher successfully." << endl;
    }

    static void handleDeallocateCourseFromTeacher(Person& people) {
        int teacherIndex, courseCode;

        cout << "Enter Teacher Index: ";
        cin >> teacherIndex;

        cout << "Enter Course Code: ";
        cin >> courseCode;

        if (teacherIndex < 0 || teacherIndex >= people.teacherCount) {
            cout << "Invalid teacher index." << endl;
            return;
        }

        int courseIndex = people.findCourseIndex(courseCode);
        if (courseIndex == -1) {
            cout << "Course not found." << endl;
            return;
        }
        int enrollmentIndex = -1;
        for (int i = 0; i < people.enrollmentCount; ++i) {
            if (people.enrollments[i].studentIndex == teacherIndex && people.enrollments[i].courseCode == courseCode) {
                enrollmentIndex = i;
                break;
            }
        }

        if (enrollmentIndex != -1) {
            for (int i = enrollmentIndex; i < people.enrollmentCount - 1; ++i) {
                people.enrollments[i] = people.enrollments[i + 1];
            }
            --people.enrollmentCount;

            cout << "Course deallocated from teacher successfully." << endl;
        } else {
            cout << "Course is not allocated to the specified teacher." << endl;
        }
    }

    static void getInfoFromUser(Info& info) {
        cout << "Name: ";
        cin.ignore();
        getline(cin, info.name);

        cout << "ID: ";
        cin >> info.ID;

        cout << "Address: ";
        cin.ignore();
        getline(cin, info.address);

        cout << "Email: ";
        cin >> info.email;

        cout << "Phone: ";
        cin >> info.phone;
    }

    static void getCourseInfoFromUser(Course& course) {
        cout << "Course Code: ";
        cin >> course.course_code;

        cout << "Course Name: ";
        cin.ignore();
        getline(cin, course.name);

        cout << "Department (0: Computer_Science, 1: Mechanical, 2: Electrical, 3: Civil, 4: Chemical, 5: Materials): ";
        int department;
        cin >> department;
        course.department = static_cast<Department>(department);
    }
};

class TeacherUser {
public:
    static void handleTeacherMenu(Person& people,Info * inf, int count,TeacherUser& teach) {
        while (true) {
            cout << "\nTeacher Menu:" << endl;
            cout << "1. Display Personal Details\n2. View Allocated Courses\n";
            cout << "3. View Enrolled Students in Course\n4. Assign Marks and Grades\n";
            cout << "5. View Top Students in Class\n0. Exit\n";

            int choice;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1: handleDisplayPersonalDetails(people,inf,count); break;
                case 2: handleViewAllocatedCourses(people); break;
                case 3: handleViewEnrolledStudentsInCourse(people); break;
                case 4: handleAssignMarksAndGrades(teach,people); break;
                case 5: handleViewTopStudentsInClass(people); break;
                case 0: return;
                default: cout << "Invalid choice. Please try again." << endl;
            }
        }
    }

    static void handleDisplayPersonalDetails(Person& people,Info* personArray, int count) {
        int teacherIndex;
        cout << "Enter your index: ";
        cin >> teacherIndex;
        people.displayPersonDetails(personArray, count);
    }

    static void handleViewAllocatedCourses(Person& people) {
        int teacherIndex;
        cout << "Enter your index: ";
        cin >> teacherIndex;
        people.displayEnrolledCourses(teacherIndex);
    }

    static void handleViewEnrolledStudentsInCourse(Person& people) {
        int courseCode;
        cout << "Enter Course Code: ";
        cin >> courseCode;
        people.displayAllStudents();
    }

    static void handleAssignMarksAndGrades(TeacherUser& teach,Person& people) {
        int studentIndex, courseCode;
        GradeValue grade;

        cout << "Enter Student Index: ";
        cin >> studentIndex;

        cout << "Enter Course Code: ";
        cin >> courseCode;

        cout << "Enter Grade (A, B, C, D, F): ";
        char gradeInput;
        cin >> gradeInput;

        switch (gradeInput) {
            case 'A': grade = GradeValue::A; break;
            case 'B': grade = GradeValue::B; break;
            case 'C': grade = GradeValue::C; break;
            case 'D': grade = GradeValue::D; break;
            case 'F': grade = GradeValue::F; break;
            default: grade = GradeValue::F;
        }
    }

    static void handleViewTopStudentsInClass(Person& people) {
        int courseCode;
        GradeValue grade;
        int studentIndex;
        cout << "Enter Course Code: ";
        cin >> courseCode;
        people.enrollStudentInCourse(studentIndex,courseCode, grade);
    }
};

class StudentUser {
public:
    static void handleStudentMenu(Person& people) {
        while (true) {
            cout << "\nStudent Menu:" << endl;
            cout << "1. Display Personal Details\n2. Enroll in Available Courses\n";
            cout << "3. View Final Grades\n4. View List of Teachers\n";
            cout << "5. View Enrolled Courses\n0. Exit\n";

            int choice;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1: handleDisplayPersonalDetails(people); break;
                case 2: handleEnrollInCourses(people); break;
                case 3: handleViewFinalGrades(people); break;
                case 4: handleViewListOfTeachers(people); break;
                case 5: handleViewEnrolledCourses(people); break;
                case 0: return;
                default: cout << "Invalid choice. Please try again." << endl;
            }
        }
    }

    static void handleDisplayPersonalDetails(Person& people) {
        int studentIndex;
        Info* personArray;
        int count;
        cout << "Enter your index: ";
        cin >> studentIndex;
        people.displayPersonDetails(personArray, count);
    }

    static void handleEnrollInCourses(Person& people) {
        int studentIndex;
        int courseCode;
         GradeValue grade;
        cout << "Enter your index: ";
        cin >> studentIndex;
        people.enrollStudentInCourse(studentIndex, courseCode, grade);
    }

    static void handleViewFinalGrades(Person& people) {
        int studentIndex;
        cout << "Enter your index: ";
        cin >> studentIndex;
        people.displayEnrolledCourses(studentIndex);
    }

    static void handleViewListOfTeachers(Person& people) {
        people.displayAllTeachers();
    }

    static void handleViewEnrolledCourses(Person& people) {
        int studentIndex;
        cout << "Enter your index: ";
        cin >> studentIndex;
        people.displayEnrolledCourses(studentIndex);
    }
};

int main() {
    Person people;
    AdminUser admin;
    StudentUser student;
    TeacherUser teacher;
    Info * inf;
     int count;

    cout << "Welcome to the University Management System!" << endl;

    while (true) {
        cout << "\nSelect User Type:" << endl;
        cout << "1. Admin\n2. Teacher\n3. Student\n0. Exit\n";

        int userType;
        cout << "Enter your choice: ";
        cin >> userType;

        switch (userType) {
            case 1: admin.handleAdminMenu(people); break;
            case 2: teacher.handleTeacherMenu(people,inf,count,teacher); break;
            case 3: student.handleStudentMenu(people); break;
            case 0:
                cout << "Exiting University Management System. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}
