#include <iostream>
#include <string>

int arr[26];

int main(void) {
	int N;
	std::cin >> N;

	// remove nextline char
	std::getchar();

	// input process
	std::string input;
	for (int i(0); i < N; ++i) {
		std::getline(std::cin, input);
		arr[input[0] - 'a'] += 1;
	}

	// print good case with counting
	int cnt = 0;
	for (int i(0); i < 26; ++i) {
		if (arr[i] >= 5) {
			cnt += 1;
			std::putchar('a' + i);
		}
	}

	// If there is no good case
	if (cnt == 0) {
		std::puts("PREDAJA");
	}

	return 0;
}