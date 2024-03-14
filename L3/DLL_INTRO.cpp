#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *back;
    // constructor
public:
    node( node *back1,int data1, node *next1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
node *conversion(vector<int> &arr)
{
    if(arr.empty()){
        return NULL;
    }
    if(arr.size()==1){
        node* temp= new node(arr[0]);
        return temp;
    }
    node* head=new node(NULL,arr[0],NULL);
    node*prev=head;
    for(int i=1 ;i<(int)arr.size() ; i++){
        node* temp=new node(prev,arr[i],NULL);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
void print(node* head){
    node* temp=head;
    while(temp){
        cout << temp->data << " ";
        temp=temp->next;
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();
    node* head=conversion(arr);
    print(head);
}