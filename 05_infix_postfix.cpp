
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[20], st[20];
    int top = -1;

    cout << "Enter infix: ";
    cin >> s;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            cout << s[i];

        else if (s[i] == '(') {
            top++;
            st[top] = s[i];
        }

        else if (s[i] == ')') {
            while (st[top] != '(') {
                cout << st[top];
                top--;
            }
            top--;
        }

        else {
            while (top != -1 && st[top] != '(' &&
                  (s[i] == '+' || s[i] == '-' ||
                  st[top] == '*' || st[top] == '/')) {
                cout << st[top];
                top--;
            }

            top++;
            st[top] = s[i];
        }
    }

    while (top != -1) {
        cout << st[top];
        top--;
    }

    return 0;
}
