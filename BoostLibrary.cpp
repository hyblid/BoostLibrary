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
10. Write a C++ program to check if a given positive number is a multiple of 3 or a multiple of 7. Go to the editor
Sample Input
3
14
12
37
Sample Output:
1
1
1
0
*/
bool process(int s) {
	BOOST_ASSERT_MSG(s > 0, "should be positive");
	return (s % 3 == 0) || (s % 7 == 0);
}

int main()
{
	std::cout << process(3) << std::endl;
	std::cout << process(14) << std::endl;
	std::cout << process(27) << std::endl;
	std::cout << process(37) << std::endl;
	return 0;
}
