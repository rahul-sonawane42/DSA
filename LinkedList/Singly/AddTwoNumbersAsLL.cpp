// Problem Statement: Add two numbers represented as Linked Lists.

#include<bits/stdc++.h>
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
class Solution {
public:
    void insertNode(Node* &head, int val) {
        Node* newNode = new Node(val);
        
        if (head == NULL) {
            head = newNode;
            return;
        }
        
        Node* temp = head;
        while (temp->next != NULL) temp = temp->next;
        
        temp->next = newNode;
    }

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

    Node* addTwoNum(Node* l1, Node* l2){
        l1 = reverseLL(l1);
        l2 = reverseLL(l2);

        Node* dummy = new Node(0);
        Node* temp = dummy;
        int carry = 0;
        while (l1 != NULL || l2!= NULL || carry)
        {
            int sum = 0;
            if (l1 != NULL){
                sum += l1->data;
                l1 = l1->next;
            }

            if (l2 != NULL){
                sum += l2->data;
                l2 = l2->next;
            }
            
            sum += carry;
            carry = sum / 10;
            Node* newnode = new Node(sum%10);
            temp->next = newnode;
            temp = temp->next;
        }
        dummy->next = reverseLL(dummy->next);
        return dummy->next;
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
    Node* l1 = NULL;
    sol.insertNode(l1, 9);
    sol.insertNode(l1, 9);
    sol.insertNode(l1, 9);
    
    cout << "List1: ";
    sol.printList(l1);

    Node* l2 = NULL;
    sol.insertNode(l2, 9);
    sol.insertNode(l2, 9);
    sol.insertNode(l2, 9);
    
    cout << "List2: ";
    sol.printList(l2);
    Node* head = sol.addTwoNum(l1,l2);
    cout << "After adding: ";
    sol.printList(head);
    return 0;
}
