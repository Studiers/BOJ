#include <iostream>
#include <string>

std::string strings[100];

bool isSame(const std::string& first, const std::string& second) {
	for (int i(0); i < first.length() / 2 + 1; ++i) {
		if (first[i] != second[first.length() - i - 1]) {
			return false;
		}
	}
	return true;
}
int main(void) {
	int T;
	std::string input;

	std::cin >> T;

	for (int i(0); i < T; ++i)
		std::cin >> strings[i];

	for (int i(0); i < T - 1; ++i) {
		for (int j(i); j < T; ++j) {
			if (strings[i].length() == strings[j].length() && isSame(strings[i], strings[j])) {
				std::cout << strings[i].length() << ' ' << strings[i][strings[i].length() / 2];
				return 0;
			}
		}
	}
}