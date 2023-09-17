#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next_node;
    
    //creting constructor
    Node(int data){
        this -> data = data;
        this -> next_node = NULL;
    }
};

void insertInHead(Node* &head, int d){

    Node* temp = new Node(d);
    temp -> next_node = head;
    head = temp;
    
}


void insertAttail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail -> next_node = temp;
    tail = temp;
    
}

void print_Node(Node* &head){
    Node* temp = head;
    while ( temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next_node;
    }
    cout<<endl;
}

int main(){

    Node* node = new Node(10);
    

    Node* head = node;
    Node* tail = node;
    print_Node(head);
    
    insertAttail(tail, 12);
    print_Node(head);
    insertAttail(tail, 15);
    print_Node(head);
    insertAttail(tail, 17);
    print_Node(head);

    return 0;
}
