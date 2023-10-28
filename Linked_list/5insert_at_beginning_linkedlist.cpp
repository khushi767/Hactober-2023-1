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
/*node *push(node *head,int newdata){
    node *newnode=new node();
    newnode->data=newdata;
    newnode->next=head;
    head=newnode;
    return head;
}
int main(){
    node *head=NULL;
    head=push(head,5);
    head=push(head,7);
    printlist(head);
}

*/


//using two pointer approach
void push(node **head_ref,int newdata){
    node *newnode=new node();
    newnode->data=newdata;
    newnode->next=*head_ref;
    *head_ref=newnode;
}
int main(){
    node *head=NULL;
    push(&head,5);
    push(&head,7);
    printlist(head);
}