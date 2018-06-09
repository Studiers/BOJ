#include <iostream>
#include <stack>
#include <string>
#include <limits>

std::stack<char> stack;

int main(void) {
    int T;
    std::cin >> T;

    std::cin.ignore(INT32_MAX, '\n');

    std::string input;
    for (int i(0); i < T; ++i) {
        std::getline(std::cin, input);
        for (const char& c : input) {
            if (c == ')') {
                if (!stack.empty() && stack.top() == '(') {
                    stack.pop();
                } else {
                    stack.push(c);
                }
            } else {
                stack.push('(');
            }
        }

        std::cout << (stack.empty() ? "YES\n" : "NO\n");
        
        while (!stack.empty()) {
            stack.pop();
        }
    }
    return 0;
}