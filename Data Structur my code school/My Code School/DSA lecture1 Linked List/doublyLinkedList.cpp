#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* prev;
        Node* next;
    public:
        Node(int data){
            this->data = data;
            this->prev = NULL;
            this->next = NULL;
        }
};

void insertAtHead(Node* &head, int data) {
    //list empty
    if(head == NULL){
        //create new node
        Node* newnode = new Node(data);
        head = newnode;
        return;
    }
    Node* newnode = new Node(data);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insertAttail(Node* &head, int data){
    //list empty
    if(head == NULL){
        Node* newnode = new Node(data);
        head = newnode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    //Create a new node
    Node* newnode = new Node(data);
    temp->next = newnode;
    newnode->prev = temp;
}

void insertAtnthPosition(Node* &head, int data, int n) {
    //empty list
    if(head == NULL){
        //create a new node
        Node* newnode = new Node(data);
        head = newnode;
        return;
    }
    if(n == 1){ //inserting at head
        //create a new node
        //insert_at_head_beginning(head, data);
        cout << "The position "<< n << endl;
        Node* newnode = new Node(data);
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
        return;
    }
        Node* temp = head;
        //move to that position n-1
        for(int i=1;i<n-1;i++){
            temp = temp->next;
        }
        Node* nextAddress = temp->next;
        //create a new node
        Node* newnode = new Node(data);
        temp->next = newnode;
        newnode->prev = temp;
        newnode->next = nextAddress; 
    
}



//traversing
void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }cout<<endl;
}

//printing linked list in reverse
void printReverse(Node* &head) {
    Node* temp = head;
    if(temp == NULL){
        cout << "Empty list";
        return;
    }
    while(temp->next != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }cout << temp->data;
    cout << endl;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->prev;
    }cout << endl;
}



int main()
{
    Node* head = NULL;
    insertAtHead(head, 12);
    insertAtHead(head, 14);
    insertAtHead(head, 16);
    insertAtHead(head, 18);
    insertAtHead(head, 19);
    print(head);
    insertAttail(head, 300);
    print(head);


    //insertAtAnyPosition
    insertAtnthPosition(head, 12, 3);
    print(head);
    insertAtnthPosition(head, 400, 7);
    print(head);
    insertAtnthPosition(head, 500, 9);
    print(head);
    insertAtnthPosition(head, 99,2);
    print(head);
    insertAtnthPosition(head, 990,11);
    print(head);
    insertAtnthPosition(head, 800, 1);
    print(head);
    cout << "Printing reverse doubly linked list! "<<endl;;


    //printing the linked in reverse
    printReverse(head);


    int b = 2;
    {
        int b = 4;
        cout << b;
    }
    cout << endl;
    cout << b;
    
    return  0;
}