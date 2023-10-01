#include <iostream>
#include <stack>
#include <string>

bool isBalanced(const std::string& expression) {
    std::stack<char> stack;

    for (char ch : expression) {
        if (ch == '(' || ch == '[' || ch == '{') {
            // If an opening parenthesis is encountered, push it onto the stack.
            stack.push(ch);
        } else if (ch == ')' || ch == ']' || ch == '}') {
            // If a closing parenthesis is encountered, check if the stack is empty.
            if (stack.empty()) {
                return false; // No matching opening parenthesis found.
            }

            // Pop the top of the stack and check if it matches the current closing parenthesis.
            char top = stack.top();
            stack.pop();

            if ((ch == ')' && top != '(') || (ch == ']' && top != '[') || (ch == '}' && top != '{')) {
                return false; // Mismatched opening and closing parenthesis.
            }
        }
    }

    // If the stack is not empty at the end, there are unmatched opening parentheses.
    return stack.empty();
}

int main() {
    std::string expression;

    std::cout << "Enter a mathematical expression: ";
    std::cin >> expression;

    if (isBalanced(expression)) {
        std::cout << "The expression is balanced." << std::endl;
    } else {
        std::cout << "The expression is not balanced." << std::endl;
    }

    return 0;
}
