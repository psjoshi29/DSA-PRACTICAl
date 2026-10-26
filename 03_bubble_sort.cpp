
#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    int id;
    char name[20];
    float cgpa;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[100];

    for (int i = 0; i < n; i++) {
        cout << "Enter ID, Name and CGPA: ";
        cin >> s[i].id >> s[i].name >> s[i].cgpa;
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j].cgpa > s[j + 1].cgpa) {
                swap(s[j], s[j + 1]);
            }
        }
    }

    cout << "\nStudents sorted by CGPA:\n";

    for (int i = 0; i < n; i++) {
        cout << s[i].id << " "
             << s[i].name << " "
             << s[i].cgpa << endl;
    }

    return 0;
}
