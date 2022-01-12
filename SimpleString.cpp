#include <cstdio>
#include <cstring>
#include <stdexcept>
#include <utility>
#include <iostream>

using namespace std;

class SimpleString {

private:
	size_t max_size;
	size_t length;
	char* buffer;

public:
	//constructor
	SimpleString(size_t max_size) : max_size{ max_size }, length{} {
		if (max_size == 0) {
			throw runtime_error{ "Max size must be at least 1." };
		}
		buffer = new char[max_size];
		buffer[0] = 0;
		cout << "construcor" << endl;
	}

	//copy Constructor (L - Value reference & DEEP COPY)
	SimpleString(const SimpleString& other) : max_size{ other.max_size }, buffer{ new char[other.max_size] }, length{ other.length } {
		strncpy(buffer, other.buffer, max_size);
		cout << "copy construcor" << endl;
		// a = b
	}

	//copy assignment (L - Value reference)
	SimpleString& operator=(const SimpleString& other) {
		if (this == &other) return *this;
		const auto new_buffer = new char[other.max_size];
		delete[] buffer;
		buffer = new_buffer;
		length = other.length;
		max_size = other.max_size;
		strncpy(buffer, other.buffer, max_size);
		cout << "copy assignment" << endl;
		return *this;
	}

	//move constructor (R - Value refernce & SHALLOW COPY)
	SimpleString(SimpleString&& other) noexcept : max_size(other.max_size), buffer(other.buffer), length(other.length) {
		other.length = 0;
		other.buffer = nullptr;
		other.max_size = 0;
		cout << "move construcor" << endl;
	}


	//move assignment (R- Value reference)
	SimpleString& operator=(SimpleString&& other) noexcept {
		if (this == &other) return *this;
		delete[] buffer;
		buffer = other.buffer;
		length = other.length;
		max_size = other.max_size;
		other.buffer = nullptr;
		other.length = 0;
		other.max_size = 0;
		cout << "move assignment" << endl;
		return *this;
	}

	void print(const char* tag) const {
		printf("%s: %s", tag, buffer);
	}

	bool append_line(const char* x) {
		const auto x_len = strlen(x);
		if (x_len + length + 2 > max_size) return false;
		strncpy(buffer + length, x, max_size - length);
		length += x_len;
		buffer[length++] = '\n';
		buffer[length] = 0;
		return true;
	}

	~SimpleString() {
		delete[] buffer;
	}
};
