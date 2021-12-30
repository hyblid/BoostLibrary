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
14. Write a C++ program to check two given integers whether either of them is in the range 100..200 inclusive. Go to the editor
Sample Input:
100, 199
250, 300
105, 190
Sample Output:
1
0
1
*/
bool process(int a, int b) {
	return (a > 100 && a < 200) || (b > 100 && b < 200);
}

int main()
{
	std::cout << process(100, 199) << std::endl;
	std::cout << process(250, 300) << std::endl;
	std::cout << process(105, 190) << std::endl;
	return 0;
}
