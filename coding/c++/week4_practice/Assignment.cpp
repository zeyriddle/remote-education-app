
#include "Assignment.h"
#include "Submission.h"

Assignment::Assignment(const string &title, const string &instructions) {
    this->title = title;
    this->instructions = instructions;
}
Assignment::~Assignment() {
    for (Submission* s : submissions) {
        delete s;
    }
    submissions.clear();
}

string Assignment::getTitle() {
    return title;
}
string Assignment::getInstructions() {
    return instructions;
}
void Assignment::printSubmission() {
    if (submissions.empty()) {
        cout << "No submissions yet." << endl;
        return;
    }

    for (int i = 0; i < submissions.size(); i++) {
        cout << "Owner: " << submissions[i]->getOwner() <<" File: " << submissions[i]->getAttachment()<<endl;
    }
}
void Assignment::addSubmission(const string &owner, const string &attachment) {
    Submission *newSubmission= new Submission(owner,attachment);
    submissions.push_back(newSubmission);
}

