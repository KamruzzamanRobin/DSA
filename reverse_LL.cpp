# include<iostream>
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

class LinkedList {
    Node* head;
    Node* tail;

public:
    LinkedList() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
        }

    }

    void revesreLl() {
        Node* curr = head;
        Node* pre = NULL;
        Node* next = NULL;

        while(curr != NULL) {
            next = curr->next;
            curr->next = pre;

            pre = curr;
            curr = next;
        }
        return pre;
    }


    void printLL() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << "\n";
    }
};

int main() {

}