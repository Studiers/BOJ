#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

std::vector<std::pair<int, int>> meetings;

void GetMeetingsByInput(const int N) {
    int start, end;
    for (int i{0}; i < N; ++i) {
        std::cin >> start >> end;
        meetings.push_back(std::pair<int, int>(start, end));
    }
}

void SortMeetings() {
    std::sort(meetings.begin(), meetings.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        if (a.second == b.second) {
            return a.first < b.first;
        } else {
            return a.second < b.second;
        }
    });
}

int CalculateBestCase() {
    int cnt {0}, start {-1}, end {-1};

    for (int i{0}; i < meetings.size(); ++i) {
        if (meetings[i].first < end) {
            continue;
        } else {
            start = meetings[i].first;
            end = meetings[i].second;

            ++cnt;
        }
    }

    return cnt;
}

int main() {
    int N;
    std::cin >> N;

    GetMeetingsByInput(N);
    SortMeetings();
    std::cout << CalculateBestCase();
}