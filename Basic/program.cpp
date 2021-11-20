/*
 * File: program.cpp
 * -----------------
 * This file is a stub implementation of the program.h interface
 * in which none of the methods do anything beyond returning a
 * value of the correct type.  Your job is to fill in the bodies
 * of each of these methods with an implementation that satisfies
 * the performance guarantees specified in the assignment.
 */

#include <string>
#include "program.h"
#include "statement.h"

using namespace std;

Program::Program() {
    // Replace this stub with your own code
}

Program::~Program() {
    // Replace this stub with your own code
}

void Program::clear() {
    // Replace this stub with your own code
    for (it=line_information.begin();it!=line_information.end();it++){
        line_information.erase(it);
    }
}

void Program::addSourceLine(int lineNumber, string line) {
    // Replace this stub with your own code
    Information Infor;
    Infor.line=line;
    line_information[lineNumber]=Infor;
}

void Program::removeSourceLine(int lineNumber) {
    // Replace this stub with your own code
    line_information.erase(lineNumber);
}

string Program::getSourceLine(int lineNumber) {
    return line_information[lineNumber].line;    // Replace this stub with your own code
}

void Program::setParsedStatement(int lineNumber, Statement *stmt) {
    // Replace this stub with your own code
}

Statement *Program::getParsedStatement(int lineNumber) {
    return NULL;  // Replace this stub with your own code
}

int Program::getFirstLineNumber() {
    return (line_information.begin())->first;     // Replace this stub with your own code
}

int Program::getNextLineNumber(int lineNumber) {
    return (line_information.lower_bound(lineNumber))->first;     // Replace this stub with your own code
}
void Program::list_line(){
    for (it=line_information.begin();it!=line_information.end();it++){
        cout<<it->second.line<<"\n";
    }
}