#include<bits/stdc++.h>
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
node* reverseDLL(node*head ){
    node*current=head;
    node*last=NULL;
    while(current){
        last=current->back;
        current->back=current->next;
        current->next=last;
        current=current->back;
    }
    return last->back;
}
int main(){
    vector<int> arr={1,2,3,4,5,6};
    node* head=conversion(arr);
    print(head);
    head=reverseDLL(head);
    print(head);
}