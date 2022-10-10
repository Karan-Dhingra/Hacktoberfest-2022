#include<bits/stdc++.h>
#include<numeric>
#include<math.h>
using namespace std;
class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int x)
        {
            data = x;
            left = NULL;
            right = NULL;
        }
};

void preOrder(Node *root)
{
    if (root != NULL)
    {
        cout << root->data;
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(Node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data;
    }
}

void inOrder(Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->data;
        inOrder(root->right);
    }
}

// class BT
// {
//     Node *p = new Node(2);
    
// };