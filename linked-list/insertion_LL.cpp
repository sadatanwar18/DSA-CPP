#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node( int data1){
        data = data1;
        next = nullptr;
    }
};

Node* arrayToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i< arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover-> next = temp;
        mover = temp;
    }
    return head; 
}




void print(Node* head){
   // Node* temp = head;
    while(head != NULL){
        cout<< head-> data<< " ";
        head = head-> next;
    } 
    cout<< endl;
}

Node* insertHead(Node* head, int val){
    Node* temp = new Node(val, head);
    return temp;
}

Node* insertTail(Node* head, int val){
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head;
    while(temp-> next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}

Node* insertAtK(Node* head, int val, int k) {
    // If the linked list is empty and k is 1, insert the new node as the head
    if (head == NULL) {
        if (k == 1)
            return new Node(val);
        else
            return head;
    }

    // If k is 1, insert the new node at the beginning of the linked list
    if (k == 1)
        return new Node(val, head);

    int cnt = 0;
    Node* temp = head;

    // Traverse the linked list to find the node at position k-1
    while (temp != NULL) {
        cnt++;
        if (cnt == k - 1) {
            // Insert the new node after the node at position k-1
            Node* newNode = new Node(val, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }

    return head;
}


Node* insertBeforeValue(Node* head, int el, int val ) {
    if (head == NULL) {
        return NULL;
    }

    
    if (head-> data == val)
        return new Node(el, head);

   
    Node* temp = head;
    while (temp->next != NULL) {
        
        if (temp->next->data == val) {
            Node* newNode = new Node(el, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }

    return head;
}

int main(){
    vector<int> arr = {12,5,8,7};
    Node* head = arrayToLL(arr);
    //head = insertHead(head,10);
    // head = insertTail(head,10);
    
    // head = insertAtK(head,10,3 );
    head = insertBeforeValue(head,100,8);
    print(head);
     //head = insertHead(head,10);

}