#include <iostream>
/*
7
8 -3 2 -4 7 1 -3
*/
int main(void) {
	int N, *arr;

	std::cin >> N;
	arr = new int[N];

	int sum = 0; int max = -2147483647, tmp;

	for (int i(0); i < N; ++i) {
		std::cin >> arr[i];

		if (sum < 0) {
			sum = arr[i];
		}
		else {
			sum += arr[i];
		}

		max = max < sum ? sum : max;
	}

	std::cout << max;
	return 0;
}