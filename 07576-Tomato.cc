#include <iostream>
#include <queue>

int H, W, max;
int arr[1000][1000];

typedef struct _Position {
	int x, y;

	_Position(const int& x, const int& y) {
		this->x = x;
		this->y = y;
	}

} Position;

std::queue<Position> queue;

void f(const int& x, const int& y) {
	if (x < 0 || x >= W || y < 0 || y >= H)
		return;

	if (arr[y][x] == 0) {
		arr[y][x] = 1;
		queue.push(Position(x, y));
	}
}

inline bool isGood(const int& val) {
	return val == 1 || val == -1;
}

int main(void) {
	std::cin >> W >> H;

	for (int i(0); i < H; ++i) {
		for (int j(0); j < W; ++j) {
			std::cin >> arr[i][j];
			if (arr[i][j] == 1) {
				queue.push(Position(j, i));
			}
		}
	}
	
	int cnt = -1;
	while (!queue.empty()) {
		
		cnt += 1;

		int N = queue.size();
		
		for (int i(0); i < N; ++i) {
			Position& pos = queue.front();
			int &x = pos.x, &y = pos.y;
			f(x + 1, y);
			f(x - 1, y);
			f(x, y + 1);
			f(x, y - 1);
			queue.pop();
		}
	}

	bool clear = true;
	for (int i(0); i < H; ++i) {
		for (int j(0); j < W; ++j) {
			clear &= isGood(arr[i][j]);
		}
	}
	
	if (clear) {
		std::cout << cnt;
	}
	else {
		std::cout << -1;
	}

	return 0;
}