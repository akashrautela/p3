#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
string isloop(node *h)
{
    node *p1=h,*p2=h;
    if(h == NULL) return "empty list";
    while(p2!=NULL && p2->next!=NULL)
    {
        if(p1 == p2) return "LOOP EXITS";
        p1 = p1->next;
        p2 = p2->next->next;
    }
    return "NO LOOP";
}
int main()
{
    node *head = NULL;
    node *n1 = new node();
    n1->data = 10;
    node *n2 = new node();
    node *n3 = new node();
    node *n4 = new node();
    node *n5 = new node();
    n1->next =n2;
    head = n1;
    n2->data = 20;
    n2->next = n3;
    n3->data = 30;
    n3->next = n4;
    n4->data = 40;
    n4->next = n5;
    n5->data = 50;
    n5->next = n3;
    cout<<isloop(head);
    return 0;
}
