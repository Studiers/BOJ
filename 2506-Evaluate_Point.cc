#include <iostream>

int N;

int main() {
	std::cin >> N;

	int sum = 0, point = 0;
	char c;
	for (int i(0); i < N; ++i) {
		std::getchar();
		c = std::getchar();
		if (c == '1') {
			sum += (++point);
		}
		else {
			point = 0;
		}
	}

	std::cout << sum;
	return 0;
}