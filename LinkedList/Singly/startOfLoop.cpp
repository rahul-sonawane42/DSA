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
        Node* startOfLoop(Node* head){
            Node* slow = head;
            Node* fast = head;
            while (fast != NULL && fast->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
                if (fast == slow){
                    slow = head;
                    while (fast!=slow){
                        slow = slow->next;
                        fast = fast->next;
                    }
                    return slow;
                }
            }
            return NULL;
        }
};

int main() {
    Solution sol;

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = third;

    cout << "------------------------------------------" << endl;
    
    Node* ans = sol.startOfLoop(head);
    if (ans == NULL) {
        cout << "No Loop Found" << endl;
    }else{
        cout<< "Loop starts at: " << ans->data << endl;
    }

    cout << "------------------------------------------" << endl;
    return 0;
}