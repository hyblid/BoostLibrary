#include <iostream>
#include <cmath>
#include <string>
#include <iostream>
#include <boost/algorithm/string.hpp>


/*
7. Write a C++ program to exchange the first 
and last characters in a given string and return the new string. Go to the editor
Sample Input:
"abcd"
"a"
"xy"
Sample output:
dbca
a
yx
*/
std::string process(std::string s) {
    char temp;
	std::string result = "";
	if (s.length() == 1) {
		return s;
	}
	else {
		temp = s[0];
		s[0] = s[s.length()-1];
		s[s.length()-1] = temp;
		//std::swap(s[0], s[s.length() - 1]);
		return s;
	}

}

int main()
{
	std::cout << process("abcd") << std::endl;
	std::cout << process("a") << std::endl;
	std::cout << process("xy") << std::endl;
	return 0;
}
