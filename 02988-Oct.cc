#include <iostream>
#include <string>

inline std::string padding(const std::string& str) {
	switch (str.length() % 3) {
	case 1:
		return "00"+str;
	case 2:
		return "0"+str;
	default:
		return str;
	}
}
int main(void) {
	std::string input;

	std::cin >> input;

	input = padding(input);

	for (int i(0); i < input.length()/3; ++i) {
		std::cout << (((input[i*3]-'0') << 2) + ((input[i*3+1]-'0') << 1) + (input[i*3+2]-'0'));
	}

	return 0;
}
