#include <iostream>

int N;
int counts[3] { 0, 0, 0 };
int arr[2187][2187];

void get_input() {
    std::cin >> N;

    for (int i { 0 }; i < N; ++i) {
        for (int j { 0 }; j < N; ++j) {
            std::cin >> arr[i][j];
        }
    }
}

void count_papers(int x, int y, int offset) {
    const int CELL = arr[y][x];

    for (int i { x }; i < x + offset; ++i) {
        for (int j { y }; j < y + offset; ++j) {
            if (CELL != arr[j][i]) {
                for (int k { 0 }; k < 3; ++k) {
                    for (int l { 0 }; l < 3; ++l) {
                        r(x + offset/3*k, y + offset/3*l, offset/3);
                    }
                }
                return;
            }
        }
    }

    counts[CELL + 1] += 1;
}

void print_counts() {
    std::cout << counts[0] << '\n' << counts[1] << '\n' << counts[2];
}

int main() {
    get_input();
    count_papers(0, 0, N);
    print_counts();
    return 0;
}