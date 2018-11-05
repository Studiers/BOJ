#include <iostream>
#include <string>

int main(void) {
	std::string input;

	std::cin >> input;
	
	int jCnt = 0, iCnt = 0;

	for (int i(0); i < input.length(); ++i) {
		if (input[i] == 'J') {
			if (input[i + 1] == 'O' && input[i + 2] == 'I')
				jCnt += 1, i += 1;
		}
		else if (input[i] == 'I') {
			if (input[i + 1] == 'O' && input[i + 2] == 'I')
				iCnt += 1, i += 1;
		}
	}

	std::cout << jCnt << '\n' << iCnt;

	return 0;
}