#include <iostream>
#include <cmath>
#include <string>
#include <iostream>
#include <boost/assert.hpp>
#include <sstream>
#include <algorithm>
#include <string>
#include <iterator>


/*
11. Write a C++ program to create a new string taking the first 3 characters of a given string
and return the string with the 3 characters added at both the front and back.
If the given string length is less than 3, use whatever characters are there. Go to the editor
Sample Input:
"Python"
"JS"
"Code"
Sample Output:
PytPythonPyt
JSJSJS
CodCodeCod
*/
std::string process(std::string s) {
	if (s.length() < 3) {
		return s + s + s;
	}
	else {
		return s.substr(0, 3) + s + s.substr(0, 3);
	}
}

int main()
{
	std::cout << process("Python") << std::endl;
	std::cout << process("JS") << std::endl;
	std::cout << process("Code") << std::endl;
	return 0;
}
