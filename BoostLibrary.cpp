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
12. Write a C++ program to check if a given string starts with 'C#' or not. Go to the editor
Sample Input:
"C++ Sharp"
"C#"
"C++"
Sample Output:
1
1
0
*/
bool process(std::string s) {
	return boost::starts_with(s, "C#");
}

int main()
{
	std::cout << process("C# Sharp") << std::endl;
	std::cout << process("C#") << std::endl;
	std::cout << process("C++") << std::endl;
	return 0;
}
