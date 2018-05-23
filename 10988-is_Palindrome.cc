#include <iostream>
#include <algorithm>
#include <string>

int main(void) {
	std::string input;
	std::cin >> input;

	std::string reversed(input);

	std::reverse(reversed.begin(), reversed.end());

	std::cout << (input == reversed);

	return 0;
}