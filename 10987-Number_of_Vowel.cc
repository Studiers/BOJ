#include <iostream>
#include <string>

int main(void) {
	std::string input;
	std::cin >> input;

	int count = 0;
	for (const char& c : input)
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			count += 1;

	std::cout << count;

	return 0;
}