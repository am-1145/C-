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
void insertAttail(Node* &tail,int d){
    Node *temp=new Node(d);
    tail ->next=temp;
    tail=tail->next;
}
void insertatany(Node *head,Node *tail,int position,int d){
    if(position==1){
        insertAthead(head,d);
        return;
    }
    Node *temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAttail(tail,d);
        return;
    }
    Node* NodetoInsert=new Node(d);
    NodetoInsert->next=temp->next;
    temp->next=NodetoInsert;

}
void print(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp ->next;
    }
    cout<<endl;
}
void deleteNode(Node *&head,int position){
     Node *temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    
}
int main()
{
    Node *Node1=new Node(10);
    // cout<<Node1->data<<endl;
    // cout<<Node1->next<<endl;
    Node *head=Node1;
    print(head);
    insertAthead(head,12);
    print(head);
    insertAthead(head,50);
    print(head);
    Node *tail=Node1;
    insertAttail(tail,15);
    print(head);   
    insertatany(head,tail,2,33);
    print(head); 
 return 0;
}