#include<iostream>
using namespace std;
class node
{
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
node * findmiddle(node *h)
{
    node *p1=h, *p2=h;
    if(h != NULL)
    {
        while(p2 != NULL && p2->next != NULL)
        {
            p1 = p1->next;
            p2 = p2->next->next;
        }
        return p1;
    }
}
node * reverseLL(node *h)
{
    node *l = NULL, *current = h, *r ;
    while(current != NULL)
    {
        r=current->next;
        current->next=l;
        l = current;
        current = r;
    }
    return l;
}
string ispalindrome(node *l, node * r)
{
    while(r != NULL)
    {
        if(l->data != r->data) return "Not palindrome";
        r = r->next;
        l = l->next;
    }
    return "Palindrome";
}
int main()
{
    node *head = NULL, *middle;
    insertLL(&head,10);
    insertLL(&head,5);
    insertLL(&head,8);
    insertLL(&head,8);
    insertLL(&head,5);
    insertLL(&head,10);
    printLL(head);
    cout<<endl;
    middle = findmiddle(head);
    node * head2 = reverseLL(middle->next);
    middle->next = head2;
    printLL(head);
    cout<<endl;
    cout<<ispalindrome(head,middle->next);
}
