/****************************************************************

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


*****************************************************************/
//Hashmap approach 
//TC = O(N)
//SC = O(N)
// bool detectCycle(Node *head)
// {
//     if(head == NULL) return false;

//     unordered_map<Node*, int> mpp;

//     while(head != NULL){
//         if(mpp.count(head) > 0) return true;
//         else{
//             mpp[head] = 1;
//             head = head->next;
//         }
//     }
//     return false;
// }

// Floyd's cycle finding algorithm
// TC = O(N)
// SC = O(1)
bool detectCycle(Node *head)
{
    if(head == NULL) return false;
    Node* fast = head;
    Node* slow = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow)
            return true;    
    }
    return false;
}