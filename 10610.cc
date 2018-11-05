#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>

int main() {
    std::string N;
    std::cin >> N;

    bool hasZero { false };

    std::sort(N.begin(), N.end(), [] (const char& a, const char& b) {
        return a > b;
    });


    int sum = std::accumulate(N.begin(), N.end(), 0, [&hasZero](int sum, const char& c) {
        if (c == '0') hasZero = true;
        return sum + c - '0';
    });

    if (sum % 3 != 0 || !hasZero) {
        std::cout << -1;
    } else {
        std::cout << N;
    }
}