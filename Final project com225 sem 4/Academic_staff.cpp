//acamdic staff cpp file
#include "Academic_staff.h"
#include"University.h"
#include<iostream>
#include<string>
#include<iomanip>
#include <fstream>
#include <sstream>
using namespace std;
void Academic_staff::setStaffId(int id) {//takes the staff id from the user
	cout << "Enter the staff id: ";
	cin >> id;
	StaffId = id;

}
int Academic_staff::getStaffId() {
	return StaffId;
}
void Academic_staff::teachcource() {
	cout << "Enter the course you want to teach: ";//takes the course the staff member wants to teach
	cin >> courses_Tought;
}

void Academic_staff::setOfficeHours() {
	cout << "Enter the office hours: ";//takes the office hours of the staff member
	cin >> office_hours;
}
string Academic_staff::getOfficehours() {
	return office_hours;
}

void Academic_staff::viewStudentsList()//view the list of students
{
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
void Academic_staff::GradeAssignment() {
    // Open the file containing student data
    ifstream file("ReadWriteFiles/StudentsGradesAssignments.txt");
    if (!file.is_open()) {
        cout << "Failed to open file." << endl;
        return;
    }

    // Read student data and grade assignments
    string line;
    while (getline(file, line)) {
        // Use stringstream to parse each line
        stringstream ss(line);
        string item;

        // Read student ID
        getline(ss, item, ',');
        int studentId = stoi(item);

        // Read student name
        getline(ss, item, ',');
        string studentName = item;

        // Read assignment grade
        getline(ss, item, ',');
        double assignmentGrade = stod(item);

        // Grade the assignment for the student
        cout << "Grading assignment for student ID: " << studentId << ", Name: " << studentName << endl;
        cout << "Assignment grade: " << assignmentGrade << endl;
        // Implement grading logic here
    }

    // Close the file
    file.close();
}
