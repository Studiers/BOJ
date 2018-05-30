#include <iostream>
#include <string>
#include <list>

int T;
std::list<char> list;
auto it = list.begin();
char c;

int main(void) {
	std::cin >> T;
	std::getchar();
	for (int i(0); i < T; ++i) {
		it = list.begin();
		while((c = std::getchar()) != '\n') {
		switch (c) {
			case '<':
				if (it != list.begin())
					--it;
				break;
			case '>':
				if (it != list.end())
					++it;
				break;
			case '-':
				if (it != list.begin()) {
					it = list.erase(--it);
				}
				break;
			default:
				list.insert(it, c);
				break;
			}
		}
		
		for (auto it = list.begin(); it != list.end(); ++it) {
			std::putchar(*it);
		}

		std::putchar('\n');

		list.clear();
	}
	return 0;
}