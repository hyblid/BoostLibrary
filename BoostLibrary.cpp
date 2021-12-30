#include <iostream>
#include <cmath>
#include <string>
#include <iostream>
#include <boost/algorithm/string.hpp>


/*
5. Write a C++ program to create a new string where 'if' is added to the front of a given string. 
If the string already begins with 'if', return the string unchanged. Go to the editor
Sample Input:
"if else"
"else"
Sample Output:
if else
if else
*/
std::string cal(std::string n) {
	//string direct initialization
	std::string result("if") ;
	if (boost::contains(n, result)) {
		return n;
	}
	else {
		return result + " " + n; 
	}
}

int main()
{
	std::cout << cal("if else") << std::endl;
	std::cout << cal("else") << std::endl;
}
