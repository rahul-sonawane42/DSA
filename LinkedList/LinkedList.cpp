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
        Node* insertAtHead(Node* head, int newData){
            Node* newNode = new Node(newData,head);
            return newNode;
        }

        Node* deleteLast(Node* head){
            if (head == NULL || head->next == NULL){
                delete head;
                return NULL;
            }
            Node* temp = head;
            while (temp->next->next != NULL){
                temp = temp->next;
            }
            delete temp->next;
            temp->next = NULL;

            return head;
        }

        int listLen(Node* head){
            if (head == NULL){
                return 0;
            }
            int len = 0;
            Node* temp = head;
            while (temp != NULL){
                len++;
                temp = temp->next;
            }
            return len;
        }

        bool search(Node* head, int val){
            Node* temp = head;
            while (temp != NULL){
                if (temp->data == val){
                    return true;
                }
                temp = temp->next;
            }
            return false;
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

    cout << "------------------------------------------" << endl;
    
    cout << "Original List" << endl;
    sol.printList(head);
    cout << "Length: " << sol.listLen(head) << endl;
    
    cout << "------------------------------------------" << endl;
    
    head = sol.insertAtHead(head,2);
    cout << "After Insertion" << endl;
    sol.printList(head);
    cout << "Length: " << sol.listLen(head) << endl;
    
    cout << "------------------------------------------" << endl;
    
    head = sol.deleteLast(head);
    cout << "After Deletion" << endl;
    sol.printList(head);
    cout << "Length: " << sol.listLen(head) << endl;
    
    cout << "------------------------------------------" << endl;
    cout << "Search 5 in the list: ";
    if (sol.search(head,5)){
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    cout << "------------------------------------------" << endl;
    cout << "Search 6 in the list: ";
    if (sol.search(head,6)){
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }
    
    cout << "------------------------------------------" << endl;
    return 0;
}