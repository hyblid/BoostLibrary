#include <iostream>

using namespace std;

void reset_stream()
{
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
    }
}

