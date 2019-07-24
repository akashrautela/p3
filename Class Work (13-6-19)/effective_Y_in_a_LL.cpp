#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    int f=0;
};
string isY(node *h1, node *h2)
{
    while(h1 != NULL)
    {
        h1->f = 1;
        h1 = h1->next;
    }
    while(h2!=NULL)
    {
        if(h2->f == 1) return "Y exits";
        h2 = h2->next;
    }
    return "Y does not exits";
}
int main()
{
    node *head1, *head2;
    node *n1 = new node();
    node *n2 = new node();
    node *n3 = new node();
    node *n4 = new node();
    node *n5 = new node();
    node *n6 = new node();
    n1->data = 2;
    n2->data = 8;
    n3->data = 5;
    n4->data = 7;
    n5->data = 9;
    n6->data = 11;
    n1->next = n2;
    head1 = n1;
    n2->next =n3;
    n3->next = n4;
    n4->next = NULL;
    n5->next = n6;
    head2 = n5;
    n6->next = n3;
    cout<<isY(head1,head2);
}
