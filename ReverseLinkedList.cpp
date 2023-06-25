#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
//RECURSIVE //TC= O(N) SC= O(N)
// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {
//     if(head == NULL || head->next == NULL) return head;
//     LinkedListNode<int> *prev = NULL;
//     LinkedListNode<int> *h2 = reverseLinkedList(head->next);
//     head->next->next = head;
//     head->next = prev;
//     return h2;
// }

//ITERATIVE //TC= O(N) SC= O(1)
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
        LinkedListNode<int> *prev = NULL;
        LinkedListNode<int> *curr = head;

        while(curr != NULL){
            LinkedListNode<int> *forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            
        }
        return prev;
}