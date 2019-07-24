#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left , *right;
};
int height(node *root)
{
    if(root == NULL) return 0;

    return max(height(root->left), height(root->right))+1;
}
void printlevel(node *root , int level)
{
    if(root == NULL) return;
    if(level == 1)
    {
        cout<<root->data<<" ";
        return ;
    }
    printlevel(root->left , level-1);
}
int main()
{
        node *root = new node();
    root->data = 5;

    node *l1 = new node();
    l1->data = 15;
    root ->left = l1;

    node *r1 = new node();
    r1->data = 20;
    root->right = r1;

    node *l2 = new node();
    l2->data = 21;
    l1->left = l2;
    l1->right = NULL;
    l2->left = NULL;
    l2->right = NULL;

    node *r2 = new node();
    r2->data = 17;
    r2->right = NULL;
    r2->left = NULL;
    r1->right = r2;
    r1->left =NULL;
    int h = height(root);
    for(int i=1;i<=h;i++)
    {
        printlevel(root,i);
    }
    return 0;
}
