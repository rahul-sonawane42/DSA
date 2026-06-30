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
        Node* head;
        Node* tail;
        
        Solution() {
            head = NULL;
            tail = NULL;
        }
        void insertAtLast(int val){
            Node* newnode = new Node(val);
            if (head == NULL){
                head = newnode;
                tail = newnode;
            } else {
                tail->next = newnode;
                tail = newnode;
            }
        }

        Node* SegregatetoOddEven(){
            Node* oddHead = new Node(-1), *oddTail = oddHead;
            Node* evenHead = new Node(-1), *evenTail = evenHead;

            Node* curr = head, *temp;

            while (curr){
                temp = curr;
                curr = curr->next;
                temp->next = NULL;

                if (temp->data % 2 != 0){
                    oddTail->next = temp;
                    oddTail = temp;
                } else {
                    evenTail->next = temp;
                    evenTail = temp;
                }
            }
            oddTail->next = evenHead->next;
            return oddHead->next;
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
    sol.insertAtLast(1);
    sol.insertAtLast(2);
    sol.insertAtLast(3);
    sol.insertAtLast(4);

    cout << "Initial LinkedList : " << endl;
    sol.printList(sol.head);

    Node* newHead = sol.SegregatetoOddEven();

    cout << "LinkedList After Segregration " << endl;
    sol.printList(newHead);
}