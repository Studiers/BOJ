#include <iostream>
#include <string>

int main(void) {
	int T;
	std::string left, right;

	std::cin >> T;
	for (int i(0); i < T; ++i) {
		std::cin >> left >> right;
		std::cout << "Distances:";

		for (int j(0); j < left.length(); ++j) {
			char bigger, smaller;

			if (left[j] > right[j])
				std::cout << ' ' << right[j] + 26 - left[j];
			else
				std::cout << ' ' << right[j] - left[j];
		}

		std::cout << '\n';
	}

	return 0;
}