// Problem Statement: Given a linked list containing only 0's, 1's, and 2's, sort the linked list by rearranging the links (not by changing the data values).

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
        Node* sort012LL(Node* head){
            Node* zeroHead = new Node(-1), *zeroTail = zeroHead;
            Node* oneHead = new Node(-1), *oneTail = oneHead;
            Node* twoHead = new Node(-1), *twoTail = twoHead;

            Node* temp = head;
            while(temp != NULL){
                if (temp->data == 0){
                    zeroTail->next = temp;
                    zeroTail = temp;
                } else if (temp->data == 1){
                    oneTail->next = temp;
                    oneTail = temp;
                } else {
                    twoTail->next = temp;
                    twoTail = temp;
                }
                temp = temp->next;
            }
            zeroTail->next = oneHead->next ? oneHead->next : twoHead->next;
            oneTail->next = twoHead->next;
            twoHead->next = NULL;
            return zeroHead->next;
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
    head->next = new Node(2);
    head->next->next = new Node(0);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(0);
    head->next->next->next->next->next = new Node(2);

    cout << "------------------------------------------" << endl;
    
    cout << "Original List" << endl;
    sol.printList(head);
    cout << "------------------------------------------" << endl;
    
    head = sol.sort012LL(head);
    cout << "Sorted List" << endl;
    sol.printList(head);
    cout << "------------------------------------------" << endl;
    return 0;
}