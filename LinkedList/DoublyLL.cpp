#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int data1, Node* next1, Node* prev1) {
        data = data1;
        next = next1;
        prev = prev1;
    }

    Node(int data1) {
        data = data1;
        next = NULL;
        prev = NULL;
    }
};

class Solution {
    public:
        Node* insertAtEnd(Node* head, int newData){
            Node* newNode = new Node(newData);    
            if (head == NULL){
                head = newNode;
                return head;
            }
            Node* temp = head;
            while (temp->next != NULL){
                temp = temp->next;
            }
            temp-> next = newNode;
            newNode-> prev = temp;
            return head;
        }

        Node* deleteLast(Node* head){
            if (head == NULL || head->next == NULL){
                return NULL;
            }
            Node* temp = head;
            while (temp->next->next != NULL){
                temp = temp->next;
            }
            delete temp->next;
            temp->next = NULL;
            return head;
        }

        void printList(Node* head){
            Node* temp = head;
            while (temp != NULL){
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
};

int main() {
    Solution sol;

    Node* head = new Node(5);
    cout << "------------------------------------------" << endl;
    
    cout << "Original List" << endl;
    sol.printList(head);

    sol.insertAtEnd(head,2);
    sol.insertAtEnd(head,3);
    sol.insertAtEnd(head,4);
    cout << "------------------------------------------" << endl;
    
    cout << "After Insertion" << endl;
    sol.printList(head);

    sol.deleteLast(head);
    cout << "------------------------------------------" << endl;
    
    cout << "After Deletion" << endl;
    sol.printList(head);

    return 0;
}
