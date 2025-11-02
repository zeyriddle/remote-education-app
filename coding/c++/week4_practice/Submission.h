//
// Created by Zeynep Akhan on 22.10.2025.
//

#ifndef SUBMISSION_H
#define SUBMISSION_H
#include <string>
#include <iostream>
using namespace std;



class Submission {

private:
    string owner, attachment;

public:
    Submission(const string &owner, const string &attachment);
    string getOwner();
    string getAttachment();
};



#endif //SUBMISSION_H
