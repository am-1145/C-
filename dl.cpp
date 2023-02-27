#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node *prev;

    node(int d){
        this ->data=d;
        this ->prev=NULL;
        this->next=NULL;
    }
};
void insertAtHead(node *&head,int d){
    node* temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

}
void print(node *head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
cout<<endl;
}
void insertAttail(node *&tail,int d){
    node *temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void(insertAtPosition)(node *&head,node*&tail,int d,int position){
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    node *temp=head;
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAttail(tail,d);
        return;
    }
    node *NodetoInsert=new node(d);
    NodetoInsert->next=temp->next;
    temp->next->prev=NodetoInsert;
    NodetoInsert->prev=temp;
    temp->next=NodetoInsert;
}
int main()
{
    node *node1=new node(10);
   node* head=node1;
   node *tail=node1;
   print(head);
   insertAtHead(head,12);
   insertAtHead(head,17);
   insertAtHead(head,8);
    print(head);
   insertAttail(tail,5);
   print(head);
   insertAtPosition(head,tail,15,2);
   print(head);
   insertAtPosition(head,tail,85,1);
   print(head);
   insertAtPosition(head,tail,95,8);
   print(head);

 return 0;
}