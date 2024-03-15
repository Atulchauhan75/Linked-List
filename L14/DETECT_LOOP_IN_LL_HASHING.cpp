/****************************************************************

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


*****************************************************************/
// #include<bits/stdc++.h>
// bool detectCycle(Node *head)
// {
//     Node* temp=head;
//     map<Node* , int> m;
//     while(temp){
//         if(m.find(temp)!=m.end()){
//             return true;
//         }
//         m[temp]=1;
//         temp=temp->next;
//     }
//     return false;
// }

//WE CAN DO IT LIKE THIS ALSO
// bool detectCycle(Node *head)
// {
//     Node* temp=head;
//     map<Node* , int> m;
//     while(temp){
//         if(m[temp]==1){
//             return true;
//         }
//         m[temp]=1;
//         temp=temp->next;
//     }
//     return false;
// }