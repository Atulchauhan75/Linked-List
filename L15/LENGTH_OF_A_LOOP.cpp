/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/
// int findLength(Node* slow ,Node* fast){
//     int cnt=1;
//     fast=fast->next;
//     while(fast!=slow){
//         cnt++;
//         fast=fast->next;
//     }
//     return cnt;
// }
// int lengthOfLoop(Node *head) {
//     // Write your code here
//     Node* slow=head;
//     Node* fast=head;
//     Node* temp=head;
//     while(fast!=NULL && fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//         if(fast==slow) return findLength(slow,fast);
//     }
//     return 0;

// }
