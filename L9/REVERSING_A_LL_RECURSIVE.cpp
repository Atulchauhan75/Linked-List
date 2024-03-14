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
// Node* reverse(Node* head){
//     if(!(head) || !(head->next)){
//         return head;
//     }
//     Node* newhead=reverse(head->next);
//     Node* front=head->next;
//     front->next=head;
//     head->next=NULL;
//     return newhead;

// }

// Node* reverseLinkedList(Node *head)
// {
//     return reverse(head);
// }
