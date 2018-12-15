#ifndef WORDS_H
#define WORDS_H
#include <vector>
#include <string>

using namespace std;

class Words
{

public:
    Words (string words);
    void add_line (int line);
    void add_count (int count);
    void print() const;

private:
    int m_count;
    string m_words;
    vector<int> m_line;

};
#endif
