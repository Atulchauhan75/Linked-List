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
 *          this -> data = data;
 *          this -> prev = prev;
 *          this -> next = next;
 *      }
 * };
 *
 *************************************************************************/

// vector<pair<int, int>> findPairs(Node* head, int k)
// {
//     // Write your code here.
//     Node* left=head;
//     Node* right=head;
//     while(right->next){
//         right=right->next;
//     }
//     vector<pair<int,int>> ans;
//     while((left->data) < (right->data)){
//         int ch=left->data+right->data;
//         if(ch==k){
//             ans.push_back({left->data , right->data});
//             left=left->next;
//             right=right->prev;
//         }
//         else if(ch<k){
//             left=left->next;
//         }
//         else if(ch>k){
//             right=right->prev;
//         }
//     }
//     return ans;
// }
