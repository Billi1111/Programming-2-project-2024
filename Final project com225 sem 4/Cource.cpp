#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

class Course {
private:
    string course_name;
    int course_code;
    int course_hours;
    string course_department;

public:
    // Setter methods
    void setCourseName(string name) {
        course_name = name;
    }
    void setCourseCode(int code) {
        course_code = code;
    }
    void setCourseHours(int hours) {
        course_hours = hours;
    }
    void setCourseDepartment(string department) {
        course_department = department;
    }

    // Getter methods
    string getCourseName() {
        return course_name;
    }
    int getCourseCode() {
        return course_code;
    }
    int getCourseHours() {
        return course_hours;
    }
    string getCourseDepartment() {
        return course_department;
    }

    // Method to update course credit hours
    void updateCredits() {
        cout << "Enter the new credit hours for the course: ";
        cin >> course_hours;
    }

    // Method to view course details
    void viewCourseDetails() {
        cout << "Course Name: " << course_name << endl;
        cout << "Course Code: " << course_code << endl;
        cout << "Course Hours: " << course_hours << endl;
        cout << "Course Department: " << course_department << endl;
    }

    // Method to list students enrolled in the course
    void listOfStudentsEnrolled() {
        // Open the TXT file
        ifstream file("ReadWriteFiles/StudentsList.txt");
        if (!file.is_open()) {
            cout << "Failed to open file." << endl;
            return;
        }

        // Read the file line by line
        string line;
        while (getline(file, line)) {
            // Use stringstream to parse each line
            stringstream ss(line);
            string item;

            // Read the student ID
            getline(ss, item, ',');
            int studentID = stoi(item);

            // Read the student name
            getline(ss, item, ',');
            string studentName = item;

            // Output the student details
            cout << "Student ID: " << studentID << ", Name: " << studentName << endl;
        }

        // Close the file
        file.close();
    }
};


