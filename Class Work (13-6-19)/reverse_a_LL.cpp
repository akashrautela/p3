#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
};
void insertLL(node **h,int value)
{
    node *tmp=new node();
    tmp->data = value;
    tmp->next = NULL;
    if(*h == NULL)
    {
        *h = tmp;
        return;
    }
    node *nextnode=*h;
    while(nextnode->next != NULL)
        nextnode = nextnode->next;
    nextnode->next = tmp;
    return ;
}
void printLL(node *h)
{
    while(h != NULL)
    {
        cout<<h->data<<" ";
        h = h->next;
    }
}
void reverseLL(node **h)
{
    node *l=NULL, *current = *h, *r = (*h)->next;
    while(current != NULL)
    {
        r=current->next;
        current->next=l;
        l=current;
        current=r;
    }
    *h = l;
}
int main()
{
    node *head =NULL;
    insertLL(&head,1);
    insertLL(&head,2);
    insertLL(&head,3);
    insertLL(&head,4);
    insertLL(&head,5);
    printLL(head);
    reverseLL(&head);
    cout<<endl;
    printLL(head);
    return 0;
}
