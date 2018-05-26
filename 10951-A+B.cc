#include <iostream>
#include <string>

int main(void) {
	std::string input;

	while (std::getline(std::cin, input), input != "") {
		std::cout << input[0] + input[2] - '0'*2 << '\n';
	}
	return 0;
}