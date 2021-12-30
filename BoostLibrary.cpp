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
15. Write a C++ program to check whether three given integer values are in the range 20..50 inclusive.
Return true if 1 or more of them are in the said range otherwise false. Go to the editor
Sample Input:
11, 20, 12
30, 30, 17
25, 35, 50
15, 12, 8
Sample Output:
1
1
1
0
*/
bool process(int a, int b, int c) {
	return (a >= 20 && a <= 50) || (b >= 20 && b <= 50) || (c >= 20 && c <= 50);
}

int main()
{
	std::cout << process(11, 20, 12) << std::endl;
	std::cout << process(30, 30, 17) << std::endl;
	std::cout << process(25, 35, 50) << std::endl;
	std::cout << process(15, 12, 8) << std::endl;
	return 0;
}
