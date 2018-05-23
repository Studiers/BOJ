#include <iostream>
#include <string>
#include <sstream>

int main(void) {
	std::string input;
	std::string res = "";

	std::cin >> input;

	std::stringstream sstream(input);
	std::string part;

	while (std::getline(sstream, part, '-'))
		res += part[0];

	std::cout << res;

	return 0;
}