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
////Two Pointers Sol
//TC = O(N+M)
//SC = O(1)

Node* findIntersection(Node *head1, Node *head2)
{
    if(head1==NULL || head2==NULL )
           return NULL;
        
        Node* ptr1=head1;
        Node* ptr2=head2;
        while(ptr1!=ptr2)
        {
            ptr1= ptr1==NULL ? head2 : ptr1->next;
            ptr2= ptr2==NULL ? head1 : ptr2->next;
        }
        return ptr1;
    
}