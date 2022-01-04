#include <iostream>
#include <boost/regex.hpp>
#include <sstream>
#include <algorithm>
#include <string>
#include <iterator>
#include <vector>
#include <regex>
#include <boost/range/algorithm/count.hpp>
#include <math.h>

/*
53. Write a C++ program to compute the sum of the three integers. 
If one of the values is 13 then do not count it and its right towards the sum. Go to the editor
Sample Input:
4, 5, 7
7, 4, 12
10, 13, 12
13, 12, 18
Sample Output:
16
23
10
0
*/

int process(int a, int b, int c) {
	if (a == 13) {
		return 0;
	} else if (b == 13 ) {
		return a;
	} else if (c == 13) {
		return a + b;
	} else {
		return a + b + c;
	}
}

int main() {
	std::cout << process(4, 5, 7) << std::endl;
	std::cout << process(7, 4, 12) << std::endl;
	std::cout << process(10, 13, 12) << std::endl;
	std::cout << process(13, 12, 18) << std::endl;
	return 0;
}

