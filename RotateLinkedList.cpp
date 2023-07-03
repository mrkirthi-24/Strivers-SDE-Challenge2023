/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     Node* temp = head;
     int n = 1;
     while(temp->next && n++) temp = temp->next;
     temp->next = head;

     k %= n;
     k = n - k;
     while(k--) temp = temp->next;
     head = temp->next;
     temp->next = nullptr;
     return head;
}