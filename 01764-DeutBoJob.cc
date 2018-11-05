// 듣보잡

#include <iostream>
#include <map>
#include <string>
#include <algorithm>

struct tuple {
	bool notHear = false, notSee = false;
};

int main(void) {
	int N, M;
	std::cin >> N >> M;

	std::map<std::string, tuple> map;
	
	std::string name;

	for (int i(0); i < N; ++i) {
		std::cin >> name;

		map[name].notHear = true;
	}

	for (int j(0); j < M; ++j) {
		std::cin >> name;

		map[name].notSee = true;
	}
	
	// map에서 remove_if가 에러 나는 이유는 map의 key가 const 타입이라서라고 한다.

	for (auto it = map.begin(); it != map.end();) {
		if (!(it->second.notHear && it->second.notSee))
			it = map.erase(it);
		else
			++it;
	}

	std::cout << map.size() << '\n';
	for (std::pair<std::string, tuple> pair : map) {
		std::cout << pair.first << '\n';
	}

	return 0;
}