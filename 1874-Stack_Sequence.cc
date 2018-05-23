#include <iostream>
#include <string>
#include <stack>

std::stack<int> stack;

int main() {
	int N;
	std::cin >> N;

	int* arr = new int[N];
	
	for (int i(0); i < N; ++i) {
		std::cin >> arr[i];
	}

	// 배열의 값을 푸시 팝하기 위한 곳
	int top = 0;

	// 결과 값을 위한 문자열
	std::string res;

	for (int i(1); i <= N; ++i) {
		res += "+\n";

		stack.push(i);

		while (!stack.empty() && stack.top() == arr[top]) {
			res += "-\n";
			top += 1;
			stack.pop();
		}
	}

	if (top != N) {
		std::cout << "NO";
	}
	else {
		std::cout << res;
	}
}