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

// Node* reverseLinkedList(Node *head)
// {
//     // Write your code here
//     if(!head || !(head->next)){
//         return head;
//     }
//     Node* curr=head;
//     Node* prev=NULL;
//     while(curr){
//         Node*front=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=front;
//     }
//     return prev;
// }
