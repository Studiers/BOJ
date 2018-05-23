#include <iostream>
#include <string>

char str[1000001], bomb[37], res[1000001];
int strLen, bombLen, pos;

bool isBomb(int pos) {
	for (int i(0); i < bombLen; ++i) {
		if (res[pos + i] != bomb[i])
			return false;
	}
	return true;
}

int main(void) {
	std::cin >> str >> bomb;

	while (str[strLen]) strLen++;
	while (bomb[bombLen]) bombLen++;

	char lastChar = bomb[bombLen - 1];

	for (int i(0); i < strLen; ++i) {
		res[pos] = str[i];
		if (res[pos] == lastChar) {
			if (isBomb(pos - bombLen + 1)) {
				pos -= bombLen;
			}
		}
		pos += 1;
	}

	res[pos] = 0;

	// Too slow..
	/*size_t pos;
	while ((pos = str.find(bomb)) != std::string::npos) {
	str = str.substr(0, pos) + str.substr(pos+bomb.length(), str.length());
	}*/

	if (pos > 0)
		std::cout << res;
	else
		std::cout << "FRULA";

	return 0;
}