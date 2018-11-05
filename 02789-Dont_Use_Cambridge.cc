#include <iostream>
#include <string>

int main(void) {
	std::string input, res = "";
	
	std::cin >> input;

	for (const char& c : input) {
		switch (c) {
		case 'C':
		case 'A':
		case 'M':
		case 'B':
		case 'R':
		case 'I':
		case 'D':
		case 'G':
		case 'E':
			break;
		default:
			res += c;
		}
	}

	std::cout << res;

	return 0;
}