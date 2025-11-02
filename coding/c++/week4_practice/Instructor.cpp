#include "Instructor.h"
#include "Assignment.h"
#include "Course.h"

using namespace std;
    Instructor::Instructor(string name, string surname, string academicTitle) {
        this->name = name;
        this->surname = surname;
        this->academicTitle = academicTitle;
    }
    string Instructor::getName() {
        return name;
    }
    string Instructor::getSurname() {
        return surname;
    }
    string Instructor::getAcademicTitle() {
        return academicTitle;
    }
    string Instructor::getEmail() {
        return name + "." + surname + "@yasar.edu.tr";
    }
    string Instructor::getFullName() {
        return academicTitle + " " + name + " " + surname;
    }
    void Instructor::createCourse(Course *course) {
        instructorCourses.push_back(course);
    }
    void Instructor::createAssignment(Course *course, const string &title, const string &instructions) {
        if (course != nullptr) {
            course->addAssignment(title, instructions);
            cout << "Assignment '" << title << "' created for course " << course->getName() << endl;
        } else {
            cout << "Error: Course is null. Cannot create assignment.\n";
        }
    }
    void Instructor::printStudentList(Course *course) {
        if (course!=nullptr) {
            cout << "Students in course " << course->getName() << ":\n";
            course->printStudentList();
        }
    }
    void Instructor::printAssignments(Course *course) {
        if (course!=nullptr) {
            course->printAssignments();
        }
    }
    void Instructor::viewSubmissions(Assignment *submission) {
        if (submission!=nullptr) {
            submission->printSubmission();
        }
    }


