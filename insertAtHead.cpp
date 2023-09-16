#include<bits/stdc++.h>
using namespace std;

class Node{
    
public:
    int data;
    Node* next_node = NULL;

    //create constructor
    Node(int data){
        this -> data = data;
        this -> next_node = NULL;
    }

};

void insertAtHear(Node* &head, int dta){
    Node* temp = new Node(dta);
    temp -> next_node = head;
    head = temp;
}

void print_Node(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next_node;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);
    
    //head pointed to node1
    Node* head = node1;
    print_Node(head);

    insertAtHear(head, 12);
    print_Node(head);

    insertAtHear(head, 19);
    print_Node(head);

    insertAtHear(head, 23);
    print_Node(head);

    insertAtHear(head, 9);
    print_Node(head);

    
}
