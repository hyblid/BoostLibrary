#include <iostream>
#include <cmath>
#include <string>
#include <iostream>
#include <boost/algorithm/string.hpp>
#include <sstream>
#include <algorithm>
#include <string>
#include <iterator>


/*
9. Write a C++ program to create a new string with the last char added at the front
and back of a given string of length 1 or more. Go to the editor
Sample Input:
"Red"
"Green"
"1"
Sample Output:
dRedd
nGreenn
111
*/
std::string process(std::string s) {
	auto lastLetter = s.end() - 1;
	return *lastLetter + s + *lastLetter;
}

int main()
{
	std::cout << process("Red") << std::endl;
	std::cout << process("Green") << std::endl;
	std::cout << process("1") << std::endl;
	return 0;
}
