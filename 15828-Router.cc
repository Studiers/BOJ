#include <iostream>
#include <deque>

int N, input;
std::deque<int> deque;

int main(void) {
	std::cin >> N;

	while (std::cin >> input, input != -1) {
		
		if (input == 0) {
			deque.pop_front();
		}
		else {
			if (deque.size() + 1 <= N) {
				deque.push_back(input);
			}
		}
	}

	if (deque.empty()) {
		std::cout << "empty";
	}
	else {
		for (const int& i : deque) {
			std::cout << i << ' ';
		}
	}
}