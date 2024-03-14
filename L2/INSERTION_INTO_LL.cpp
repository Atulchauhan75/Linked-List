#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    // CONSTRUCTORS
public:
    node(int data1, node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
node *conversion(vector<int> &arr)
{
    if (arr.empty())
    {
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
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
node *insertinghead(node *head, int value)
{
    // node* nh = new node(value,head);
    // return nh;
    // we can also write like that
    return new node(value, head);
}
node *InsertAtTail(node *head, int value)
{
    // node* prev=NULL;
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    node *newtail = new node(value);
    temp->next = newtail;
    return head;
}
node *InsertAtPosition(node *head, int value, int pos)
{
    if (head == NULL)
    {
        if (pos == 1)
        {
            node *temp = new node(value, head);
            return temp;
        }
        else
        {
            return NULL;
        }
    }
    if (pos == 1)
    {
        node *temp = new node(value, head);
        return temp;
    }
    int cnt = 0;
    node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == pos - 1)
        {
            node *newnode = new node(value, temp->next);
            // newnode->next = temp->next;
            temp->next = newnode;
            break;
        }
        temp = temp->next;
    }
    return head;
}
node *InsertBeforeValue(node *head, int value, int ValueToBeInserted)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->data == value)
    {
        node *temp = new node(ValueToBeInserted, head);
        return temp;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->next->data == value)
        {
            node *newnode = new node(ValueToBeInserted,temp->next);
            temp->next = newnode;
            break;
        }
        temp = temp->next;
    }
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    // vector<int> arr;
    node *head = conversion(arr);
    print(head);
    cout << endl;
    // // inserting new node as a HEAD NODE
    //  cout << "Enter the value of the new head node : " ;
    //  int value;
    //  cin >> value;
    //  head=insertinghead(head,value);
    //  print(head);
    //  cout << endl;
    // cout << "Enter the value of the new tail node : ";
    // int x;
    // cin >> x;
    // head = InsertAtTail(head, x);
    // print(head);
    // cout << endl;
    // cout << "Enter the value of the node : ";
    // int x;
    // cin >> x;
    // cout << "Enter the position of the node : ";
    // int pos;
    // cin >> pos;
    // head = InsertAtPosition(head, x, pos);
    // print(head);
    // cout << endl;
    cout << "Enter the value of the node before which we have to insert the value : ";
    int x;
    cin >> x;
    cout << "Enter the value of the node to be inserted : ";
    int ValueToBeInserted;
    cin >> ValueToBeInserted;
    head = InsertBeforeValue(head, x, ValueToBeInserted);
    print(head);

    return 0;
}