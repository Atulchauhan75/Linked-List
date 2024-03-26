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

// Node* deleteMiddle(Node* head){
//     if(head==NULL || head->next==NULL){
//         Node* temp =new Node(-1);
//         return temp ;
//     }
//     Node* prev=NULL;
//      Node* slow=head;
//     Node* fast=head;
//     while(fast!=NULL && fast->next!=NULL){
//         prev=slow;
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     Node* temp=slow->next;
//     prev->next=slow->next;
//     free(slow);
//     return head;
// }
