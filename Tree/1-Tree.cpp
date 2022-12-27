#include <iostream>
using namespace std;

class treeNode
{

    int data;
    treeNode *left;
    treeNode *right;

public:
    treeNode(int data);
    treeNode *buildTree();
};

// constructor
treeNode::treeNode(int data)
{
    this->data = data;
    left = NULL;
    right = NULL;
}

treeNode * buildTree()
{
    int data;
    cin >> data;
    if (data == -1)
        return NULL;
    treeNode *left = buildTree();
    treeNode *right = buildTree();
}

int main()
{
    treeNode * root = buildTree();

    return 0;
}