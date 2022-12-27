#include <iostream>
#include <queue>
using namespace std;

class treeNode
{
public:
    int data;
    treeNode *left;
    treeNode *right;

    treeNode(int data);
    treeNode *buildTree();
};

treeNode::treeNode(int data)
{
    this->data = data;
    left = NULL;
    right = NULL;
}

treeNode *buildTree()
{
    int data;
    cin >> data;
    treeNode *root = new treeNode(data);
    if (data == -1)
        return NULL;
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

void preOrder(treeNode *&root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(treeNode *&root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(treeNode *&root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void lvlOrder(treeNode *&root)
{
    queue<treeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        treeNode *front = q.front();
        q.pop();
        cout << front->data << " ";

        if (front->left != NULL)
            q.push(front->left);

        if (front->right != NULL)
            q.push(front->right);
    }
}

int main()
{
    treeNode *root = buildTree();

    cout << "PreOrder transversal: ";
    preOrder(root);

    cout << "\nInOrder transversal: ";
    inOrder(root);

    cout << "\nPostOrder transversal: ";
    postOrder(root);

    cout << "\nLevelOrder transversal: ";
    lvlOrder(root);

    return 0;
}