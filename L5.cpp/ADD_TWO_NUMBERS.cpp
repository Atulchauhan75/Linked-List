/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode* curr1 = l1;
//         ListNode* curr2=l2;
//         int carry=0;
//         int value=0;
//         ListNode* newhead = new ListNode((curr1->val + curr2->val)%10);
//         ListNode* mover=newhead;
//         if((curr1->val + curr2->val)>=10) carry=1;
//         curr1=curr1->next;
//         curr2=curr2->next;
//         while(curr1!=NULL || curr2!=NULL){
//             if(curr1==NULL && curr2!=NULL){
//                 value= (curr2->val + carry)%10;
//                 if(curr2->val + carry >=10) carry=1;
//                 else carry=0;
//             }
//             else if(curr1!=NULL && curr2==NULL){
//                  value=(curr1->val+carry)%10;
//                  if(curr1->val + carry >=10) carry=1;
//                  else carry=0;
//             }
//             else{
//                 int x=curr1->val;
//                 int y=curr2->val;
//                 value=(x+y + carry)%10 ;
//                 if(x+y + carry>=10) carry=1;
//                 else carry=0;
//             }
//                 ListNode* temp= new ListNode(value);
//                 mover->next=temp;
//                 mover=temp;
//             if(curr1!=NULL && curr1->next!=NULL)
//             curr1=curr1->next;
//             else{
//                 curr1=NULL;
//             }
//             if(curr2!=NULL && curr2->next!=NULL)
//             curr2=curr2->next;
//             else{
//                 curr2=NULL;
//             }
//         }
//         if(carry){
//             ListNode* temp= new ListNode(carry);
//                 mover->next=temp;
//                 mover=temp;
//         }
//         return newhead;
//     }
// };