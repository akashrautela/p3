#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void insertafter(node **prevnode,int value)
{
    node *tmp = new node();
    tmp->data = value;
    tmp->next = (*prevnode)->next;
    (*prevnode)->next = tmp;
}
void insert_at_front(node **head,int value)
{
    node *tmp = new node();
    tmp->data=value;
    tmp->next=*head;
    *head=tmp;
}
void display(node *head)
{
    if(head == NULL) cout<<"Linked list is empty";
    else
    {
        while(head!=NULL)
        {
            cout<<head->data<<" ";
            head=head->next;
        }
    }
}

int main()
{
    node *head=NULL;
    insert_at_front(&head,10);
    insert_at_front(&head,20);
    insert_at_front(&head,30);
    insert_at_front(&head,40);
    insertafter(&head,9999);
    display(head);
    return 0;
}
