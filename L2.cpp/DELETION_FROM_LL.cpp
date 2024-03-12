#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    // constructor
public:
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }

public:
    node(int data1, node *next1)
    {
        data = data1;
        next = next1;
    }
};
node *conversion(vector<int> &arr)
{
    if(arr.empty()){
        return NULL;
    }
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < (int)arr.size(); i++)
    {
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void print(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
// IT WILL RETURNS US HEAD OF RESULTING LINKED LIST AFTER DELETING THE HEAD OF THE PREVIOUS LINKED LIST
node *deleteshead(node *head)
{
    if (head == NULL)
        return head;
    node *temp = head;
    head = head->next;
    // delete or free BOTH CAN BE USED TO FREE THE MEMORY
    delete temp;
    // free(temp);
    return head;
}
// IT DELETES THE TAIL OF THE LINKED LIST
node *deletestail(node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
} 
// NOW IF WE WANT TO DELETE THE KTH index  ELEMENT OF THE LINKED LIST
node *deleteskthelement(node *head, int k)
{
    if (head == NULL)
        return head;
    if (k == 1)
    {
        node *temp = head;
        head = head->next;
        delete (temp);
        return head;
    }
    int cnt = 0;
    node *temp = head;
    node *prev = NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
// NOW IF WE WANT TO DELETE THE particular ELEMENT WITH SPECIFIED VALUE FROM LINKED LIST
node *DeletesElementWithValue(node *head, int value)
{
    if (head == NULL)
        return head;
        // node* temp1=head;
    if (head->data == value)
    {
        node *temp = head;
        head = head->next;
        delete (temp);
        return head;
    }
    node *temp = head;
    node *prev = NULL;
    while(temp!=NULL){
        if(temp->data == value){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    node *head = conversion(arr);
    // cout << "Linked list before deleting the head : ";
    // print(head);
    // cout << endl;
    // node *newhead = deleteshead(head);
    // cout << "Linked list after deleting the head : ";
    // print(newhead);
    // cout << endl;
    // node *newhead1 = deletestail(head);
    // cout << "Linked list after deleting the tail : ";
    // print(newhead1);
    // cout << endl;
    // head = deleteskthelement(head,3);
    // cout << "Linked list after deleting the kth element : ";
    // print(head);
    // cout << endl;
    head = DeletesElementWithValue(head , 4);
    head = DeletesElementWithValue(head , 3);
    cout << "Linked list after deleting the element with given value: ";
    print(head);
    cout << endl;
}