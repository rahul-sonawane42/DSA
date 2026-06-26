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
        int getMid(Node* head){
            Node* slow = head;
            Node* fast = head;
            while (fast != NULL && fast->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
            }
            return slow->data;
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
    
    cout << "Mid Element is " << sol.getMid(head) << endl;
    
    cout << "------------------------------------------" << endl;
    return 0;
}