#include <iostream>
#include <algorithm>

int arr[1000];
int max = 0, base = 0, N;

int main(void) {
	std::cin >> N;

	std::cin >> arr[0];
	for (int i(1); i < N; ++i) {
		std::cin >> arr[i];

		if (arr[i] <= arr[i - 1]) {
			base = i;
		}
		
		max = std::max(max, arr[i] - arr[base]);
	}

	std::cout << max;

	return 0;
}