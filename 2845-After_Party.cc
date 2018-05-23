#include <iostream>

int main(void) {
	int L, P;
	std::cin >> L >> P;

	int MAX_PEOPLE = L * P;

	int peoples[5];
	for (int i(0); i < 5; ++i) {
		std::cin >> peoples[i];
		std::cout << peoples[i] - MAX_PEOPLE << ' ';
	}

	return 0;
}