#include <bits/stdc++.h>

using namespace std;

struct Node{
    
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }

    Node(int val, Node* n){
        data = val;
        next = n;
    }
};

class Solution{
    public:
        Node* insertAtHead(Node* head, int newData){
            Node* newNode = new Node(newData,head);
            return newNode;
        }

        Node* deleteLast(Node* head){
            if (head == NULL || head->next == NULL){
                delete head;
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
    head->next = new Node(3);

    cout << "Original List" << endl;
    sol.printList(head);

    head = sol.insertAtHead(head,2);

    cout << "After Insertion" << endl;
    sol.printList(head);

    head = sol.deleteLast(head);
    cout << "After Deletion" << endl;
    sol.printList(head);

    return 0;
}