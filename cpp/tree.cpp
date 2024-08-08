/** 
 * Program to make a tree structure with Pre-order, Post-order & In-order traversal
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }

}; // End of Node

class Tree {
    public:
    // public function to insert node in BST
    Node* insert(Node* root, int data) {
        if (root == NULL){
            return new Node(data);
        } else {
            Node* cur;
            if (data <= root->data){
                cur = insert(root->left, data);
                root->left = cur;
            } else {
                cur = insert(root->right,data);
                root->right = cur;
            }
        }
        return root;
    }

    // Public function for In-order traversal
    void inOrder(Node* root) {
        if (root == NULL)
            return;
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
    // Public function for Post-order traversal
    void postOrder(Node* root) {
        if (root == NULL)
            return;
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
    // Public function for Pre-order traversal
    void preOrder(Node* root) {
        if (root == NULL)
            return;
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }

}; //End of Tree

int main(int argc, char* argv[]){
    Tree myTree;
    Node* root = NULL;

    int t; int data;
    cout << "Enter Number of test cases: ";
    cin >> t;
    cout << "Give " << t << " space seperated integer: ";

    while (t-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }
    
    cout << "In-order: ";
    myTree.inOrder(root);
    cout << endl;

    cout << "Pre-order: ";
    myTree.preOrder(root);
    cout << endl;

    cout << "Post-order: ";
    myTree.postOrder(root);
    cout << endl;

return 0;
}


