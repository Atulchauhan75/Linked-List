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

// Node* removeKthNode(Node* head, int K)
// {
//         // Node* temp =head;
//     Node* slow=head;
//     Node* fast=head;
//     for(int i=0 ;i<K ;i++){
//         fast = fast->next;
//     }
//     if(fast==NULL){
//         Node* temp=head;
//         head=head->next;
//         free(temp);
//         return head;
//     }
//     while(fast->next!=NULL){
//         fast=fast->next;
//         slow=slow->next;
//     }
//     Node *temp = slow->next;
//     slow->next = (slow->next->next);
//     free(temp);
//     return head;
// }
