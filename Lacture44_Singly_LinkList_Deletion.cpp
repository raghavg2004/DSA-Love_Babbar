#include<iostream>
using namespace std;

// Class definition for a singly linked list node

class Node {
public:
    int data; // Data part of the node
    Node* next; // Pointer to the next node

    // Constructor to initialize the node
    Node(int value) {
        this->data = value;
        this->next = NULL;
    }
};

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Function to delete a node by value
Node* deleteNode(Node* head, int value) {
    if (head == NULL) return NULL;

    // If the node to delete is the head
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    // Traverse to find the node
    Node* curr = head;
    while (curr->next != NULL) {
        if (curr->next->data == value) {
            Node* toDelete = curr->next;
            curr->next = curr->next->next;
            delete toDelete;
            break;
        }
        curr = curr->next;
    }

    return head;
}

int main() {
    // Create a linked list with 3 nodes
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    head->next = second;
    second->next = third;

    cout << "Original Linked List: " << endl;
    print(head);

    cout << "Deleting node with value 20..." << endl;
    head = deleteNode(head, 20); // Updated head in case the head was deleted

    cout << "Linked List after deletion: " << endl;
    print(head);

    return 0;
}
