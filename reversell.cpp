#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    // constructor
    Node(int data){
        this ->data=data;
        this ->next=NULL;
    }
};
void insertAthead(Node* &head,int d){
    Node* temp=new Node(d);
    temp ->next=head;
    head=temp;
}
void print(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp ->next;
    }
    cout<<endl;
}
// Node* reverse(Node *&head){
//     Node *forward=NULL;
//     Node *curr=head;
//     Node *prev=NULL;
//     while(curr!=NULL){
//         forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//     }
//     return prev;
// }
void reverse(Node *&head,Node *curr,Node*prev){
    if(curr==NULL){
        head=prev;
        return;
    }
    reverse(head,curr->next,curr);
    curr->next=prev;
}
int main()
{
    Node *Node1=new Node(10);
    // cout<<Node1->data<<endl;
    // cout<<Node1->next<<endl;
    Node *head=Node1;
    Node *curr=head;
    Node*prev=NULL;
    // print(head);?
    insertAthead(head,12);
    // print(head);
    insertAthead(head,50);
      insertAthead(head,69);
        insertAthead(head,46);
        print(head);
        reverse(head,curr,prev);
    print(head);


    return 0;
}