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
// Node *rotate(Node *head, int k) {
//      // Write your code here.
//      Node* temp=head;
//      int len=1;
//      while(temp->next){
//           len++;
//           temp=temp->next;
//      }
//       k%=len;
//      if(k==0){
//           return head;
//      }
//      else{
//           int cnt=1;
//           temp=head;
//           while(cnt!=len-k){
//                cnt++;
//                temp=temp->next;
//           }
//           Node* start=(temp->next);
//           temp->next=NULL;
//           temp=start;
//           while(temp->next){
//                temp=temp->next;
//           }
//           temp->next=head;
//           return start;
//      }
//      return head;
// }