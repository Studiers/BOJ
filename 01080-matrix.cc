#include <iostream>

int N, M, cnt;
int matrix[2][50][50];

void get_input() {
    std::cin >> N >> M;

    char tmp;
    for (int r { 0 }; r < 2; ++r) {
        for (int i { 0 }; i < N; ++i) {
            for (int j { 0 }; j < M; ++j) {
                std::cin >> tmp;
                matrix[r][i][j] = tmp - '0';
            }
        }
    }
}

bool check_is_same_matrix() {
    for (int i { 0 }; i < N; ++i) {
        for (int j { 0 }; j < M; ++j) {
            if (matrix[0][i][j] != matrix[1][i][j]) {
                return false;
            }
        }
    }
    return true;
}

void change_matrix(int y, int x) {
    for (int i { y }; i < y + 3; ++i) {
        for (int j { x }; j < x + 3; ++j) {
            matrix[0][i][j] = !matrix[0][i][j];
        }
    }
}

void change_matrix() {
    for (int i { 0 }; i < N - 2; ++i) {
        for (int j { 0 }; j < M - 2; ++j) {
            if (matrix[0][i][j] != matrix[1][i][j]) {
                change_matrix(i, j);
                cnt += 1;
            }
        }
    }
}

int main() {
    get_input();
    change_matrix();
    std::cout << (check_is_same_matrix() ? cnt : -1);
    return 0;
}