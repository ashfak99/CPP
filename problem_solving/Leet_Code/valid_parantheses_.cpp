#include<iostream>
#include<string>
using namespace std;

#define SIZE 20

typedef struct MyStack{
    char item[SIZE];
    int top = -1;
} MyStack;

void push(char c, MyStack& s) {
    if (s.top >= SIZE - 1) return;
    s.top++;
    s.item[s.top] = c;
}

void pop(MyStack& s) {
    if (s.top < 0) return;
    s.top--;
}

char top_element(MyStack& s) {
    if (s.top < 0) return '\0';
    return s.item[s.top];
}

bool valid_parenthesis(const string& expression) {
    MyStack s;
    for (int i = 0; i < expression.length(); i++) {
        char currentChar = expression[i];

        if (currentChar == '(' || currentChar == '{' || currentChar == '[') {
            push(currentChar, s);
        }
        else if (currentChar == ')' || currentChar == '}' || currentChar == ']') {
            if (s.top == -1) {
                return false;
            }

            char topChar = top_element(s);
            if ((currentChar == ')' && topChar == '(') ||
                (currentChar == '}' && topChar == '{') ||
                (currentChar == ']' && topChar == '[')) {
                pop(s);
            } else {
                return false;
            }
        }
    }

    return (s.top == -1);
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