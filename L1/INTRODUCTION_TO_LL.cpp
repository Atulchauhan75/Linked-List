#include<bits/stdc++.h>  
using namespace std;
//STRUCT DOESN'T OFFERS US THE CONCEPT OF THE OOPS LIKE INHERITANCE,ENCAPSULATION,ETC SO WE WILL USE CLASS EVERYTIME WE WANT TO DEFINE THE SELF DIFINED DATATYPES

//STRUCT IS USED TO CREATE A SELF DEFINED OBJECT
struct Node {
    int data;
    Node* next;
    //AND WE USED CONSTRUCTOR TO INITIALISE THESE VALUES
    //CONSTRUCTORS ARE THE SPECIAL TYPE OF MEMEBER FUNCTIONS WHICH IS USED TO INTIALISE THE OBJECTS OF THE CLASS OR WE CAN SAY (SELF-DEFINED OBJECTS ALSO)
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};
int main(){
    //CREATING NODES
    // METHOD1
    // Node x= Node(2,nullptr);//JUST CREATING THE NODE IN THIS STEP
    // Node* y= &x;//STORING THE LOCATION OF NODE x IN THE POINTER y
    // cout << x.data << endl;//2
    // cout << x.next << endl;//0(means nullptr)

    // new KEYWORD DIRECTLY GIVES US THE POINTER TO THE MEMORY LOCATION
    //METHOD2
    Node* y= new Node(2,nullptr);
    cout << y << endl;
    cout << y->data << endl;
    cout << y->next << endl;
}