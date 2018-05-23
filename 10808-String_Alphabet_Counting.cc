#include <iostream>
#include <string>

int main(void) {
	std::string s;

	std::cin >> s;

	int count_alpha[26] = {0};

	for (const char& c : s) {
		count_alpha[c - 'a'] += 1;
	}

	for (const int& i : count_alpha) {
		std::cout << i << ' ';
	}

	return 0;
}