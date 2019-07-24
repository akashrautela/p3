#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;
};
int max3(int a,int b,int c)
{
    int ar[3];
    ar[0]=a , ar[1]=b, ar[2]=c;
    sort(ar,ar+3);
    return ar[2];
}
int height(node *root)
{
    if(root == NULL) return 0;
    return max(height(root->left) , height(root->right))+1;
}
int diameter(node *root)
{
    if(root == NULL) return 0;
    return max3(height(root->left) + height(root->right) , diameter(root->left) , diameter(root->right));
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
    cout<<diameter(root);
}
