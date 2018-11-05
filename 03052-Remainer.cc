#include <iostream>

int arr[42];

int main(void) {
	int N;
	for (int i(0); i < 10; ++i) {
		std::cin >> N;
		arr[N % 42] += 1;
	}

	int cnt = 0;
	for (const int& i : arr) {
		if (i != 0) {
			cnt += 1;
		}
	}

	std::cout << cnt;

	return 0;
}