#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
};
void insertLL(node **h, int value)
{
    node *tmp=new node();
    tmp->next=NULL;
    tmp->data = value;
    if(*h == NULL)
    {
        *h = tmp;
        return;
    }
    node *nextnode = *h;
    while(nextnode->next != NULL)
        nextnode = nextnode->next;
    nextnode->next = tmp;
}
void printLL(node *h)
{
    while(h != NULL)
    {
        cout<<h->data<<" ";
        h=h->next;
    }
}
void printmiddle(node *h)
{
    node *p1=h, *p2=h;
    if(h != NULL)
    {
        while(p2!=NULL && p2->next != NULL)
        {
            p1 = p1->next;
            p2 = p2->next->next;
        }
        cout<<p1->data;
    }
}
int  main()
{
    node *head = NULL;
    insertLL(&head,1);
    insertLL(&head,2);
    insertLL(&head,3);
    insertLL(&head,4);
    insertLL(&head,5);
    printLL(head);
    cout<<endl;
    printmiddle(head);
    return 0;
}
