# include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }    
};

Node* cycle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    bool isCycle = false;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) {
            isCycle = true;
            break;
        }
    }
    
    if(!isCycle) {
        return NULL;
    }

    slow = head;
    Node* prev = NULL;
    while(slow != fast) {
        slow = slow->next;
        prev = fast;
        fast = fast->next;
    }
    pre->next = NULL;
    return slow;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6); 

    Node* tail = head->next->next->next->next->next;
    Node* loopPoint = head->next->next;
    tail->next = loopPoint;

    Node* start = cycle(head);
    if(start != NULL) {
        cout << "Cycle starts at node with value: " << start->data <<"\n";
    } else {
        cout << "No cycle found\n";
    }
}