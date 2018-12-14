#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, max { -1 }, tmp;
    std::cin >> N;

    std::vector<int> ropes;

    for (int i { 0 }; i < N; ++i) {
        std::cin >> tmp;
        ropes.push_back(tmp);
    }

    std::sort(ropes.begin(), ropes.end());

    for (int i { 0 }; i < N; ++i) {
        max = std::max(max, ropes[i] * (N-i));
    }


    std::cout << max;

    return 0;
}