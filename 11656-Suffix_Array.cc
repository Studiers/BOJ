#include <iostream>
#include <string>
#include <algorithm>

int main(void) {
	std::string S;
	std::cin >> S;

	std::string* array = new std::string[S.length()];

	for (int i(0); i < S.length(); ++i) {
		array[i] = S.substr(i);
	}

	std::sort(array, array+S.length());

	for (int i(0); i < S.length(); ++i) {
		std::cout << array[i] << '\n';
	}

	return 0;
}