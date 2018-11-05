#include <iostream>
#include <algorithm>
#include <string>
#include <map>

int main(void) {
	int N;
	std::cin >> N;

	std::map<std::string, bool> attendence;

	for (int i(0); i < N; ++i) {
		std::string name, status;
		std::cin >> name >> status;

		attendence[name] = status[0] != 'l';
	}

	int index = 0;
	std::string* arr = new std::string[N];

	for (const std::pair<std::string, bool>& pair : attendence) {
		if (pair.second) {
			arr[index++] = pair.first;
		}
	}

	std::sort(arr, arr + index, [](const std::string& a, const std::string& b) {
		return a.compare(b) > 0;
	});

	for (int i(0); i < index; ++i) {
		std::cout << arr[i] << '\n';
	}
	
	return 0;
}