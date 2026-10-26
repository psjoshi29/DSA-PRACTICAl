
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

void push(int x) {
    Node* p = new Node;
    p->data = x;
    p->next = top;
    top = p;
}

void pop() {
    if (top == NULL) {
        cout << "Stack Underflow\n";
        return;
    }

    Node* p = top;
    cout << "Deleted: " << top->data << endl;
    top = top->next;
    delete p;
}

void display() {
    Node* p = top;

    if (p == NULL) {
        cout << "Stack is Empty\n";
        return;
    }

    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);

    display();
    pop();
    display();

    return 0;
}
