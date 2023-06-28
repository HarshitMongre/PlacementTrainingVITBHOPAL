// FIND MIDDLE NODE ELEMENT :
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    void insertAtEnd(int num) {
        if (head == NULL) {
            head = new Node(num);
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }

            Node* newNode = new Node(num);
            temp->next = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void findMiddleNode() {
        if (head == NULL) {
            cout << "Empty list" << endl;
            return;
        }

        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        cout << "Middle Node: " << slow->data << endl;
    }
};

int main() {
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
    ll.findMiddleNode();

    return 0;
}
