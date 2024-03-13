/*
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
*/

// Node *findMiddle(Node *head) {
//     // Write your code here
//         if (head == nullptr || head->next == nullptr)
//         return head; // If the list is empty or has only one node, return the head

//     Node *slow = head;
//     Node *fast = head->next; // Move fast one step ahead initially

//     while (fast != nullptr && fast->next != nullptr)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     if(fast!=NULL && fast->next==NULL){
//         slow=slow->next;
        
//     }
//     return slow;

// }

