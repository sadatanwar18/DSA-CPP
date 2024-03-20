#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        back = back1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }

};

Node* convertArr2DLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev-> next = temp;
        prev = temp;
    }
    return head;
}

void print(Node* head){
    while(head){
        cout<< head-> data << " ";
        head = head-> next;
    }
}

Node* deletionHead(Node* head){
    if(head == nullptr || head-> next == nullptr){
        return nullptr;
    }

    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev ->next = nullptr;
    delete(prev);
    return head;
}
Node* deletionTail(Node* head){
    if(head == nullptr || head->next == nullptr){
        return nullptr;
    }
    Node* tail = head;
    while(tail-> next != nullptr){
        tail = tail-> next;
    }
    Node* prev = tail-> back;
    prev->next = nullptr;
    tail-> back = nullptr;
    delete(tail);
    return head;
     
}

Node* deletionAtK(Node* head, int k){
    if(head == NULL){
        return NULL;
    }
    // first move to the kth node which need to delete
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        count++;
        if(count == k) break;
        temp = temp-> next;
    }
    Node* prev = temp->back;
    Node* front = temp-> next;

    if(prev == NULL && front == NULL){
        delete temp;
        return NULL;
    }
    else if(prev == NULL){
        return deletionHead(head);
    }
    else if(front == NULL){
        return deletionTail(head);
    }

    prev-> next = front;
    front-> back = prev;
    temp-> next = NULL;
    temp-> back = NULL;
    delete temp;
    return head;

}

void deleteNode(Node* temp){
    Node* prev = temp->back;
    Node* front = temp->next;

    if(front == NULL){
        prev->next = nullptr;
        temp->back = nullptr;
        delete temp;
        return;
    }
    prev-> next = front;
    front->back = prev;
    temp-> next = nullptr;
    temp-> back = nullptr;
    delete temp;
    //return;
}
int main(){
    vector<int> arr = {12,5,6,7};
    Node* head = convertArr2DLL(arr);
   // head = deletionHead(head);
   //head = deletionTail(head);
  // head = deletionAtK(head, 3);
     deleteNode(head->next->next);
    print(head);
}