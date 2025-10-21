#include <iostream>
#include <vector>
#include<queue>
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

static int idx = -1;
Node* buildTree(vector <int> preOrder) {
    idx++;

    if(preOrder[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(preOrder[idx]);
    root->left = buildTree(preOrder);// left
    root->right = buildTree(preOrder); // roght

    return root;
};

// Preorder
void preOrder(Node* root) {
    if(root == NULL) {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// Inorder
void inOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

//Postorder
void postOrder(Node* root) {
    if(root == NULL) {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

// Lever order
void levelOrder(Node* root) {
    queue <Node*> q;
    q.push(root);
    q.push(NULL);

    while(q.size() > 0) {
        Node* curr = q.front();
        q.pop();

        if(curr == NULL) {
            if(!q.empty()) {
                cout << "\n";
                q.push(NULL);
                continue;
            } else{
                break;
            }
        }

        cout << curr->data << " ";


        if(curr->left != NULL) {
            q.push(curr->left);
        }

        if(curr->right != NULL) {
            q.push(curr->right);
        }
    }
    cout << "\n";
}


int main() {
    vector <int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);
    //this is how we can print the data
    // cout << root->data << "\n";
    // cout << root->left->data << "\n";
    // cout << root->right->data << "\n";
    // cout << root->right->left->data << "\n";
    // cout << root->right->right->data << "\n";

    cout << "Preorder Traversal\n";
    preOrder(root);
    cout << "\nInorder Traversal\n";
    inOrder(root);
    cout << "\nPostorder Traversal\n";
    postOrder(root);
    cout << "\nLevel order Traversal\n";
    levelOrder(root);
    cout << "\n";

    return 0;
}