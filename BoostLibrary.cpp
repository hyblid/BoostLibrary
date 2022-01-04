#include <iostream>
#include <boost/regex.hpp>
#include <sstream>
#include <algorithm>
#include <string>
#include <iterator>
#include <vector>
#include <regex>
#include <boost/range/algorithm/count.hpp>


/*
41. Write a C++ program to check if a given number is within 2 of a multiple of 10. Go to the editor
Sample Input:
3
7
8
21
Sample Output:
0
0
1
1
*/

bool process(int a) {
	//10+2 =12 
	//10-2 =8

	return (a%10) <=2 || (a%10) >= 8 ? true : false;
}

int main() {
	std::cout << process(3) << std::endl;
	std::cout << process(7) << std::endl;
	std::cout << process(8) << std::endl;
	std::cout << process(21) << std::endl;
	return 0;
}

