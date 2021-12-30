#include <iostream>
#include <cmath>
#include <string>
#include <iostream>
#include <boost/algorithm/string.hpp>


/*
6. Write a C++ program to remove the character in a given position of a given string. 
The given position will be in the range 0..string length -1 inclusive. Go to the editor
Sample Input:
"Python", 1
"Python", 0
"Python", 4
Sample Output:
Pthon
ython
Pythn
*/
void process(std::string s, int index) {
	/*std::string result = "";
	for (int i = 0; i < s.length(); i++)
	{
		if (i != index) {
			result += s[i];
		}
	}
	std::cout << result << std::endl;*/

	std::cout << s.erase(index, 1) << std::endl;
}

int main()
{
	process("Python", 1);
	process("Python", 0);
	process("Python", 4);
	return 0;
}
