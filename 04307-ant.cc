#include <iostream>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    int T, L, N, tmp;

    std::cin >> T;

    for (int i { 0 }; i < T; ++i) {
        std::cin >> L >> N;
        int fastest { -1 }, latest { -1 };
        for (int j { 0 }; j < N; ++j) {
            std::cin >> tmp;

            fastest = std::max(fastest, std::min(tmp, L - tmp));
            latest = std::max(latest, std::max(tmp, L - tmp));
        }
        std::cout << fastest << ' ' << latest << '\n';
    }
}