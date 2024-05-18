



#pragma once
#ifndef Course_h
#define Course_h
#include <iostream>
#include <string>
using namespace std;

class Course {
public:
    // Member variables with default initialization
    int course_code = 0;
    string course_name = "";
    int course_hours = 0;
    string course_department = "";

    // Setter methods
    void setCourseCode(int code);
    void setCourseName(string name);
    void setCourseHours(int hours);
    void setCourseDepartment(string department);

    // Getter methods
    int getCourseCode();
    string getCourseName();
    int getCourseHours();
    string getCourseDepartment();

    // Other methods
    void updateCredits();
    void viewCourseDetails();
    void listOfStudentsEnrolled();
};

#endif  