/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
// Node* reverse(Node *head)
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
// Node *addOne(Node *head)
// {
//     Node* newhead=reverse(head);
//     Node*curr=newhead;
//     curr->data=curr->data+1;
//     int carry=0;
//     while(curr){
//         int sum=curr->data+carry;
//         if(sum<10){
//             curr->data=sum;
//             carry=0;
//             break;
//         }
//         else if(sum==10){
//             curr->data=0;
//             carry=1;
//         }
//         else{
//             curr->data=sum%10;
//             carry=1;
//         }
//         curr=curr->next;
//     }
//     Node* nh=reverse(newhead);
//     if(carry==1){
//         Node* temp= new Node(1,nh);
//         return temp;
//     }
//     return nh;
// }
