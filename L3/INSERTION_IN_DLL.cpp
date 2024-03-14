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
//conversion into DLL
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
// Printing DLL
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
//INSERTING BEFORE HEAD
node* insertBeforeHead(node* head, int valueToBeInserted)
{
    node* temp=new node(valueToBeInserted);
    temp->next=head;
    head->back=temp;
    return temp;
}
node* insertBeforeTail(node* head, int valueToBeInserted){
    node*temp=head;
    while(temp->next->next!=NULL){
        // cout << temp->data << " ";
        temp=temp->next;
    }
    node* newnode=new node(temp,valueToBeInserted,temp->next);
    temp->next->back=newnode;
    temp->next=newnode;
    return head;
}
node* insertBeforeKthNode(node* head,int k, int valueToBeInserted){
    if(k==1){
        return insertBeforeHead(head,valueToBeInserted);
    }
    node* temp= head;
    int cnt=0;
    while(temp){
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }
    if(temp==NULL){
        //k is greater than the size of the linked list
        return head;
    }
    node* prev= temp->back;
    node* newnode= new node(prev,valueToBeInserted,temp);
    prev->next=newnode;
    temp->back=newnode;
    return head;
}
node* insertBeforeNode(node* head,int value,int valueToBeInserted){
    node* temp=head;
    if(temp->data==value){
         return insertBeforeHead(head,valueToBeInserted);
    }
    while(temp->data!=value){
        temp=temp->next;
    }
    cout << temp->data << " " << endl;
    if(temp==NULL){
        //value  not found in the linked list.
        return NULL;
    }
    node * prev=temp->back;
    node* newnode=new node(prev,valueToBeInserted,temp);
    prev->next=newnode;
    temp->back=newnode;
    return head; 
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    node* head= conversion(arr);
    print(head);
    // head=insertBeforeHead(head,578);
    // print(head);
    // head=insertBeforeTail(head,90);
    // print(head);
    // head=insertBeforeKthNode(head,5,767);
    // print(head);
    head=insertBeforeNode(head,5,990);
    print(head);
}