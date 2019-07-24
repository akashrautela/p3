#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
};
string isY(node *h1, node *h2)
{
    node *tmp1=h1;
    while(tmp1 != NULL)
    {
        node *tmp2=h2;
        while(tmp2!=NULL)
        {
            if(tmp1 == tmp2) return "Y exist";
            tmp2 = tmp2->next;
        }
        tmp1=tmp1->next;
    }
    return "Y does not exist";
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
    return 0;
}
