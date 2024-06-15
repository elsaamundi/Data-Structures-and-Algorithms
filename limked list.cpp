#include <iostream>
using namespace std;

// Node for single linked list
struct Node {
    int data;
    Node* next;
};

// Node for double linked list
struct DNode {
    int data;
    DNode* prev;
    DNode* next;
};

// Node for circular linked list
struct CNode {
    int data;
    CNode* next;
};

// Function to insert at the front of single linked list
void insertFrontSLL(Node*& head, int newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

// Function to insert at the front of double linked list
void insertFrontDLL(DNode*& head, int newData) {
    DNode* newNode = new DNode;
    newNode->data = newData;
    newNode->prev = NULL;  // Fixed typo here
    newNode->next = head;
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
}

// Function to insert at the end of circular linked list
void insertEndCLL(CNode*& head, int newData) {
    CNode* newNode = new CNode;
    newNode->data = newData;
    newNode->next = head;

    if (head == NULL) {
        head = newNode;
        newNode->next = head;
    } else {
        CNode* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to display single linked list
void displaySLL(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Function to display double linked list
void displayDLL(DNode* head) {
    DNode* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Function to display circular linked list
void displayCLL(CNode* head) {
    if (head == NULL) {
        return;
    }
    CNode* current = head;
    do {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);
    cout << endl;
}

int main() {
    // Single Linked List
    Node* sHead = NULL;
    insertFrontSLL(sHead, 10);
    insertFrontSLL(sHead, 20);
    insertFrontSLL(sHead, 30);
    cout << "Single Linked List: ";
    displaySLL(sHead);

    // Double Linked List
    DNode* dHead = NULL;
    insertFrontDLL(dHead, 10);
    insertFrontDLL(dHead, 20);
    insertFrontDLL(dHead, 30);
    cout << "Double Linked List: ";
    displayDLL(dHead);

    // Circular Linked List
    CNode* cHead = NULL;
    insertEndCLL(cHead, 10);
    insertEndCLL(cHead, 20);
    insertEndCLL(cHead, 30);
    cout << "Circular Linked List: ";
    displayCLL(cHead);

    return 0;
}
