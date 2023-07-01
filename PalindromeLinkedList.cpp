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

bool isPalindrome(LinkedListNode<int> *head) {
    if(head==nullptr) return 1;
        stack<int> stk;
        LinkedListNode<int> *temp = head;
        while(temp != nullptr){
            stk.push(temp->data);
            temp = temp->next;
        }
        LinkedListNode<int> *ptr = head;
        while(ptr){
            if(ptr->data == stk.top()) {
                stk.pop();
                ptr = ptr->next;
            }else return 0;
        }
        if(stk.empty() == 1) return 1;
        return 1;
}