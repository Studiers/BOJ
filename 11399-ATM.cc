#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    int N, tmp;
    std::cin >> N;

    std::vector<int> numbers;

    for (int i { 0 }; i < N; ++i) {
        std::cin >> tmp;
        numbers.push_back(tmp);
    }

    // Check Exception
    if (N == 1) {
        std::cout << numbers[0];
        return 0;
    }

    std::sort(numbers.begin(), numbers.end());

    for (int i { 1 }; i < N; ++i) {
        numbers[i] += numbers[i - 1];
    }

    const int sum = std::accumulate(numbers.begin(), numbers.end(), 0);

    std::cout << sum;

    return 0;
}