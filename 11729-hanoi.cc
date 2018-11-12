#include <iostream>
#include <vector>
#include <utility>

std::vector<std::pair<char, char>> output;

int hanoi(int n, char _from, char _to, char _for) {
    if (n == 0) return 1;
    int sum {0};

    sum += hanoi(n-1, _from, _for, _to);
    output.push_back(std::pair<char, char>(_from, _to));
    sum += hanoi(n-1, _for, _to, _from);

    return sum;
}

int main() {
    int N;
    std::cin >> N;

    int count = hanoi(N, '1', '3', '2') - 1;
    std::cout << count << '\n';

    for (std::pair<char, char>& p : output) {
        std::cout << p.first << ' ' << p.second << '\n';
    }
}