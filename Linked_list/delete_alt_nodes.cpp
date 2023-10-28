#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
};

void add_last(node** href, int value)
{
    node* temp = new node;
    temp -> data = value;
    temp -> next = NULL;
    node* current = *href;
    if(*href == NULL)
    {
        *href = temp;
        return;
    }
    while (current->next!=NULL)
    {
        current = current -> next;
    }
    current ->next = temp;
}

void print(node* my_node)
{
    node* current = my_node;
    while (current!=NULL)
    {
        cout << current -> data << "->";
        current = current -> next;
    }
    cout << "NULL";
}

void delete_alt_node(node*href)
{
    node* prev = href;
    node* current = href ->next;
    while(prev!=NULL && current!=NULL)
    {
        prev -> next = current -> next;
        delete(current);
        prev = prev->next; 
        if (prev != NULL) 
            current = prev->next; 
    }
}

int main()
{
    node* head = NULL;
    add_last(&head, 1);
    add_last(&head, 2);
    add_last(&head, 3);
    add_last(&head, 4);
    add_last(&head, 5);
    add_last(&head, 6);
    cout << "Initial linked list: ";
    print(head);
    cout << endl << "Modified linked list, after deleting: ";
    delete_alt_node(head);
    print(head);
}