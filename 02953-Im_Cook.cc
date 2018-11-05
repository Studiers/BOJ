#include <iostream>

int points[5], max;

int main(void) {
	for (int i(0); i < 5; ++i) {
		for (int j(0); j < 4; ++j) {
			int point;
			std::cin >> point;
			points[i] += point;
		}

		max = points[max] < points[i] ? i : max;
	}

	std::cout << max+1 << ' ' << points[max];

	return 0;
}