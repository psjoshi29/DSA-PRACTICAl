
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s, p = "";
    char st[100];
    int top = -1;

    cout << "Enter infix: ";
    cin >> s;

    reverse(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') s[i] = ')';
        else if (s[i] == ')') s[i] = '(';
    }

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        if (c >= 'A' && c <= 'Z')
            p += c;
        else if (c == '(')
            st[++top] = c;
        else if (c == ')') {
            while (top != -1 && st[top] != '(')
                p += st[top--];
            top--;
        }
        else
            st[++top] = c;
    }

    while (top != -1)
        p += st[top--];

    reverse(p.begin(), p.end());
    cout << "Prefix: " << p;

    return 0;
}
