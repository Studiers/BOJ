#include <iostream>

int main(void) {
	char unit;
	int count = 0;

	for (int i(0); i < 8; ++i) {
		for (int j(0); j < 8; ++j) {
			unit = std::getchar();
			if (!((i&1) ^ (j&1)) && unit == 'F') {
				//std::cout << i << ' ' << j << '\n';
				count += 1;
			}
		}

		// for erase '\n';
		std::getchar();
	}

	std::cout << count;
}
//
//#include <iostream>
//
//int main(void) {
//	int count = 0;
//
//	for (int i(0); i < 8; ++i) {
//		for (int j(0); j < 8; ++j) {
//			if (!((i & 1) ^ (j & 1))) {
//				std::cout << "Check : " << i << ' ' << j << '\n';
//			}
//
//			if (!((i & 1) ^ (j & 1)) && std::getchar() == 'F') {
//				count += 1;
//			}
//		}
//
//		// for erase '\n';
//		std::getchar();
//	}
//
//	std::cout << count << '\n';
//}