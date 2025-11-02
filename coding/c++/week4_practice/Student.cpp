//
// Created by Zeynep Akhan on 22.10.2025.
//

#include "Student.h"
#include "Course.h"
#include "Assignment.h"

Student::Student(string id) {
    this->id=id;
}
string Student::getId() {
    return this->id;
}
void Student::enrollCourse(Course* course) {
    this->enrolledCourses.push_back(course);
    course->addStudent(this);
}
void Student::submitAssignment(Assignment* assignment, const string &fileName) {
    if (assignment !=nullptr) {
        string student_name= string("Student")+ getId();
        assignment->addSubmission(student_name,fileName);
        cout << "Assignment submitted by " << student_name << " with file: " << fileName << endl;
    }else {
        cout << "Error: Assignment is null. Cannot submit." << endl;
    }
}
void Student::printAssignment(Course *course) {
    if (course!=nullptr) {
        course->printAssignments();
    }
}

