//Problem Statement: Given the head of a singly linked list representing a positive integer number. Each node of the linked list represents a digit of the number, with the 1st node containing the leftmost digit of the number and so on. The task is to add one to the value represented by the linked list and return the head of a linked list containing the final value.
//The number will contain no leading zeroes except when the value represented is zero itself.
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

    Node* add1ToNum(Node* head){
        head = reverseLL(head);

        int carry = 1;
        Node* temp = head;
        while (temp && carry)
        {
            int sum = temp->data + carry;
            temp->data = sum % 10;
            carry = sum / 10;

            if (!temp->next && carry){
                temp->next = new Node(carry);
                carry = 0;
            }
            temp = temp->next;
        }
        head = reverseLL(head);
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
    Node* head = NULL;
    sol.insertNode(head, 9);
    sol.insertNode(head, 9);
    sol.insertNode(head, 9);
    
    cout << "List1: ";
    sol.printList(head);
    
    head = sol.add1ToNum(head);
    cout << "After adding 1: ";
    sol.printList(head);
    return 0;
}
