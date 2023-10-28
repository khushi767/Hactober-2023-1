#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

struct Node *createTree(){

    int data;
    printf("enter the data : ");
    scanf("%d",&data);

    // base condition for Recursion
    if(data==-1){
        return NULL;
    }

    // steps A create node
    struct Node *root = createNode(data);

    // step B left part recursion
    printf("enter data for left part of %d\n",data);
    root->left=createTree();

    // step C right part recursion
    printf("enter data for right part of %d\n",data);
    root->right=createTree();

    return root;
}

int main(){
    struct Node *root=NULL;
    root=createTree();
    return 0;
}
