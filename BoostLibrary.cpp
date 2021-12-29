#include <iostream>
#include <boost/array.hpp>
#include <cmath>


/*
4. Write a C++ program to check a given integer 
and return true if it is within 10 of 100 or 200. Go to the editor
Sample Input:
103
90
89
Sample Output:
1
1
0
*/
bool cal(int n) {
	//this mean 90<= a and 110>=0
	return abs(100 - n) <= 10 || abs(200 - n) <= 10;
	//return (abs(100 - n) || abs(200 - n)) <= 10;
}

int main()
{
	std::cout << cal(103) << std::endl;
	std::cout << cal(90) << std::endl;
	std::cout << cal(89) << std::endl;
}
