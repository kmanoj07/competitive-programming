#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, int data)
{
    // linked list empty
    if (head == NULL)
    {
        // create a new node
        Node *newnode = new Node(data);
        head = newnode;
        return;
    }
    // linked list is not empty
    // Create a newnode
    Node *newnode = new Node(data);
    newnode->next = head;
    head = newnode;
}

void insert_at_any_pos(Node *&head, int data, int pos)
{
    // linked list empty
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        return;
    }
    // linked list not empty
    if (pos == 1)
    {
        Node *newnode = new Node(data);
        newnode->next = head;
        head = newnode;
    }
    else
    {
        // loop to n-1th pos
        Node *temp = head;
        for (int i = 0; i < pos - 2; i++)
        {
            temp = temp->next;
        }
        // create a new node
        Node *newnode = new Node(data);
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void print(Node *&head)
{
    // empty list
    if (head == NULL)
    {
        cout << "List is empty..." << endl;
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Iterative way of reverse the linked the list
void reverseLinkedList(Node *&head)
{
    // empty list
    if (head == NULL)
    {
        cout << "List is empty..." << endl;
        return;
    }
    Node *prev = NULL;
    Node *current = head;
    Node *next;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}

// using recursion print the linked list
void recursivePrint(Node *&head)
{
    Node *temp = head;
    // base case
    if (temp == NULL)
    {
        return;
    }
    // induction process
    //  //head recursion
    //  cout << head->data << " ";
    //  recursivePrint(temp->next);
    // tail recursion
    recursivePrint(temp->next);
    cout << head->data << " ";
}

// Reverse a linked list using recursion
void recursiveReversePrint(Node* p, Node* &head)
{
    // base case
    if (p->next == NULL)
    {
        head = p;
        return;
    }
    recursiveReversePrint(p->next, head);
    Node *temp = p->next;
    temp->next = p;
    p->next = NULL;
}

int main()
{

    Node *head = NULL;
    // print(head);
    insert_at_head(head, 10);
    // print(head);
    insert_at_head(head, 12);
    // print(head);
    insert_at_head(head, 14);
    // print(head);
    insert_at_head(head, 16);
    // print(head);
    insert_at_head(head, 20);
    // print(head);

    // reverseLinkedList(head);
    // print(head);
    //print(head);
    recursiveReversePrint(head, head);
    print(head);
    return 0;
}