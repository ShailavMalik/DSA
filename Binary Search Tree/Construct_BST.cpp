#include <iostream>
using namespace std;

class BST
{
    int data;
    BST *left;
    BST *right;

public:
    BST()
    {
    }
    BST(int value)
    {
        data = value;
        left = right = NULL;
    }
    BST *insert(BST *root, int value)
    {
        if (root == NULL)
            return new BST(value);
        if (value > data)
        {
            root->right = insert(root->right, value);
        }
        else
        {
            root->left = insert(root->left, value);
        }

        return root;
    }

    void Inorder(BST *root)
    {
        if (root == NULL)
            return;

        Inorder(root->left);

        cout << root->data << " ";

        Inorder(root->right);
    }
};

int main()
{
    BST b;
    BST *root = b.insert(NULL, 1);
    root = b.insert(root, 2);
    root = b.insert(root, 3);
    root = b.insert(root, 4);
    root = b.insert(root, 5);

    b.Inorder(root);
    return 0;
}