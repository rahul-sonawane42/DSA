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
        
        bool checkPalin(Node* head){
            if (head == NULL || head->next == NULL) return true;
            Node* slow = head;
            Node* fast = head;
            while (fast->next != NULL && fast->next->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
            }

            Node* newnode = reverseLL(slow->next);

            Node* fir = head;
            Node* sec = newnode;

            while (sec != NULL){
                if (fir->data != sec->data){ 
                    reverseLL(newnode);
                    return false;
                }
                fir = fir->next;
                sec = sec->next;
            }
            reverseLL(newnode);
            return true;
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
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(5);

    cout << "------------------------------------------" << endl;
    
    cout << "Lnked List" << endl;
    sol.printList(head);
    cout << "------------------------------------------" << endl;
    
    if (sol.checkPalin(head)){
        cout << "Is a Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }
    cout << "------------------------------------------" << endl;
    return 0;
}