#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *left , *right;
};
int main()
{
    node *root;
    root = new node();
    root->data = 5;
    node *tmp = new node();
    tmp->data = 15;
    root ->left = tmp;
    node *tmp1 = new node();
    tmp1->data = 20;
    root->right = tmp1;
    node *tmp2 = new node();
    tmp2->data = 21;
    tmp->left = tmp2;
    node *tmp3 = new node();
    tmp3->data = 17;
    tmp2->right = tmp3;
    return 0;
}
