#include<iostream>
#include<stack>
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
void printLL(node *h)
{
    while(h != NULL)
    {
        cout<<h->data<<" ";
        h=h->next;
    }
}
node *reverseLL(node *h)
{
    stack<node *> s;
    node *tmp = h;
    while(tmp->next != NULL)
    {
        s.push(tmp);
        tmp = tmp->next;
    }
    h = tmp;
    while(!s.empty())
    {
        tmp->next = s.top();
        s.pop();
        tmp=tmp->next;
    }
    tmp->next = NULL;
    return h;
}
int main()
{
    node *h1 = NULL , *h3;
    insertL(&h1,5);
    insertL(&h1,4);
    insertL(&h1,3);
    insertL(&h1,2);
    insertL(&h1,1);
    printLL(h1);
    cout<<endl;
    h3 = reverseLL(h1);
    printLL(h3);
    return 0;
}


