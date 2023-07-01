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
//Two Pointers method
//TC = O(N)
//SC = O(1)
Node *firstNode(Node *head)
{
	if (head == NULL) return NULL;
	Node *slow = head;
	Node *fast = head;
	do
	{
		if (fast && fast->next) fast = fast->next->next;
		else return NULL;
		slow = slow->next;
	} while (fast != slow);

	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return slow;
}

//Using Hashmap method
//TC = O(N)
//SC = O(N)
// #include<bits/stdc++.h>

// Node *firstNode(Node *head)
// {
//     if(head == NULL || head->next == NULL){
//         return NULL;
//     }
//     unordered_map<Node*,int> mp;
//     Node* curr=head;
//     while(curr->next != NULL){
//         if(mp.count(curr) == 0){
//             mp[curr]=1;
//             curr=curr->next;
//         }else{
//             return curr;
//         }
//     }
//     return NULL;
// }
