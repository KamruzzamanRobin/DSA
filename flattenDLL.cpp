Node* falattenDLl(Node* head) {
    if(head = NULL) {
        return;
    }

    Node* curr = head;
    while(curr != NULL) {
        if(curr->child != NULL) {
            // flatten the child nodes
            Node* next = curr->next;
            curr->next = flatten(curr->child);
            curr->next->prev = curr;
            curr->child = NULL;

            // find tail
            while(curr->next != NULL) {
                curr = curr->next;
            }

            // attatch tail with next ptr
            if(next != NULL) {
                curr->next = next;
                next->prev = curr;
            }
        }
        curr = curr->next;
    }
    return head;
}