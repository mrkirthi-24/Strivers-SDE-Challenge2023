/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
//Iterative method
//TC = O(2N)
//SC = O(N)
// Node* removeKthNode(Node* head, int K)
// {
//     Node* ptr = head;
//     int counter = 0;
//     while(ptr){
//         counter++;
//         ptr = ptr->next;
//     }
//     if(counter == K) return head->next;
//     Node* temp = head;
//     for(int i=0; i<counter-K-1; i++){
//             temp = temp->next;
//     }
//     Node* del = temp->next;
//     temp->next = del->next;
//     return head;
// }


//Two pointer method (fast & slow method)
//TC = O(N)
//SC = O(1)
Node* removeKthNode(Node* head, int K){
    Node* fast = head;
    Node* slow = head;

    for(int i=0; i<K; i++)
        fast = fast->next;

    if(fast == NULL) return head->next;

    while(fast->next){
        fast = fast->next;
        slow = slow->next;
    }
    Node* temp = slow->next;
    delete temp;
	slow->next = slow->next->next;
    return head;
}


