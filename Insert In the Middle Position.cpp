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

// //insert to the Middle position
// void insertAtMiddlle(Node* &tail, Node* &head, int position, int d){

//     //insert at the first node 
//     if(position == 1 ){
//         insertInHead(head, d);
//         return;
//     }

//     Node* temp = head;
//     int count=1;

//     while(count < position){
//         temp = temp -> next_node; // temp will be increas
//         count++; 
//     }

//     //inseting at last position
//     if(temp -> next_node == NULL){
//         insertAttail(tail, d);
//         return;
//     }

//     // creating a node for data belongs to d
//     Node* NodetoInsert = new Node(d);
//     NodetoInsert -> next_node = temp ->next_node;
//     temp -> next_node =  NodetoInsert;
// }

