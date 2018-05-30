#include <iostream>

int main(void) {
	int X, cnt = 0;
	std::cin >> X;

	while (X) {
		cnt += X & 1;
		X = X >> 1;
	}

	std::cout << cnt;
	return 0;
}