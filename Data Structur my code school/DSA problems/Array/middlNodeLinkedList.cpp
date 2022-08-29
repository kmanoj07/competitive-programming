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
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        return;
    }

    Node *newnode = new Node(data);
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node *&head, int data)
{

    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    Node *newnode = new Node(data);
    temp->next = newnode;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *getMiddleNode(Node *head, int middleNode, int totalNumNode)
{
    cout << middleNode << endl;
    Node *temp = head;

    if (totalNumNode % 2 != 0)
    {
        for (int i = 1; i <= middleNode; i++)
        {
            temp = temp->next;
        }
    }
    else
    {
        for (int i = 1; i < middleNode; i++)
        {
            temp = temp->next;
        }
    }

    return temp;
}

Node *middleNode(Node *head)
{

    int totalNumNode = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        totalNumNode += 1;
        temp = temp->next;
    }

    cout << totalNumNode << endl;
    // even
    if (totalNumNode % 2 == 0)
    {
        return getMiddleNode(head, (totalNumNode / 2) + 1, totalNumNode);
    }
    else
    {
        return getMiddleNode(head, (totalNumNode / 2), totalNumNode);
    }
}

int main()
{
    Node *head = NULL;

    insert_at_head(head, 1);
    insert_at_head(head, 2);
    insert_at_head(head, 3);
    insert_at_head(head, 4);
    insert_at_head(head, 5);
    print(head);
    insert_at_tail(head, 10);
    print(head);

    return 0;
}