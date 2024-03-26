/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */
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
// Node* findkthNode(Node* temp,int k){
//    int cnt=1;
//         while (temp!=NULL && cnt!=k )
//         {
//             // k--;
//             cnt++;
//             temp = temp->next;
//         }
//         return temp;
// }
// Node *kReverse(Node *head, int k)
// {
//     // Write your code here.
//     Node *temp = head;
//     Node* prevNode=NULL;
//     while (temp != NULL)
//     {
//         Node *kthNode = findkthNode(temp,k);
//         if(kthNode==NULL){
//             if(prevNode)prevNode->next=temp;
//             break;
//         }
//         Node* nextNode= kthNode->next;
//         kthNode->next=NULL;
//         reverseLinkedList(temp);
//         if(temp==head){
//             head=kthNode;
//         }
//         else{
//             prevNode->next=kthNode;
//         }
//         prevNode=temp;
//         temp=nextNode;
//     }
//     return head;
// }