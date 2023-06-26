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
        this->data = data; //first node
        this->next = NULL;
    }
    Node(int data, Node* next) //new node
    {
        this->data = data;
        this->next = next;
    }
};
*/

// Node *findMiddle(Node *head) {
//     Node* temp = head;
//     int counter = 0;
//     while(temp){
//         counter++;
//         temp = temp->next;
//     }
//     temp = head;
//     for(int i=0; i<counter/2; i++)
//         temp = temp->next;
//     return temp;
// }

Node *findMiddle(Node *head) {
    Node* fast = head;
    Node* slow = head;
    while(fast and fast->next){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

