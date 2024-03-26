#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

// Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
// {
//     // Write your code here.
//     Node<int>* temp1 = first;
//     Node<int>* temp2 = second;
//     Node<int>* dummynode = new Node<int> (-1);
//     Node<int>* temp = dummynode;
    
//     while (temp1 != nullptr && temp2 != nullptr) {
//         if (temp1->data <= temp2->data) {
//                 temp->next = temp1;
//                 temp=temp1;
//                 temp1=temp1->next;
//         } 
//         else {
//             temp->next =temp2;
//             temp=temp2;
//             temp2 = temp2->next;
//         }
//     } 

//     while (temp2 != nullptr) {
//         temp->next =temp2;
//         temp=temp2;
//         temp2 = temp2->next;
//     }

//     while (temp1 != nullptr) {
//         temp->next = temp1;
//         temp=temp1;
//         temp1=temp1->next;
//     }

//     return dummynode->next;
// }
