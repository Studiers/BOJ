#include <iostream>
#include <string>
#include <stack>

std::stack<char> stack;

int main(void) {
	int N, count = 0;
	std::cin >> N;

	// for remove nextline
	std::getchar();

	std::string line;
	for (int i(0); i < N; ++i) {
		std::getline(std::cin, line);
		for (auto& c : line){
			if (!stack.empty() && stack.top() == c) {
				stack.pop();
			}
			else {
				stack.push(c);
			}
		}

		if (stack.empty()) {
			count += 1;
		}

		std::stack<char>().swap(stack);
	}

	std::cout << count;

	return 0;
}