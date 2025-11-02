//
// Created by Zeynep Akhan on 22.10.2025.
//
#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Assignment;
class Student;

class Course {
private:
    string name;
    vector<Student*> enrolledStudents;
    vector<Assignment*> assignments;
public:
    Course(string name);
    ~Course();

    string getName();

    void addAssignment(const std::string & title, const std::string & instructions);
    void addStudent(Student *student);
    void printAssignments();
    void printStudentList();
    vector<Assignment*>& getAssignments();
};



#endif //COURSE_H
