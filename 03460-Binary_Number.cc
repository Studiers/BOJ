#include <iostream>

int main(void) {
	int T;
	std::cin >> T;

	for (int i(0); i < T; ++i) {
		int N;
		std::cin >> N;
		
		for (int j(0); N; ++j) {
			if (N & 1) {
				std::cout << j << ' ';
			}

			N /= 2;
		}

		std::cout << '\n';
	}
	
	return 0;
}