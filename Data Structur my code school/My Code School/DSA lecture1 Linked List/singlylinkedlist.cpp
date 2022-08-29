#include<iostream>
using namespace std;

class Node
{
    public:
        int data;//data
        Node* next;//pointer to next Node
    public:
        Node(int data) {
            this->data = data;
            this->next = NULL; //NULL is a macro to 0 not a valid address
        }
        ~Node(){
            if(this->next != NULL){
                next = NULL;
            }
            delete next;
            cout << "Removing node with data " << this->data <<endl;
        }
};

void insert_at_head_beginning(Node* &head, int data){
    if(head == NULL){
        //empty list
        Node* newnode = new Node(data);
        head = newnode;
    } else {
        Node* newnode = new Node(data);
        newnode->next = head;
        head = newnode;
    }    
}

void insert_at_end(Node* &head, int data){
    //empty list
    if(head == NULL){
        Node* newnode = new Node(data);
        head = newnode;
    } else {
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        Node* newnode = new Node(data);
        temp->next = newnode;
    }
}

//head, data, pos
void insert_at_nthPosition(Node* &head, int data, int n){
    //first pos
    if(n==1){
        //insert_at_head_beginning(head, data);
        Node* newnode = new Node(data);
        newnode->next = head;
        head = newnode;
    } else {
        Node* temp = head;
        for(int i=1;i<n-1;i++){
            temp = temp->next;
        }
        //cout << temp->data << endl;
        Node* newnode = new Node(data);
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

//head, pos
void delete_at_nthPosition(Node* &head, int n){
    //empty list
    if(head == NULL){
        cout << "Empty List"<<endl;
        return;
    }
    //not empty list delete head node
    if(n==1){
        Node* temp = head;
        head = temp->next;
        delete temp; //delete this block from memnory
        return;
    }
    Node* temp = head;
    for(int i=1;i<n-1;i++){
        temp=temp->next;
    }
    Node* temp2 = temp->next;
    temp->next = temp2->next;
    delete temp2;
}

void reverse_linked_list(Node* &head){
    if(head == NULL){
        cout << "List is empty"<<endl;
    } else {
        Node* temp = head;
        Node* pre = NULL;
        while(temp != NULL){
            Node* nextNodeAddress = temp->next;
            temp->next = pre;
            pre = temp;
            temp = nextNodeAddress;
        }
        head=pre;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }cout << endl;
}

int main()
{
    //inserting at head
    Node* head = NULL;
    insert_at_head_beginning(head, 12);
    print(head);
    insert_at_head_beginning(head, 5);
    print(head);
    insert_at_head_beginning(head, 8);
    print(head);
    insert_at_head_beginning(head, 9);
    print(head);

    insert_at_end(head, 100);
    print(head);
    insert_at_end(head, 122);
    print(head);
    insert_at_end(head, 90);
    print(head);

    insert_at_nthPosition(head, 400, 3);
    print(head);
    insert_at_nthPosition(head, 40, 1);
    print(head);
    insert_at_nthPosition(head,100, 9);
    print(head);
    insert_at_nthPosition(head, 121, 10);
    print(head);
    insert_at_nthPosition(head, 900, 12);
    print(head);


    delete_at_nthPosition(head, 1);
    print(head);

    delete_at_nthPosition(head, 1);
    print(head);

    delete_at_nthPosition(head, 9);
    print(head);

    
    delete_at_nthPosition(head, 9);
    print(head);

    reverse_linked_list(head);
    print(head);


    return 0;
}