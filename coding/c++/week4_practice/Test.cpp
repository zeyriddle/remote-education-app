#include <iostream>
#include "Assignment.h"
#include "Student.h"
#include "Course.h"
#include "Submission.h"
#include "Instructor.h"



int main() {
   Instructor *i1=new Instructor("Ali","Erbas","Dr. Ali Erbas");
    Instructor *i2=new Instructor("Zeynep","Kaya","Doc. Dr. Zeynep Kaya");
    Course *c1=new Course("Maths");
    Course *c2=new Course("Physics");
    i1->createCourse(c1);
    i2->createCourse(c2);
    i1->createAssignment(c1, "Fonksiyonlar odev", "Ornek soruları cozunuz.");
    i2->createAssignment(c2,"Newton Yasaları", "Ekteki soruları cozunuz.");
    cout<<endl;
    i1->printAssignments(c1);
    Student *s1=new Student("1");
    Student *s2=new Student("2");
    s1->enrollCourse(c1);
    s2->enrollCourse(c1);
    s2->enrollCourse(c2);

    cout << "\n--- Students in courses ---\n";
    i1->printStudentList(c1);
    i2->printStudentList(c2);

    s1->submitAssignment(c1->getAssignments()[0], "week1_s1.cpp");
    s2->submitAssignment(c1->getAssignments()[0], "week1_s2.cpp");
    s2->submitAssignment(c2->getAssignments()[0], "week1_s2_physics.cpp");

    cout << "\n--- Submissions for Maths ---\n";
    i1->viewSubmissions(c1->getAssignments()[0]);

    cout << "\n--- Submissions for Physics ---\n";
    i2->viewSubmissions(c2->getAssignments()[0]);




    delete i1;
    delete i2;
    delete c1;
    delete c2;
    delete s1;
    delete s2;
    return 0;
    }


