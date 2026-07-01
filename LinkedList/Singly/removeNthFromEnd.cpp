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
        Node* removeNthFromEnd(Node* head, int n){
            Node* d = new Node(0,head);
            Node* slow = d;
            Node* fast = d;

            for (int i = 0; i<=n; i++){
                fast = fast->next;
            }

            while (fast != NULL){
                slow = slow->next;
                fast = fast->next;
            }

            slow->next = slow->next->next;
            return d->next;
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

int main(){
    Solution sol;

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "------------------------------------------" << endl;
    
    cout << "Linked List" << endl;
    sol.printList(head);
    cout << "------------------------------------------" << endl;

    head = sol.removeNthFromEnd(head,3);

    cout << "LinkedList After Removal " << endl;
    sol.printList(head);
}