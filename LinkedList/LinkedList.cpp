#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

class Solution{
    public:
        Node* insertAtHead(Node* head, int newData){
            Node* newNode = new Node(newData,head);
            return newNode;
        }

        void printList(Node* head){
            Node* temp = head;
            while (temp != nullptr){
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

    return 0;
}