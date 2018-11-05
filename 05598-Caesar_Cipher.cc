#include <iostream>
#include <string>

int main(void) {
	std::string input;
	std::cin >> input;

	for (char& c : input)
		c = (c -'A' + 23) % 26 + 'A';

	std::cout << input;

	return 0;
}