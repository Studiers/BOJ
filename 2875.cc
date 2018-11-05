#include <iostream>

int main() {
    int N, M, K, cnt{};

    std::cin >> N >> M >> K;

    while (N + M >= K + 3 && N >= 2 && M >= 1) {
        N -= 2;
        M -= 1;
        cnt += 1;
    }

    std::cout << cnt;

    return 0;
}