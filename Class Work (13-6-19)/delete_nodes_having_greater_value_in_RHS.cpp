#include<iostream>
using namespace std;
class node
{
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
void delete_RHS(node **h)
{

    node *tmp = *h;
    node *prev = *h;
    node *nxt = (*h)->next;
    while(nxt != NULL)
    {
        if(tmp->data < nxt->data)
        {
            if(tmp == *h)
            {
                *h = tmp->next;
                tmp = tmp->next;
                delete(prev);
                prev=tmp;
            }
            else
            {
                prev->next = nxt;
                delete(tmp);
                tmp=nxt;
            }
        }
        nxt=nxt->next;
    }
}
int main()
{
    node *head =NULL;
    insertLL(&head,1);
    insertLL(&head,2);
    insertLL(&head,3);
    insertLL(&head,4);
    insertLL(&head,5);
    insertLL(&head,-1);
    printLL(head);
    delete_RHS(&head);
    cout<<endl;
    printLL(head);
    return 0;
}
