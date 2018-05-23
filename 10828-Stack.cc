#include <iostream>
#include <string>
#include <stack>

std::stack<int> stack;

int main() {
	int N;
	std::cin >> N;

	std::string cmd;
	int op;

	for (int i(0); i < N; ++i) {
		std::cin >> cmd;
		if (cmd == "push") {
			std::cin >> op;
			stack.push(op);
		}
		else if (cmd == "top") {
			if (stack.empty()) {
				std::cout << -1 << '\n';
			}
			else {
				std::cout << stack.top() << '\n';
			}
		}
		else if (cmd == "size") {
			std::cout << stack.size() << '\n';
		}
		else if (cmd == "empty") {
			std::cout << stack.empty() << '\n';
		}
		else if (cmd == "pop") {
			if (stack.empty()) {
				std::cout << -1 << '\n';
			}
			else {
				std::cout << stack.top() << '\n';
				stack.pop();
			}
		}
	}
}