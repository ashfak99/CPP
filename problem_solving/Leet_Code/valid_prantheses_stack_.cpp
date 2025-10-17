#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool valid_parenthesis(const string& expression) {
    stack<char> s;

    for (int i = 0; i < expression.length(); i++) {
        char currentChar = expression[i];

        if (currentChar == '(' || currentChar == '{' || currentChar == '[') {
            s.push(currentChar);
        }
        else if (currentChar == ')' || currentChar == '}' || currentChar == ']') {
            if (s.empty()) {
                return false;
            }

            char topChar = s.top();
            if ((currentChar == ')' && topChar == '(') ||
                (currentChar == '}' && topChar == '{') ||
                (currentChar == ']' && topChar == '[')) {
                s.pop();
            } else {
                return false;
            }
        }
    }

    return s.empty();
}

int main() {
    string expr1 = "{()}[]";
    if (valid_parenthesis(expr1)) {
        cout << "'" << expr1 << "' is valid." << endl;
    } else {
        cout << "'" << expr1 << "' is not valid." << endl;
    }

    string expr2 = "([)]";
    if (valid_parenthesis(expr2)) {
        cout << "'" << expr2 << "' is valid." << endl;
    } else {
        cout << "'" << expr2 << "' is not valid." << endl;
    }

    string expr3 = "((";
    if (valid_parenthesis(expr3)) {
        cout << "'" << expr3 << "' is valid." << endl;
    } else {
        cout << "'" << expr3 << "' is not valid." << endl;
    }

    return 0;
}