#include <iostream>
#include <cmath>
using namespace std;

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

// create node and return the address of the node from the heap memory/dynamically allocated memory
BstNode *getNewNode(int data)
{
    BstNode *newnode = new BstNode(data);
    return newnode;
}

// inser the element/node in BST tree
void insert(BstNode *&rootPtr, int data)
{
    // empty BstTree
    if (rootPtr == NULL)
    {
        BstNode *newnode = getNewNode(data);
        rootPtr = newnode;
        return;
    }
    // if there is already a node in BST tree
    // Create a newnode
    // if data to be insert is less than the root data -> move to lest - no child in left - insert at left
    if (data <= rootPtr->data)
    {
        return insert(rootPtr->left, data);
    }
    else
    {
        return insert(rootPtr->right, data);
    }
}

// search in BST
bool search(BstNode *rootptr, int data)
{
    if (rootptr == NULL)
    {
        return false;
    }
    if (rootptr->data == data)
    {
        return true;
    }
    if (data <= rootptr->data)
    {
        return search(rootptr->left, data);
    }
    else
    {
        return search(rootptr->right, data);
    }
}

// finding min element in the BST
// Since it is a BST to find the minimum move far left as possible
// Two approach
// iterative
int find_min_iterative(BstNode *rootPtr)
{
    // handle if the binary search tree is empty
    if (rootPtr == NULL)
    {
        cout << "Empty tree\n";
        return -1;
    }
    BstNode *current = rootPtr;
    while (current->left != NULL)
    {
        current = current->left;
    }
    // we reach at the left node as far as possible
    // As per the BST restriction that for all node the values of the left subtree is lesser
    return current->data;
}

// finding max element in the BST
// Since it is a BST to find the maximum move far rigth as possible
// Two approach
// iterative
int find_max_iterative(BstNode *rootPtr)
{
    // handle if the binary search tree is empty
    if (rootPtr == NULL)
    {
        cout << "Empty tree\n";
        return -1;
    }
    BstNode *current = rootPtr;
    while (current->right != NULL)
    {
        current = current->right;
    }
    // we reach at the left node as far as possible
    // As per the BST restriction that for all node the values of the left subtree is lesser
    return current->data;
}

// recursive approach
// find min
int findMinrecursive(BstNode *rootptr)
{
    // base case
    // smallest solution
    if (rootptr->left == NULL)
    {
        return rootptr->data;
    }
    // inductive step
    return findMinrecursive(rootptr->left);
}

// recursive approach
// find max
int findMaxrecursive(BstNode *rootptr)
{
    // base case
    // smallest solution
    if (rootptr->right == NULL)
    {
        return rootptr->data;
    }
    // inductive strp
    return findMinrecursive(rootptr->right);
}

//find height of binary tree
int findHeight(BstNode* rootPtr)
{
    if(rootPtr == NULL)
    {
        return -1;
    }
    //inductive step
    int H_left_subtree = findHeight(rootPtr->left);
    int H_right_subtree = findHeight(rootPtr->right);
    return max(H_left_subtree, H_right_subtree) + 1;
}

int main()
{
    // empty
    BstNode *rootPtr = NULL;
    insert(rootPtr, 15);
    insert(rootPtr, 10);
    insert(rootPtr, 20);
    insert(rootPtr, 8);
    insert(rootPtr, 12);
    insert(rootPtr, 17);
    insert(rootPtr, 25);
    // int number;
    // cout << "Enter number to search\n";
    // cin >> number;
    // if (search(rootPtr, number))
    // {
    //     cout << "Found\n";
    // }
    // else
    // {
    //     cout << "Not Found\n";
    // }

    // find min element in the BST
    cout << "Iterative: Min value " << find_min_iterative(rootPtr);
    cout << endl;

    // find max element in the BST 
    cout << "Iterative: max value " << find_max_iterative(rootPtr);
    cout << endl;

     // find min element in the BST
    cout << "Recursive: Min value " << findMinrecursive(rootPtr);
    cout << endl;

    // find max element in the BST 
    cout << "Recursive: max value " << findMaxrecursive(rootPtr);
    cout << endl;

    cout<< "Height of binary tree " << findHeight(rootPtr);
    cout<<endl;

    return 0;
}