#include<iostream>
using namespace std;


#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};

//print the linked list
void printlist(node *n){
    int count=0;
    while(n!=NULL){
        cout<<n->data<<endl;
        n=n->next;
        count++;
    }
    cout<<"no of elements in linked list is: "<<count<<endl;
}

//insertion in front of linked list
node *push(node *head,int newdata){
    node *newnode=new node();
    newnode->data=newdata;
    newnode->next=head;
    head=newnode;
    return head;
}

//insertion in middle of linked list
void insertafter(node *prev_node,int newdata){
    node *newnode= new node();
    newnode->data=newdata;
    newnode->next=prev_node->next;
    prev_node->next=newnode;
}

//inserting at end of linked list
void append(node **head_ref,int newdata){
    node *newnode=new node();
    newnode->data=newdata;
    newnode->next=NULL;

    node *last=*head_ref;
    if(*head_ref==NULL){
    *head_ref=newnode;
    return;
    }
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=newnode;
    return;

}
int main(){
    node *head=NULL;
    head=push(head,5);
    head=push(head,7);

    insertafter(head->next,79);
    append(&head,90);
    printlist(head);
}