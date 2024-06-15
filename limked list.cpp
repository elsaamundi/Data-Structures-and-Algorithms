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
void insertFront(Node*& head, int newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

// Function to insert at the front of double linked list
void insertFront(DNode*& head, int newData) {
    DNode* newNode = new DNode;
    newNode->data = newData;
    newNode->prev = nullprev;
    newNode->next = head;
    if (head != nullptr) {
        head->prev = newNode;
    }
    head = newNode;
}

// Function to insert at the end of circular linked list
void insertEnd(CNode*& head, int newData) {
    CNode* newNode = new CNode;
    newNode->data = newData;
    newNode->next = head;

    if (head == nullptr) {
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
void display(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Function to display double linked list
void display(DNode* head) {
    DNode* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Function to display circular linked list
void display(CNode* head) {
    CNode* current = head;
    do {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);
    cout << endl;
}

int main() {
    // Single Linked List
    Node* sHead = nullptr;
    insertFront(sHead, 10);
    insertFront(sHead, 20);
    insertFront(sHead, 30);
    cout << "Single Linked List: ";
    display(sHead);

    // Double Linked List
    DNode* dHead = nullptr;
    insertFront(dHead, 10);
    insertFront(dHead, 20);
    insertFront(dHead, 30);
    cout << "Double Linked List: ";
    display(dHead);

    // Circular Linked List
    CNode* cHead = nullptr;
    insertEnd(cHead, 10);
    insertEnd(cHead, 20);
    insertEnd(cHead, 30);
    cout << "Circular Linked List: ";
    display(cHead);

    return 0;
}

