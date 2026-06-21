#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

int main() {
    Node* y = new Node(5);
    Node* x = new Node(3,y);

    cout << x->data << endl;
    cout << x->next->data << endl;
    return 0;
}