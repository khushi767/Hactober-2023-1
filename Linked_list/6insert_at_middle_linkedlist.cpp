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
int main(){
    node *head=NULL;
    head=push(head,5);
    head=push(head,7);

    insertafter(head->next,79);
    printlist(head);
}