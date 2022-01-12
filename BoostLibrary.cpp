#include <iostream>
#include <boost/regex.hpp>
#include <sstream>
#include <algorithm>
#include <string>
#include <iterator>
#include <vector>
#include <regex>
#include <cmath>
#include <numeric>
#include <cassert>
#include <array>
using namespace std;

/*
2. Write a C++ program to change every letter in a given string with the letter following it in the alphabet
(ie. a becomes b, p becomes q, z becomes a). Go to the editor
Example:
Sample Input: w3resource
Sample Output: x3sftpvsdf
*/

void process(const string s) {
	string v = "";
	for (int i = 0; i < s.length(); i++)
	{
		if (std::isdigit(s[i])) {
			v += s[i];
		}
		else if ((65 <= int(s[i]) && int(s[i] >= 90)) || (97 <= int(s[i]) && int(s[i] >= 122))) {
			//A-Z 65-90
			//a-z 97-122
			v += s[i] + 1;
		}
	}

	for (auto& i : v)
	{
		cout << i;
	}
}

void processC(const char* s, size_t size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << s[i];
	}
}

int main() {
	char c[]{ 'W','3','r','e','s','o','u','r','c','e' };
	size_t csize = sizeof(c) / sizeof(c[0]);
	processC(c, csize);
	process("W3resource");
	return 0;
}



