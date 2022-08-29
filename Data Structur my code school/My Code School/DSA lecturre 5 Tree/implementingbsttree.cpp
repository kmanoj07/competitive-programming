#include <iostream>
using namespace std;

//void insert(BstNode* &, int);
//bool search(BstNode* &, int);
class BstNode
{
public:
    int data;
    BstNode *left;
    BstNode *right;

public:
    BstNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

//This function will create a new for BST and return the address
BstNode* GetNewBstNode(int data)
{
    // create a new node dynamically in heap section of memory
    BstNode *newnode = new BstNode(data);
    return newnode;
}

//insert a node/element in BST (Binary search tree)
void insert(BstNode* &rootPtr, int data)
{
    // empty BstTree
    if (rootPtr == NULL)
    {
        BstNode *newnode = GetNewBstNode(data);
        rootPtr = newnode;
        return;
    }
    // if there is already a node in BST tree
    // Create a newnode
    // if data to be insert is less than the root data -> move to lest - no child in left - insert at left
    if (data <= rootPtr->data)
    {
        return insert(rootPtr->left,data);
    }
    else
    {
        return insert(rootPtr->right, data);
    }
}

//searching an element in BST (Binary Search Tree)
bool search(BstNode* &rootPtr, int data)
{
    //empty BST tree 
    if(rootPtr == NULL)
    {
        return false;
    }
    if(data == rootPtr->data)
    {
        return true;
    }
    if(data <= rootPtr->data)
    {
        return search(rootPtr->left, data);
    } 
    else
    {
        return search(rootPtr->right, data);
    }
}

//print BST (Binary Search Tree)
// void print(BstNode* &rootPtr)
// {
//     BstNode* temp = rootPtr;
//     cout << temp->data << " ";
//     return print(temp->left);
//     return print(temp->right);
// }

int main()
{
    // Empty bst treee
    BstNode *rootPtr = NULL;
    // lets insert data in empty bst tree
    insert(rootPtr, 15);

    insert(rootPtr, 10);
    insert(rootPtr, 20);
    insert(rootPtr, 8);
    insert(rootPtr, 12);
    insert(rootPtr, 17);
    insert(rootPtr, 25);

   // print(rootPtr);

    int number;
    cout << "Enter a number to be searched\n";
    cin >> number;
    if (search(rootPtr, number))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}