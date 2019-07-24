#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
};
int count=-1; // GLOBAL VARIABLE WHICH WILL HOLD the INDEX OF LAST NODE, thats why it is initialized with -1 not zero
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
int findknode(node *h, int k)
{
    int no=0;
    while(no != k)
    {
        h = h->next;
        no++;
    }
    return h->data;
}
void ispalindrome(node *h)
{
    int b=0, e=count;
    while(b<e)
    {
        if( findknode(h,b) != findknode(h,e) )
        {
            cout<<"not palindrome";
            return;
        }
        b++;
        e--;
    }
    cout<<"palindrome";
}
void count_nodes(node *h)
{
    while(h != NULL)
    {
        count++;
        h=h->next;
    }
}
int main()
{
    node *head = NULL;
    insertLL(&head,1);
    insertLL(&head,2);
    insertLL(&head,3);
    insertLL(&head,2);
    insertLL(&head,1);
    count_nodes(head);
    printLL(head);
    ispalindrome(head);
    return 0;
}
