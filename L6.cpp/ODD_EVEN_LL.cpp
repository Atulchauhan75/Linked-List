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
//     ListNode* oddEvenList(ListNode* head) {
//         if(head==NULL || head->next==NULL) {
//             return head;
//         }
//         ListNode* oddh =head;
//         ListNode* evenh=head->next;
//         ListNode* evenhead= head->next;
//         while(evenh!=NULL && evenh->next!=NULL){
//             oddh->next = oddh->next->next;
//             evenh->next= evenh->next->next;
//             oddh= oddh->next;
//             evenh=evenh->next;
//         }
//         oddh->next=evenhead;
//         return head;

//     }
// };