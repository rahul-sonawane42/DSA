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
        int lengthOfLoop(Node* head){
            Node* slow = head;
            Node* fast = head;
            while (fast != NULL && fast->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
                if (fast == slow){
                    int len = 1;
                    fast = fast->next;
                    while (fast!=slow){
                        len++;
                        fast = fast->next;
                    }
                    return len;
                }
            }
            return -1;
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
    
    int ans = sol.lengthOfLoop(head);
    if (ans == -1) {
        cout << "No Loop Found" << endl;
    }else{
        cout<< "Length of loop: " << ans << endl;
    }

    cout << "------------------------------------------" << endl;
    return 0;
}