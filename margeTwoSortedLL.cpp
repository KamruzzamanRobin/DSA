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

Node* mergeTwoList(Node* head1, Node* head2) {
    if(hea1 == NULL || head2 == NULL) {
        return head1 == NULL ? head2 : head1;
    }

    // case1
    if(head1->val <= head2->next) {
        head1->next = mergeTwoList(hea1->next, head2);
        return head1;
    } else { // case2
        head2->next = mergeTwoList(head1, head2->next);
        return head2;
    }
}

int main() {

}