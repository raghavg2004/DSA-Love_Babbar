#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize the node
    Node(int value) {
        this->data = value; // Initialize data with the given value = 10
        this->next = NULL; // Initialize next pointer to null
    }
};

void insertAtHead(Node* &head, int d) {
    // Create a new node with the given data
    Node* temp = new Node(d);
    temp->next = head; // Point the new node's next to the current head
    head = temp; // Update head to point to the new node
}

void insertAtTail(Node* &tail, int d) {
    // Create a new node with the given data
    Node* temp = new Node(d);
    tail->next = temp; // Point the current tail's next to the new node
    tail = temp; // Update tail to point to the new node
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d) {
    // if insert at first position
    if (position == 1) { // If position is 1, insert at head
        insertAtHead(head, d); // Call the insertAtHead function
        return; // Exit the function
    }

    Node* temp = head; // Start from the head node
    int count = 1; // Initialize a counter to track the position
    while (count < position - 1) { // Traverse until the desired position
        temp = temp->next; // Move to the next node
        count++; // Increment the counter
    }

    // if insert at last position
    if(temp -> next == NULL) { // If we reach the end of the list
        insertAtTail(tail, d); // Call the insertAtTail function
        return; // Exit the function
    } 

    Node* nodeToInsert = new Node(d); // Create a new node with the given data
    nodeToInsert->next = temp->next; // Point the new node's next to the current node's next
    temp->next = nodeToInsert; // Point the current node's next to the new node
}

void print(Node* head) {
    Node* temp = head; // Start from the head node
    while (temp != NULL) { // Traverse until the end of the list
        cout << temp->data << " -> "; // Print the current node's data
        temp = temp->next; // Move to the next node
    }
    cout << "NULL" << endl; // Indicate the end of the list
}

int main()
{
   // Create a new node with data 10
    Node* node1 = new Node(10);
    cout << "Staring :" << endl;
    cout << "head : " << node1->data << endl;
    cout << "tail : " << node1->next << endl;

    // Create a head pointer and initialize it to NULL
    Node* head = node1; // Set head to point to the first node
    Node* tail = node1; // Set tail to point to the first node

    // insert at head
    cout << endl << "insert at head :" << endl;
    print(head); // Print the list (10 -> NULL)
    insertAtHead(head, 20); // Insert 20 at the head of the list
    print(head); // Print the list (20 -> 10 -> NULL)
    insertAtHead(head, 30); // Insert 30 at the head of the list
    print(head); // Print the list (30 -> 20 -> 10 -> NULL)

    // insert at tail
    cout << endl << "insert at tail :" << endl;
    print(head); // Print the list (30 -> 20 -> 10 -> NULL)
    insertAtTail(tail, 20); // Insert 20 at the tail of the list
    print(head); // Print the list (30 -> 20 -> 10 -> 20 -> NULL)
    insertAtTail(tail, 30); // Insert 30 at the tail of the list
    print(head); // Print the list (30 -> 20 -> 10 -> 20 -> 30 -> NULL)

    // insert at position
    cout << endl << "insert at position :" << endl;
    insertAtPosition(tail, head, 2, 25); // Insert 25 at position 2
    print(head); // Print the list (30 -> 25 -> 20 -> 10 -> 20 -> 30 -> NULL)

    cout << endl << "Ending :" << endl;
    cout << "head : " << head->data << endl;
    cout << "tail : " << tail->data << endl;
    return 0;
}