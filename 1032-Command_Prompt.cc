#include <iostream>
#include <string>

int main(void) {
	int N;
	std::cin >> N;

	std::string* filenames = new std::string[N];

	for (int i(0); i < N; ++i) {
		std::cin >> filenames[i];
	}

	if (N == 1) {
		std::cout << filenames[0];
		return 0;
	}

	char res[51] = {0};

	for (int i(0); i < filenames[0].length(); ++i) {
		char stdUnit = filenames[0][i];

		for (int j(1); j < N; ++j) {
			if (stdUnit != filenames[j][i]) {
				stdUnit = '?';
				break;
			}
		}

		res[i] = stdUnit;
	}

	std::cout << res;

	return 0;
}