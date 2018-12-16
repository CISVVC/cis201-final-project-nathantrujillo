/*
File: Main.cpp
Description: a concordance generator program.  The concordance will be a list of all the words found in a text file with a count of the number of times the word occurred and a comma delimited list of the line numbers of where  the word occurred.  For each line of text, all punctuation must be removed and all letters in the string forced to lowercase. 
Author: Nathan Trujillo
Email: trujillon@student.vvc.edu
Date Created: 12/12/18
*/
#include <iostream>
#include <string>
#include <vector>
#include "concordance.h"
#include "words.h"

using namespace std;

int main()
{
    Concordance text("alice.txt");
    text.parse();
    return 0;
}
