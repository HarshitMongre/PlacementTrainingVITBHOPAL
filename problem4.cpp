// DELETE ALTERNATE NODE OF A LL:
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        this->data = val;
        this->next = NULL;
    }

};

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head = NULL;
    }

    void insertAtEnd(int val){

        Node* temp = head;
        Node* newNode = new Node(val);
        if(head == NULL){

            head = newNode;
            return;
        }

        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout <<"NULL" << endl;

    }

    void deleteAlternate() {
    Node* temp = head;
    while (temp != NULL && temp->next != NULL) {
        Node* deleteNode = temp->next;
        temp->next = temp->next->next;
        free(deleteNode);
        temp = temp->next;
    }
}


};
int main(){
  LinkedList ll;
    ll.insertAtEnd(12);
    ll.insertAtEnd(23);
    ll.insertAtEnd(143);
     ll.insertAtEnd(42);
    ll.insertAtEnd(23);
    ll.insertAtEnd(1943);
     ll.insertAtEnd(1200);
    ll.insertAtEnd(2375);
    ll.insertAtEnd(1434);
    ll.display();
    ll.deleteAlternate();

    ll.display();
}