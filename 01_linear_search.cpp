
#include <iostream>
using namespace std;

struct Student {
    int id;
    char name[20];
    float cgpa;
};

int main() {
    int n, key, i, found = 0;

    cout << "Enter number of students: ";
    cin >> n;

    Student *s = new Student[n];

    for (i = 0; i < n; i++) {
        cout << "Enter ID, Name, CGPA: ";
        cin >> s[i].id >> s[i].name >> s[i].cgpa;
    }

    cout << "Enter ID to search: ";
    cin >> key;

    for (i = 0; i < n; i++) {
        if (s[i].id == key) {
            cout << "Student Found\n";
            cout << s[i].id << " ";
            cout << s[i].name << " ";
            cout << s[i].cgpa;
            found = 1;
            break;
        }
    }

    if (found == 0)
        cout << "Student Not Found";

    delete[] s;
    return 0;
}
