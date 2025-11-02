//
// Created by Zeynep Akhan on 22.10.2025.
//

#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Course;
class Assignment;

class Instructor {

private:
    string name;
    string surname;
    string academicTitle;
    vector<Course*> instructorCourses;
public:
    Instructor(string name, string surname, string academicTitle);

    string getName();
    string getSurname();
    string getAcademicTitle();

    string getEmail();
    string getFullName();

    void createCourse(Course *course);
    void createAssignment(Course *course, const string &title, const string &instructions);
    void printStudentList(Course *course);
    void printAssignments(Course *course);
    void viewSubmissions(Assignment *assignment);

};



#endif //INSTRUCTOR_H
