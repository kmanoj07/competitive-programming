#include<iostream>
#include<stack>
#include<iomanip>
#include<ios>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    public:
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

//insert at nt Position
void insert_at_nth_pos(Node* &head, int data, int pos) {
    //empty list
    if(head == NULL) {
        Node* newnode = new Node(data);
        head = newnode;
        return;
    }
    if(pos == 1) { //inser at head
        Node* newnode = new Node(data);
        newnode->next = head;
        head = newnode;
        return;
    }
    //at any position
    Node* temp = head;
    //loop till n-1 positio as we are the 1 positio     10->20->30->NULL
    for(int i=1;i<pos-1;i++){
        temp = temp->next;
    }
    Node* newnode = new Node(data);
    newnode->next = temp->next;
    temp->next = newnode;
}

//print 
void print(Node* &head) {
    if(head == NULL){
        cout << "Empty List...."<<endl;
        return; 
    }
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }cout << endl;
}

void reverseLinkedList_explicit_stack(Node* &head){
   // cout << "Entered"<<endl;
    stack<Node*> s;
    //traverese the linked list and push the addressee to stack
    Node* temp = head;
    while(temp != NULL){
        s.push(temp);
        temp = temp->next;
    }

    // cout <<setw(5) << setfill('-') << "*" << endl;
    // while(!s.empty()){
    //     Node* node = s.top();
    //     cout << "Data :" << node->data << " next :" << node->next << endl;
    //     s.pop(); 
    // }
    // cout<< setw(5) << setfill('-') << "*" <<endl;

    Node* node = s.top();
    head = node;
    //cout << "Data :" << head->data << " next :" << head->next << endl; 
    s.pop();
    while(!s.empty()){
        node->next = s.top();
        s.pop();
        node = node->next;
    }
    node->next = NULL;
}




int main(){
    Node* head = NULL;
    insert_at_nth_pos(head, 10, 1);
    print(head);

    insert_at_nth_pos(head, 12, 2);
    print(head);
    

    insert_at_nth_pos(head, 13, 3);
    print(head);
    

    insert_at_nth_pos(head, 14, 4);
    print(head);
    
    insert_at_nth_pos(head, 100, 2);
    print(head);

    reverseLinkedList_explicit_stack(head);
    cout << head->data << endl;
    print(head);
    
    
    return 0;
}