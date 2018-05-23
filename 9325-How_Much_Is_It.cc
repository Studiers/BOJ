#include <iostream>

int main(void) {
	int T;
	std::cin >> T;

	for (int i(0); i < T; ++i) {
		int price, caseCount;
		std::cin >> price >> caseCount;

		for (int j(0); j < caseCount; ++j) {
			int opt_count, opt_price;
			std::cin >> opt_count >> opt_price;
			price += opt_count * opt_price;
		}

		std::cout << price << '\n';
	}
	return 0;
}