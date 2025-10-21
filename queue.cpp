#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Queue {
    Node* head;
    Node* tail;

public: 
    Queue() {
        head = tail = NULL;
    }

    void push(int val) {
        Node* newNode = new Node(val);

        if(empty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop() {
        if(empty()) {
            cout << "LL is empty.\n";
        } else {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    int front() {
         if(empty()) {
            cout << "LL is empty.\n";
            return -1;
        }
        return head->data;
    }

    bool empty() {
        return head == NULL;
    }
};

int main() {
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    while(!q.empty()) {
        cout << q.front() << "\t";
        q.pop();
    }
    cout << "\n";
    return 0;
}