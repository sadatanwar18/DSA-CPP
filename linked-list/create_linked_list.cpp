#include<iostream>
#include <vector>

using namespace std;
class Node {
    public:  // access modifier
    int data; // data value
    Node* next; // pointer to the next value


    public:
    // constructor
    Node (int data1, Node* next1){
        data = data1;  // initialize data with provided value
        next = next1; // initialize next
    }

    Node(int data1){
        data = data1;
        next = nullptr;  // initialize next as null 
    }
};

// conver array to linked list
Node* convertArray2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// find length of the linked list

int lengthofLL(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp){
        temp = temp-> next;
        count++;
    }
    return count;
}

// search on a linked list

int checkifpresent(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val) return 1;
        temp = temp-> next;
    }
    return 0;
}

int main(){
    vector<int> arr = {2,3,4,5};
    Node* y = new Node(arr[3]);
    cout<<y << endl;
    cout<< y-> data << endl;
    Node* head = convertArray2LL(arr);
    cout<< head-> data;
    cout<< endl;

    // traverse in linked list

    Node* temp = head;
    while(temp){
        cout<< temp-> data<< " ";
        temp = temp->next;
    }
    cout<< endl;

    cout<< lengthofLL(head);
    cout<< endl;
    cout<< checkifpresent(head, 5);
}



