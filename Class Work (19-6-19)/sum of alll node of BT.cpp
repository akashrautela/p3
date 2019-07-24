#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;
};
int sum1(node *root)
{
    if(root == NULL) return 0;

    return (sum1(root->left) + sum1(root->right) + root->data);
}
int main()
{
    node *root = new node();
    root->data = 1;

    node *l1 = new node();
    l1->data = 2;
    root ->left = l1;

    node *r1 = new node();
    r1->data = 3;
    root->right = r1;

    node *l2 = new node();
    l2->data = 4;
    l1->left = l2;
    l1->right = NULL;
    l2->left = NULL;
    l2->right = NULL;

    node *r2 = new node();
    r2->data = 5;
    r2->right = NULL;
    r2->left = NULL;
    r1->right = r2;
    r1->left =NULL;
    int sum = sum1(root);
    cout<<sum;
    return 0;
}
