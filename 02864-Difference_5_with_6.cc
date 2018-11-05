#include <iostream>
#include <string>

void replace(std::string& origin, const char from, const char to) {
	for (char& c : origin)
		if (c == from)
			c = to;
}

int main(void) {
	std::string sLeft, sRight;

	std::cin >> sLeft >> sRight;

	// replace 5 to 6, 6 to 5
	// MAX case
	std::string maxLeft(sLeft), maxRight(sRight);
	
	replace(maxLeft, '5', '6');
	replace(maxRight, '5', '6');

	// MIN case
	std::string minLeft(sLeft), minRight(sRight);

	replace(minLeft, '6', '5');
	replace(minRight, '6', '5');

	std::cout << std::stoi(minLeft) + std::stoi(minRight) << ' ' << std::stoi(maxLeft) + std::stoi(maxRight);

	return 0;
}