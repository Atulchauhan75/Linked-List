#include <iostream>
#include <vector>
using namespace std;

// now onwards node is our self defined datatype
class node {
public:
    int data;
    node* next;

    // constructor
public:
    node(int data1, node* next1) {
        data = data1;
        next = next1;
    }
    node(int data1) {
        data = data1;
        next = nullptr;
    }
};

//CONVERSION OF ARRAY TO LINKED LIST
node* conversion(vector<int>& arr) {
    if (arr.empty()) {
        return NULL;
    }
    //initialising the head
    node* head = new node(arr[0]);
    node* mover = head;
    for (int i = 1; i < (int)arr.size(); i++) {
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
//LENGTH OF A LINKED LIST
int lengthofll(node* head) {
    int cnt = 0;
    node* temp = head;
    while (temp) {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
// TRAVERSAL OF A LINKED LIST
void print(node* head) {
    node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
// SEARCHING IN A LINKED LIST
bool ispresent(node* head, int value) {
    node* temp = head;
    while (temp) {
        // cout << temp-> data << " ";
        if (temp->data == value) return true;
        temp = temp->next;
    }
    return false;

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
    node* head = conversion(arr);
    print(head);
    return 0; // Add this line
}
