#include <bits/stdc++.h>
#include <numeric>
#include <math.h>
#include "BinaryTree.h"
using namespace std;
int main()
{
    Node *p = new Node(4);
    Node *p1 = new Node(1);
    Node *p2 = new Node(6);
    Node *p3 = new Node(5);
    Node *p4 = new Node(2);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    postOrder(p);
    return 0;
}   