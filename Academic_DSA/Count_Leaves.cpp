#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};



int countLeaves(Node *node)
{
    if (node == NULL)
        return 0;
    if (node->left == NULL && node->right == NULL)
        return 1;
    return countLeaves(node->left) + countLeaves(node->right);
}

int main()
{
    Node *root=new Node(8);
    root->left=new Node(5);
    root->right=new Node(6);
    root->left->left=new Node(7);
    root->left->right=new Node(7);
    cout<<countLeaves(root);

    return 0;
}