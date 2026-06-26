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
        Node* reverseLL(Node* head){
            if (head == nullptr || head->next == nullptr) return head;
            Node* prev = nullptr;
            Node* curr = head;
            while(curr){
                Node* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            head = prev;
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
    head->next->next = new Node(4);
    head->next->next->next = new Node(6);
    head->next->next->next->next = new Node(7);

    cout << "------------------------------------------" << endl;
    
    cout << "Original List" << endl;
    sol.printList(head);
    cout << "------------------------------------------" << endl;
    
    head = sol.reverseLL(head);
    cout << "Reversed List" << endl;
    sol.printList(head);
    cout << "------------------------------------------" << endl;
    return 0;
}