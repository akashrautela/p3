#include<iostream>
#include<stack>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void insertLL(node **h , int d)
{
    node *tmp = new node();
    tmp->next = NULL;
    tmp->data = d;
    if(*h == NULL)
    {
        *h = tmp;
        return ;
    }
    node *nxt = *h;
    while(nxt->next != NULL)
        nxt = nxt->next;
    nxt->next = tmp;
}
void printLL(node *h)
{
    while(h != NULL)
    {
        cout<<h->data<<" ";
        h = h->next;
    }
}
int main()
{
    node *head = NULL;
    insertLL(&head,1);
    insertLL(&head,2);
    insertLL(&head,3);
    insertLL(&head,4);
    insertLL(&head,5);
    printLL(head);
    int k =3;
    stack<node *> s;

    node *tmp = head;
    while(tmp != NULL)
    {
        s.push(tmp);
        tmp=tmp->next;
    }
    cout<<endl;
    while(k--)
    {
        tmp = s.top();
        cout<<tmp->data<<" ";
        s.pop();
    }
    return 0;
}
