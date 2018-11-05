#include <iostream>

int main(void) {
	int peopleCount = 0, max = 0;
	for (int i(0); i < 4; ++i) {
		int takeOffCount, rideCount;
		std::cin >> takeOffCount >> rideCount;

		peopleCount = peopleCount - takeOffCount + rideCount;
		max = max < peopleCount ? peopleCount : max;
	}

	std::cout << max;

	return 0;
}