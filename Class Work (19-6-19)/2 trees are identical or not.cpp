#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *left,*right;
};
int identical(node *root1 , node *root2)
{
    if(root1 == NULL && root2 == NULL) return 1;
    if(root1 == NULL || root2 == NULL) return 0;
    if(root1->data == root2->data)
        return identical(root1->left , root2->left) && identical(root1->right , root2->right);
    return 0;
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


    node *root2 = new node();
    root2->data = 5;

    node *l11 = new node();
    l11->data = 15;
    root2 ->left = l11;

    node *r11 = new node();
    r11->data = 20;
    root2->right = r11;

    node *l21 = new node();
    l21->data = 21;
    l11->left = l21;
    l11->right = NULL;
    l21->left = NULL;
    l21->right = NULL;

    node *r21 = new node();
    r21->data = 17;
    r21->right = NULL;
    r21->left = NULL;
    r11->right = r21;
    r11->left =NULL;
    cout<<identical(root,root2);

    return 0;
}
