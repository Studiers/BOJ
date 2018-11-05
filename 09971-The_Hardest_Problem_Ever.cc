#include <iostream>
#include <string>

inline char decode(const char& c) {
	if (c <= 'Z' && c >= 'A') {
		return (c - 'A' + 21) % 26 + 'A';
	}
	else {
		return c;
	}
}

std::string startline;
char c;

int main(void) {

	while (1) {
		std::getline(std::cin, startline);

		if (startline.length() == 10)
			break;

		while ((c = std::getchar()) != '\n') {
			std::putchar(decode(c));
		}

		std::putchar('\n');

		while ((c = std::getchar()) != '\n');
	}

	return 0;
}