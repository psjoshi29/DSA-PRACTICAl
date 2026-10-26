
#include <iostream>
using namespace std;

int q[5], f = -1, r = -1;

void enqueue(int x) {
    if ((r + 1) % 5 == f)
        cout << "Full\n";
    else {
        if (f == -1) f = 0;
        r = (r + 1) % 5;
        q[r] = x;
    }
}

void dequeue() {
    if (f == -1)
        cout << "Empty\n";
    else {
        cout << "Deleted: " << q[f] << endl;
        if (f == r) f = r = -1;
        else f = (f + 1) % 5;
    }
}

void display() {
    if (f == -1) cout << "Empty\n";
    else {
        for (int i = f; ; i = (i + 1) % 5) {
            cout << q[i] << " ";
            if (i == r) break;
        }
        cout << endl;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}
