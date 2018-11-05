#include <iostream>
#include <string>

int main(void) {
	std::string names[5];

	int cnt = 0;
	for (int i(0); i < 5; ++i) {
		std::cin >> names[i];
		if (names[i].find("FBI") != std::string::npos) {
			std::cout << i + 1 << ' ';
			cnt += 1;
		}
	}

	if (cnt == 0)
		std::cout << "HE GOT AWAY!";

	return 0;
}