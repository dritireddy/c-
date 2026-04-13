#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* rear = NULL;

void enqueue(int value) {
    Node* newNode = new Node;
    newNode->data = value;

    if (rear == NULL) {
        rear = newNode;
        rear->next = rear; 
    } else {
        newNode->next = rear->next;
        rear->next = newNode;
        rear = newNode;
    }
}


void display() {
    if (rear == NULL) {
        cout << "Queue is empty\n";
        return;
    }

    Node* temp = rear->next; 
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != rear->next);

    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    return 0;
}
