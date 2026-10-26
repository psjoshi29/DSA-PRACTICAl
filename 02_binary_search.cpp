
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a[100], key;
    int low, high, mid, found = 0;

    cout << "Enter number of students: ";
    cin >> n;

    cout << "Enter student IDs: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Sort IDs
    sort(a, a + n);

    cout << "Sorted IDs: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\nEnter ID to search: ";
    cin >> key;

    // Binary Search
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            cout << "ID Found at position " << mid + 1;
            found = 1;
            break;
        }
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (found == 0)
        cout << "ID Not Found";

    return 0;
}
