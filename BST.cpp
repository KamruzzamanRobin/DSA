#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root, int key) {
    if(root == NULL) {
        return new Node(key);
    }

    if(key < root->data) {
        root->left = insert(root->left, key);
    } else {
        root->right = insert(root->right, key);
    }

    return root;
}

Node* buildBST(vector <int> arr) {
    Node* root = NULL;

    for(int val : arr) {
        root = insert(root, val);
    }

    return root;
}

void inOrder(Node* root) {
    if(root == NULL) {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

bool search(Node* root, int key) {
    if(root == NULL) {
        return false;
    }

    if(root->data == key) {
        return true;
    }

    if(key < root->data) {
        return search(root->left, key);
    } else {
        return search(root->right, key);
    }
}

Node* getInorderSuccessor(Node* root) { // left most node in right subtree
    while(root != NULL && root->left != NULL) {
        root = root->left;
    }
    return root;
}

Node* delNode(Node* root, int key) {// key = val to delete
    if(root == NULL) {
        return NULL;
    }

    if(key < root->data) {
        root->left = delNode(root->left, key);
    } else if(key > root->data) {
        root->right = delNode(root->right, key);
    } else {
        // key == root
        if(root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if(root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        } else { // 2 children
            Node* IS = getInorderSuccessor(root->right);
            root->data = IS->data;
            root->right = delNode(root->right, IS->data);

        }
    }
    return root;
}

int main() {
    vector <int> arr = {3,2,1,5,6,4};

    Node* root = buildBST(arr);
    cout << "Before : ";
    inOrder(root);
    cout << "\n";

    cout << "After: ";
    delNode(root, 5);
    inOrder(root);
    cout << "\n";


    // cout << boolalpha;
    // cout << search(root, 9) << "\n";
    // cout << "\n";
    return 0;
}