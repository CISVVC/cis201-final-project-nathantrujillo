#ifndef CONCORDANCE_H
#define CONCORDANCE_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class Concordance
{
public:
    Concordance(string filename);
    void parse();
    string next_word (ifstream &input);
    bool is_spaces (char c);
    bool is_punctuation (char c);
    void ignore_spaces (ifstream &input);
    int find_words (string words);
    void print();
    void add_words();

private:
   // vector<words> m_words_stats;
    string m_filename;
    int line;
};
#endif

