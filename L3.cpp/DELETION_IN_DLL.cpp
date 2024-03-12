#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *back;
    node *next;

public:
    node(int data1)
    {
        data = data1;
        next = NULL;
        back = NULL;
    }

public:
    node(node *back1, int data1, node *next1)
    {
        data = data1;
        back = back1;
        next = next1;
    }
};
node *conversion(vector<int> &arr)
{
    if (arr.empty())
    {
        return NULL;
    }
    node *head = new node(arr[0]);
    node *prev = head;
    for (int i = 1; i < (int)arr.size(); i++)
    {
        node *temp = new node(prev, arr[i], NULL);
        prev->next = temp;
        prev = temp;
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
    cout << endl;
}
node *deletionathead(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }
    node *prev = head;
    // free(head);
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}
node *deletionattail(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next->back = nullptr;
    free(temp->next);
    temp->next = nullptr;
    return head;
}
node *deletekthelement(node *head, int k)
{
    node *temp = head;
    int cnt = 0;
    while (temp)
    {
        cnt++;
        if(cnt==k) break;
        temp = temp->next;
    }
    if (temp == NULL)
    { // k is greater than the number of elements in the list
        return head;
    }
    node*prev=temp->back;
    node*front=temp->next;
    if(prev==NULL && front==NULL){
        delete temp;
        return NULL;
    }
    else if(prev==NULL){
        return deletionathead(head);
    }
    else if(front==NULL){
        return deletionattail(head);
    }
    prev->next=front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;
    return head;
}
node* DeleteElementWithValue(node *head, int value)
{
    node *temp = head;
    while (temp)
    {
        if(temp->data==value) break;
        temp = temp->next;
    }
    if (temp == NULL)
    { // k is greater than the number of elements in the list
        return head;
    }
    node*prev=temp->back;
    node*front=temp->next;
    if(prev==NULL && front==NULL){
        delete temp;
        return NULL;
    }
    else if(prev==NULL){
        return deletionathead(head);
    }
    else if(front==NULL){
        return deletionattail(head);
    }
    prev->next=front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    // vector<int> arr;

    node *head = conversion(arr);
    print(head);
    // node *newhead = deletionathead(head);
    // print(newhead);
    // node *newhead1 = deletionattail(newhead);
    // print(newhead1);
    // node* head1=deletekthelement(head,1);
    // print(head1);
    node* nh= DeleteElementWithValue(head,1);
    print(nh);
}