/*
 * File: statement.cpp
 * -------------------
 * This file implements the constructor and destructor for
 * the Statement class itself.  Your implementation must do
 * the same for the subclasses you define for each of the
 * BASIC statements.
 */

#include <string>
#include "statement.h"

using namespace std;

/* Implementation of the Statement class */

Statement::Statement() {
    /* Empty */
}

Statement::~Statement() {
    /* Empty */
}

/*NumberedState::NumberedState(int token) {
    this->num = token;
}

void NumberedState::execute(EvalState &state) {

}*/

WordState::WordState(string token,int num,Program &program,string line) {
    if (num)
        program.addSourceLine(num,line);
    this->op = token;
    this->infor=line;
}

void WordState::execute(EvalState &state,Program &program) {
    if (op == "QUIT") {
        exit(0);
    }
    if (op == "HELP") {

    }
    if (op == "CLEAR") {
        program.clear();
    }
    if (op=="RUN"){

    }
    if (op=="LIST"){
        program.list_line();
    }
    if (op=="REM"){
        cout<<infor<<"\n";
    }
    if (op=="LET"){

    }
    if (op=="PRINT"){

    }
    if (op=="INPUT"){

    }
    if (op=="END"){

    }
    if (op=="GOTO"){

    }
    if (op=="IF"){

    }
}