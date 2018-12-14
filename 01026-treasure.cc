#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main() {
    int N, tmp, sum { 0 };
    std::cin >> N;

    std::vector<int> vectors[2];

    for (int i { 0 }; i < 2; ++i) {
        for (int j { 0 }; j < N; ++j) {
            std::cin >> tmp;
            vectors[i].push_back(tmp);
        }
    }

    std::sort(vectors[0].begin(), vectors[0].end(), std::greater<int>());
    std::sort(vectors[1].begin(), vectors[1].end(), std::less<int>());

    for (int i { 0 }; i < N; ++i) {
        sum += vectors[0][i] * vectors[1][i]; 
    }

    std::cout << sum;

    return 0;
}