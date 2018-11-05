#include <iostream>
#include <algorithm>

typedef struct row {
	int index = 0, value = 0;

	row(int index, int value) {
		this->index = index;
		this->value = value;
	}

	row() {
		index = 0;
		value = 0;
	}

} row;

int main(void) {
	int value;
	row arr[8];

	for (int i(0); i < 8; ++i) {
		std::cin >> value;
		arr[i] = row(i, value);
	}

	// Sort
	for (int i(0); i < 8; ++i) {
		for (int j(i); j < 8; ++j) {
			if (arr[i].value < arr[j].value) {
				std::swap(arr[i], arr[j]);
			}
		}
	}

	int sum = 0;
	for (int i(0); i < 5; ++i) {
		sum += arr[i].value;
	}

	for (int i(0); i < 5; ++i) {
		for (int j(i); j < 5; ++j) {
			if (arr[i].index > arr[j].index) {
				std::swap(arr[i], arr[j]);
			}
		}
	}

	std::cout << sum << '\n';
	for (int i(0); i < 5; ++i) {
		std::cout << arr[i].index + 1 << ' ';
	}

	return 0;
}