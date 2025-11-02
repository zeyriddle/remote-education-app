//
// Created by Zeynep Akhan on 22.10.2025.
//

#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>

using namespace std;

class Course;
class Assignment;

class Student {

private:
    string id;
    vector<Course*> enrolledCourses;
public:
    Student(string id);
    string getId();
    void enrollCourse(Course* course);
    void submitAssignment(Assignment* assignment,const string &fileName);
    void printAssignment(Course *course);
};



#endif //STUDENT_H
