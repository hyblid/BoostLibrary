#include <iostream>
#include <boost/align/align.hpp>


/*
Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30. Go to the editor
Sample Input :
30, 0
25, 5
20, 30
20, 25
*/
bool cal(int a, int b) {
    if ((a == 30 || b == 30) || (a + b == 30)) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    std::cout << cal(30, 0) << std::endl;
    std::cout << cal(25, 5) << std::endl;
    std::cout << cal(20, 30) << std::endl;
    std::cout << cal(20, 25) << std::endl;
}
