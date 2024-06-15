#include <iostream>
using namespace std;

// Struktur untuk node tree
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;  // Menggunakan NULL sebagai pengganti nullptr
    }
};

// Fungsi untuk menambahkan node ke binary tree
Node* insertNode(Node* root, int data) {
    if (root == NULL) {
        return new Node(data);
    }
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else {
        root->right = insertNode(root->right, data);
    }
    return root;
}

// Fungsi untuk traversal in-order
void inOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

// Fungsi untuk traversal pre-order
void preOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// Fungsi untuk traversal post-order
void postOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

// Fungsi utama
int main() {
    Node* root = NULL;
    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 70);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 60);
    root = insertNode(root, 80);

    cout << "In-order Traversal: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Pre-order Traversal: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "Post-order Traversal: ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}

