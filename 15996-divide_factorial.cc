#include <iostream>

int main() {
    int N, K, cnt { 0 };
    std::cin >> N >> K;

    // uK meaning useful K
    for (long long uK { K }; uK <= N; uK *= K) {
        cnt += N / uK;
    }

    std::cout << cnt;
}