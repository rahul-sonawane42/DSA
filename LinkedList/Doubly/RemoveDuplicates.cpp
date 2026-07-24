// Problem Statement: Given the head of a doubly linked list with its values sorted in non-decreasing order. 
// Remove all duplicate occurrences of any value in the list so that only distinct values are present in the list.

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

        Node* deleteDup(Node* head){
            Node* current = head;

            while (current != nullptr && current->next != nullptr) {
                while (current->next != nullptr && current->data == current->next->data){
                    Node* temp = current->next;
                    current->next = current->next->next;
                    delete temp;
                }

                current = current->next;
            }

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

    Node* head = new Node(1);
    cout << "------------------------------------------" << endl;
    
    cout << "Original List" << endl;
    sol.printList(head);

    head = sol.insertAtEnd(head,1);
    head = sol.insertAtEnd(head,1);
    head = sol.insertAtEnd(head,1);
    head = sol.insertAtEnd(head,3);
    head = sol.insertAtEnd(head,3);
    head = sol.insertAtEnd(head,3);
    head = sol.insertAtEnd(head,3);
    head = sol.insertAtEnd(head,4);
    head = sol.insertAtEnd(head,4);
    head = sol.insertAtEnd(head,4);
    head = sol.insertAtEnd(head,4);
    head = sol.insertAtEnd(head,5);
    cout << "------------------------------------------" << endl;
    
    cout << "After Insertion" << endl;
    sol.printList(head);

    head = sol.deleteDup(head);

    cout << "------------------------------------------" << endl;
    
    cout << "After Deletion" << endl;
    sol.printList(head);
    return 0;
}
