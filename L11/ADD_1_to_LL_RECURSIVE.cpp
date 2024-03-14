// THIS IS HAVING BETTER TIME COMPLEXITY AS COMPARISON TO THE ITERATIVE CODE WHICH IS HAVING 3*n TIME COMPLEXITY

#include <iostream>
#include <vector>
using namespace std;
// int carry=0;
// now onwards Node is our self defined datatype
class Node {
public:
    int data;
    Node* next;

    // constructor
public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

//CONVERSION OF ARRAY TO LINKED LIST
Node* conversion(vector<int>& arr) {
    if (arr.empty()) {
        return NULL;
    }
    //initialising the head
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < (int)arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
//LENGTH OF A LINKED LIST
int lengthofll(Node* head) {
    int cnt = 0;
    Node* temp = head;
    while (temp) {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
// TRAVERSAL OF A LINKED LIST
void print(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
// SEARCHING IN A LINKED LIST
bool ispresent(Node* head, int value) {
    Node* temp = head;
    while (temp) {
        // cout << temp-> data << " ";
        if (temp->data == value) return true;
        temp = temp->next;
    }
    return false;

}
// int carry=0;
Node* addone(Node* head,int &carry){
    if(head->next==NULL){
        head->data=head->data+1;
        if(head->data<10){
            carry=0;
            return head;
        }
        else if(head->data==10){
            head->data=0;
            carry=1;
           return head;
        }
    }
    addone(head->next,carry);
    head->data=head->data+carry;
        if(head->data<10){
            carry=0;
        }
        else if(head->data==10){
            head->data=0;
            carry=1;
        }
    return head;
}
int main() {
    //NEVER EVER CHANGE OR TEMPER YOUR HEAD POINTER
    // vector<int> arr = {1,2,3,4,5,6};
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //this is returning me the head of the linked list after converting array  into linked list
    Node* head = conversion(arr);
    // print(head);
    cout << endl;
    int carry=0;
    cout << endl;
    Node* nh=addone(head,carry);
    // cout << carry << endl;
    if(carry==1){
        Node* temp=new Node(1,nh);
        print(temp);
        return 0;
    }
    else{
        print(nh);
    }
    return 0; // Add this line
}
