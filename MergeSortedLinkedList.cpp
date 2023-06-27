#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

//Using Iterative method
// Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
// {
//     if(first == NULL) return second;
//     if(second == NULL) return first;

//     Node<int>* mergedList = first;
//     if(first->data > second->data){
//         mergedList = second;
//         second = second->next;
//     }else{
//         first = first->next;
//     }

//     Node<int>* curr = mergedList;
//     //merging 
//     while(first && second){
//         if(first->data < second->data){
//             curr->next = first;
//             first = first->next;
//         }else{
//             curr->next = second;
//             second = second->next;
//         }
//         curr = curr->next;
//     }

//     if(!first) curr->next = second;
//     else curr->next = first;

//     return mergedList;
// }

//Using Recursion
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(!first) return second;
    if(!second) return first;
    if(first->data < second->data){
        first->next= sortTwoLists(first->next,second);
        return first;
    }
    else{
        second->next= sortTwoLists(first,second->next);
        return second;
    }
} 