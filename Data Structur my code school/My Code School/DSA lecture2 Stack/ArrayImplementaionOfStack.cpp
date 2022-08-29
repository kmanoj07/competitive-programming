#include <iostream>
//#define MAX_SIZE 101;
using namespace std;

class Stack
{
private:
    int A[101];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    // push
    void push(int data)
    {
        // stack overflow
        if (top == 100 - 1)
        {
            cout << "Error Stack overflow..." << endl;
            return;
        }
        top = top + 1;
        A[top] = data;
    }
    // pop
    void pop()
    {
        // empty stack
        if (top == -1)
        {
            cout << "Error Stack is empty or underflow.." << endl;
            return;
        }
        top = top - 1;
    }
    // top
    int Top()
    {
        // empty stack
        if (top == -1)
        {
            cout << "Error Stack is empty.." << endl;
            return -1;
        }
        return A[top];
    }

    // isEmpty ()
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // print
    void print()
    {
        if (top == -1)
        {
            cout << "Error empty stack.." << endl;
            return;
        }
        int i;
        for (i = 0; i <= top; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack stack;
    stack.print();
    stack.push(20);
    stack.print();
    stack.push(10);
    stack.print();
    stack.push(40);
    stack.print();
    stack.push(90);
    stack.print();
    stack.push(100);
    stack.print();
    stack.push(200);
    stack.print();

    stack.pop(); // 200
    stack.print();
    stack.push(200);
    stack.print();

    stack.pop(); // 200
    stack.pop(); // 100
    stack.pop(); // 90
    stack.print();

    if (stack.isEmpty())
    {
        cout << "Empty " << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    stack.pop(); // 40
    stack.print();
    int topEl = stack.Top();
    cout << "top element " << topEl << endl;

    stack.pop(); // 10
    stack.print();

    if (stack.isEmpty())
    {
        cout << "Empty " << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    stack.pop();
    if (stack.isEmpty())
    {
        cout << "Empty " << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    stack.print();

    return 0;
}