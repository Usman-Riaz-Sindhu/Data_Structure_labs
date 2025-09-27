#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    // Insert new node at beginning
    static void insertAtHead(Node *&head, int val)
    {
        Node *n = new Node{val, head};
        head = n; // update head
    }

    // Delete first node
    static void deleteHead(Node *&head)
    {
        if (!head)
            return; // empty list check

        Node *temp = head; // store old head
        head = head->next; // move head
        delete temp;       // free old head
    }

    // Print list
    static void printList(Node *head)
    {
        cout << "List: ";
        for (Node *cur = head; cur; cur = cur->next)
            cout << cur->data << " ";
        cout << endl;
    }
};
int main()
{
    Node *head = nullptr;

    Node::insertAtHead(head, 10);
    Node::insertAtHead(head, 20);
    Node::insertAtHead(head, 30);

    Node::printList(head);

    Node::deleteHead(head);
    Node::printList(head);

    return 0;
}
