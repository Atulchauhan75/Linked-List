#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

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
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
node* findMiddleOfLL(node *head)
{
    if (head == nullptr || head->next == nullptr)
        return head; // If the list is empty or has only one node, return the head

    node *slow = head;
    node *fast = head->next; // Move fast one step ahead initially

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4,5};
    node *head = conversion(arr);
    print(head);
    cout << endl;
    cout << findMiddleOfLL(head)->data << endl;
}