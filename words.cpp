#include <iostream>
#include "words.h"

using namespace std;

Words::Words (string words)
{
    m_words = words;
}

void Words::add_count (int count)
{
    m_count++;
}

void Words::add_line (int line)
{
    m_line.push_back(line);
}

void print()
{

}

