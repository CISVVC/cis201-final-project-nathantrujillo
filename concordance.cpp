#include <iostream>
#include "concordance.h"
#include "words.h"

using namespace std;

Concordance::Concordance (string filename)
{
    line = 1;
    m_filename = filename;
}

void Concordance::parse()
{
    ifstream file (m_filename.c_str());
    while (!file.eof())
    {
        string words = next_word(file);
        cout << words << " : On Line " << line << endl;
    }
}

bool Concordance::is_spaces (char c)
{
    return (c == ' ' || c == '\n' || c == '\t');
}

bool Concordance::is_punctuation (char c)
{
    return (c == ',' || c == '.' || c == '?' || c == '(' || c == ')' || c == '!' || c == ';' || c == ':' || c == '/');
    
}

void Concordance::ignore_spaces (ifstream& input)
{
    while(true)
    {
        char c;
        input.get (c);
        if (input.eof())
            break;
        if (!is_spaces (c) && !is_punctuation (c))
        {
            input.putback (c);
            break;
        }
    }
}

string Concordance::next_word (ifstream& input)
{
    string words;
    while(true)
    {
        char c;
        input.get (c);
        if (input.eof())
            break;
        if (!is_spaces (c) && !is_punctuation (c))
        {
            words += tolower (c);
        }

        else
        {
            if (c == '\n') {
                line += 1;
            }
            ignore_spaces (input);
            break;
        }
    }

    return words;
}

int Concordance::find_words (string words)
{

}

void Concordance::print()
{

}
