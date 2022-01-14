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
#include <boost/algorithm/string/find.hpp>
#include <cstdlib>

using namespace std;
//65-90 & 97-122
/*
15. Write a C++ program to convert a given non-negative integer to English words. Go to the editor
Example:
Sample Input: 12
Sample Output: Twelve
Sample Input: 29
Sample Output: Twenty Nine
*/
static string belowTwenty[] = { "Zero","One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
				 "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen",
				 "Seventeen", "Eighteen", "Nineteen" };
//empty for zero and hundred
static string belowHundred[] = { "","", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
static string overThousand[] = { "Hundred", "Thousand", "Million", "Billion" };

string number_to_words_below_hundred(long long int num) {
	string result;
	//base for recursive
	if (num == 0) {
		return result;
	}
	else if (num < 20) {
		return belowTwenty[num];
	}
	else if (num < 100) {
		result = belowHundred[num / 10];
		if (num % 10 > 0) {
			result += " " + belowTwenty[num % 10];
		}
	}
	else {
		result = belowTwenty[num / 100] + " " + overThousand[0];
		if (num % 100 > 0) {
			//recursive
			result += " " + number_to_words_below_hundred(num % 100);
		}
	}
	return result;
}

string number_to_words(int num) {
	vector<string> ret;
	if (num == 0) return belowTwenty[num];
	//for under one hundred
	for (;num > 0; num = num / 1000) {
		ret.push_back(number_to_words_below_hundred(num % 1000));
	}
	//for over one hundred
	string result = ret[0];
	for (int i = 1; i < ret.size(); i++) {
		if (ret[i].size() > 0) {
			if (result.size() > 0) {
				result = ret[i] + " " + overThousand[i] + " " + result;
			}
			else {
				result = ret[i] + " " + overThousand[i];
			}
		}

	}
	return result;
}

int main() {
	int num = 1678;
	cout << num << " ->  " << number_to_words(1678) << endl;
	return 0;
}
