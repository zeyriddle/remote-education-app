//
// Created by Zeynep Akhan on 22.10.2025.
//

#include "Submission.h"

Submission::Submission(const string &owner, const string &attachment) {
    this->owner = owner;
    this->attachment = attachment;
}
string Submission::getOwner() {
    return owner;
}
string Submission::getAttachment() {
    return attachment;
}
