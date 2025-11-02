#include "Course.h"
#include "Assignment.h"
#include "Student.h"


    Course::Course(string name) {
        this->name=name;
    }
Course::~Course() {
        for (Assignment* a : assignments) {
            delete a;
        }
        assignments.clear();
    }

string Course::getName() {
    return name;
}
void Course::addAssignment(const std::string & title, const std::string & instructions) {
        Assignment* newAssignment = new Assignment(title, instructions);
        assignments.push_back(newAssignment);
    }
void Course::addStudent(Student *student) {
        enrolledStudents.push_back(student);
    }
void Course::printAssignments() {
        for (int i = 0; i < assignments.size(); i++) {
            cout << i + 1 << ". " << assignments[i]->getTitle() << endl;
        }
    }
void Course::printStudentList() {
        if (enrolledStudents.empty()) {
            cout << "No students enrolled." << endl;
            return;
        }
        for (Student* s : enrolledStudents) {
            cout << "- " << s->getId() << endl;
        }
    }
vector<Assignment*>& Course::getAssignments() {
        return assignments;
    }

