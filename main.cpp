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
