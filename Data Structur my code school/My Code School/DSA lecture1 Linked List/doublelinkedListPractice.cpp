#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(Node *&head, int data)
{
    // empty list
    if (head == NULL)
    {
        // create a node
        Node *newnode = new Node(data);
        head = newnode;
        return;
    }
    // list not empty
    Node *newnode = new Node(data);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void printForward(Node *&head)
{
    Node *temp = head;
    // empty list
    if (temp == NULL)
    {
        cout << "Empty list" << endl;
        return;
    }
    // list not empty
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printBackward(Node *&head)
{
    Node *temp = head;
    // empty list
    if (temp == NULL)
    {
        cout << "Empty list" << endl;
        return;
    }
    // list not empty
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // Traversing backward using prev pointer
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    // empty list
    Node *head = NULL;
    insert_at_head(head, 10);
    insert_at_head(head, 12);
    insert_at_head(head, 13);
    insert_at_head(head, 14);
    cout << "print forward direction ..." <<endl;
    printForward(head);
    cout << "print backward direction ..." << endl;
    printBackward(head);
    return 0;
}