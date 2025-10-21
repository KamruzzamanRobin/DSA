# include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data =val;
        next = NULL;
    }
};

class CircularLl {
    Node* head;
    Node* tail;

public:
    CircularLl() {
        head = tail = NULL;
    }

    void insertAtHead(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
            tail->next = newNode;
        } else {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    void insertAtTail(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
            tail->next = head;
        } else {
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteAtHead() {
        if(head == NULL) return;
        else if (head == tail){
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = head;
            head = head->next;
            tail->next = head;

            temp->next = NULL;
            delete temp;
        }
    }

    void deleteAtTail() {
        if(head == NULL) return;
        else if (head == tail){
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = tail;
            Node* prev = head;
            while(prev->next != tail) {
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;

            temp->next = NULL;
            delete temp;
        }
    }

    void printLl() {
        if(head == NULL) {
            return;
        }

        cout << head->data << "->";
        Node* temp = head->next;
        while(temp != head) {
            cout << temp->data <<"->";
            temp = temp->next;
        }
        cout << temp->data << "\n";
    }
};

int main() {
    CircularLl cll;
    cll.insertAtHead(1);
    cll.insertAtHead(2);
    cll.insertAtHead(3);
    cll.printLl();

    cll.deleteAtTail();
    cll.printLl();

    cll.deleteAtTail();
    cll.printLl();
    return 0;
}

