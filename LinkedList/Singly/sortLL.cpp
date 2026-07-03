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
        Node* merge(Node* left, Node* right){
            Node* d = new Node(-1);

            Node* temp = d;

            while(left!=NULL && right!=NULL){
                if(left->data <= right->data){
                    temp->next = left;
                    left = left->next;
                } else {
                    temp->next = right;
                    right = right->next;
                }
                temp = temp->next;
            }
            if (left!=NULL){
                temp->next = left;
            } else {
                temp->next = right;
            }

            return d->next;
        }

        Node* getMid(Node* head){
            if (head == nullptr || head->next == nullptr) {
                return head;
            }

            Node* slow = head;
            Node* fast = head->next;
            while (fast != NULL && fast->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
            }
            return slow;
        }

        Node* sortLL(Node* head){
            if (head == NULL || head->next == NULL){
                return head;
            }

            Node* mid = getMid(head);

            Node* right = mid->next;
            mid->next = NULL;
            Node* left = head;

            left = sortLL(left);
            right = sortLL(right);

            return merge(left,right);
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
    
    head = sol.sortLL(head);
    cout << "Sorted List" << endl;
    sol.printList(head);
    cout << "------------------------------------------" << endl;
    return 0;
}