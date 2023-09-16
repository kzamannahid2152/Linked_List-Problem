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

int main(){
    Node* node1 = new Node(10);
    cout << node1 -> data <<  endl;
    cout << node1 -> next_node << endl;
}