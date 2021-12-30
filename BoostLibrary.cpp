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
8. Write a C++ program to create a new string which is 4 copies of the 2 front characters of a given string. 
If the given string length is less than 2 return the original string. Go to the editor
Sample Input:
"C Sharp"
"JS"
"a"
Sample Output:
C C C C
JSJSJSJS
a
*/
std::string process(std::string s) {
	
	if (s.length() < 2) {
		return s;
	}
	//else {
	//	std::string result;
	//	for (int i = 0; i < 4; i++)
	//	{
	//		result += s.substr(0, 2);
	//	}
	//	return result;
	//}
	std::ostringstream repeated;
	std::fill_n(std::ostream_iterator<std::string>(repeated), 4, s.substr(0, 2));
	return repeated.str();
}

int main()
{
	std::cout << process("C sharp") << std::endl;
	std::cout << process("JS") << std::endl;
	std::cout << process("a") << std::endl;
	return 0;
}
