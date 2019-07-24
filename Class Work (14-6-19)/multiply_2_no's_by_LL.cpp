#include<iostream>
#include<math.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void insertL(node **h , int d)
{
    node *tmp = new node();
    tmp->data = d;
    tmp->next = *h;
    *h = tmp;
}
void insertR(node **h, int d)
{
    node *tmp = new node();
    tmp->data = d;
    tmp->next = NULL;
    if(*h == NULL)
    {
        *h = tmp;
        return ;
    }
    node *nxt = *h;
    while(nxt->next != NULL)
        nxt = nxt->next;
    nxt->next = *h;
}
void printLL(node *h)
{
    while(h != NULL)
    {
        cout<<h->data<<" ";
        h=h->next;
    }
}
node *multiply(node *h1, node *h2)
{
    node *newlist = NULL , *tmp;
    int c =0;
    //while()
    return newlist;
}
void reverseLL(node **h)
{
    node *l = NULL , *c = *h , *r;
    while(c != NULL)
    {
        r = c->next;
        c->next = l;
        l = c;
        c = r;
    }
    *h = l;
}

int main()
{
    node *h1 = NULL , *h2 = NULL, *h3;
    insertL(&h1,5);
    insertL(&h1,4);
    insertL(&h2,3);
    insertL(&h2,2);
    insertL(&h2,1);
    cout<<endl;
    printLL(h1);
    cout<<endl;
    printLL(h2);
    cout<<endl;
    //h3 = multiply(h1 , h2);
    //printLL(h3);
    return 0;
}
