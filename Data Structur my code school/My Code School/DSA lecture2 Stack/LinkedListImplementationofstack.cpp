#include <iostream>
using namespace std;

class Stack
{
private:
    class Node
    {
    public:
        int data;
        Node *link;

    public:
        Node(int data)
        {
            this->data = data;
            this->link = NULL;
        }
        ~Node()
        {
            if (this->link != NULL)
            {
                link = NULL;
            }
            cout << "Remove node with the value " << this->data << endl;
            delete link;
        }
    };

    Node *Top;

public:
    Stack()
    {
        Top = NULL;
    }
    // push at head
    void push(int data)
    {
        // Create a new node
        Node *newnode = new Node(data);
        newnode->link = Top;
        Top = newnode;
    }
    // pop
    void pop()
    {
        if (Top == NULL)
        {
            cout << "Empty stack.."
                 << " ";
            return;
        }
        Node *temp = Top;
        Top = temp->link;
        delete temp;
    }
    // Top
    int top()
    {
        if (Top == NULL)
        {
            cout << "Error Empty stack.." << endl;
        }
        else
        {
            return Top->data;
        }
    }

    // print
    void print()
    {
        Node *temp = Top;
        if (temp == NULL)
        {
            cout << "Empty Stack..." << endl;
            return;
        }
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->link;
        }
        cout << endl;
    }

    bool isEmpty()
    {
        if (Top == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    Stack *stack = new Stack();

    stack->print();
    stack->push(10);
    stack->print();
    stack->push(20);
    stack->print();
    stack->push(40);
    stack->print();
    stack->push(60);
    stack->print();
    stack->push(90);
    stack->print();
    stack->push(12);
    stack->print();

    stack->pop();
    stack->print();

    stack->pop();
    stack->print();
    stack->pop();
    stack->print();

    stack->pop();
    stack->print();

    cout << "top value is " << stack->top() << endl;

    stack->pop();
    stack->pop();

    stack->print();
    if (stack->isEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is not Empty" << endl;
    }

    cout << "top value is " << stack->top() << endl;

    stack->push(10);
    stack->push(20);
    stack->push(40);
    stack->push(50);
    stack->push(90);
    stack->push(100);
    stack->print();

    if (stack->isEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is not Empty" << endl;
    }

    return 0;
}