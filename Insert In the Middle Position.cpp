//insert to the Middle position
void insertAtMiddlle(Node* &head, int position, int d){
    Node* temp = head;
    int count=1;

    while(count < position){
        temp = temp -> next_node; // temp will be increas
        count++; 
    }

    // creating a node for data belongs to d
    Node* NodetoInsert = new Node(d);
    NodetoInsert -> next_node = temp ->next_node;
    temp -> next_node =  NodetoInsert;
}
