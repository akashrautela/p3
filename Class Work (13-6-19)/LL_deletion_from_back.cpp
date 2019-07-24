#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
};

void delete_from_back(node **head, int key)
{
    node *tmp = *head;
    if(tmp->data == key)
    {
        *head=tmp->next;
        delete(tmp);
        return;
    }
    node *prev;
    while(tmp->data != key && tmp!=NULL)
    {
        prev=tmp;
        tmp=tmp->next;
    }
    if(tmp==NULL)
    {
        cout<<"key not found";
        return;
    }
    prev->next = tmp->next;
    delete(tmp);
    return;
}
void insert_at_back(node **head,int data)
{
    node *tmp =new node();
    tmp->data = data;
    tmp->next=NULL;
    if(*head == NULL)
    {
        *head=tmp;
        return;
    }
    node *lastnode=*head;
    while(lastnode->next != NULL)
        lastnode = lastnode->next;
    lastnode->next = tmp;
    return;
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
    insert_at_back(&head,10);
    insert_at_back(&head,20);
    insert_at_back(&head,30);
    insert_at_back(&head,40);
    delete_from_back(&head,30);
    delete_from_back(&head,10);
    display(head);
    return 0;
}
