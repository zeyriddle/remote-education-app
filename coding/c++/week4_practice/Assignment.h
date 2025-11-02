//
// Created by Zeynep Akhan on 22.10.2025.
//

#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H
#include <string>
#include <iostream>
using namespace std;

class Submission;

class Assignment {

    private:
    string title;
    string instructions;
    vector<Submission*> submissions;
public:
    void printSubmission();
    void addSubmission(const string &owner, const string &attachment);
    string getTitle();
    string getInstructions();
    Assignment(const string &title, const string &instructions);
    ~Assignment();

};



#endif //ASSIGNMENT_H
