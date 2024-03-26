/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

// Node * removeDuplicates(Node *head)
// {
//     // Write your code here
//     if(head== NULL || head->next==NULL){
//         return head;
//     }
//     Node* temp=head;
//     while(temp!=NULL){
//         Node*prevNode=temp;
//         int curr=temp->data;
//         while(temp!=NULL && temp->data==curr){
//             temp=temp->next;
//         }
//         prevNode->next=temp;
//         if(temp!=NULL)  temp->prev=prevNode;
        
//     }
//     return head;
// }
