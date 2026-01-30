#include <bits/stdc++.h>
using namespace std;

// Definition of the Node class
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// preorder traversal
void preorder(Node *root)
{
    // base case
    if (root == NULL)
        return;
    cout << root->val << " "; // root
    preorder(root->left);     // left
    preorder(root->right);    // right
}

// inorder traversal
void inorder(Node *root)
{
    // base case
    if (root == NULL)
        return;
    inorder(root->left);      // left
    cout << root->val << " "; // root
    inorder(root->right);     // right
}

// postorder traversal
void postorder(Node *root)
{
    // base case
    if (root == NULL)
        return;
    inorder(root->left);      // left
    inorder(root->right);     // right
    cout << root->val << " "; // root
}

// level order traversal
void level_order_print(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left) // f->left !=NULL
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

// user input fn to create a tree
Node *input_tree()
{
    // root input
    int val;
    cin >> val;

    /*  // edge case: empty tree
     if (val == -1)
         return NULL; */

    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        // 1. ber kore ana
        Node *p = q.front();
        q.pop();

        // 2. oi node ke niye kaj
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. children push
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

int main()
{
    /*   // Creating nodes
      Node *root = new Node(10);
      Node *a = new Node(20);
      Node *b = new Node(30);
      Node *c = new Node(40);
      Node *d = new Node(50);
      Node *e = new Node(60);

      // Linking nodes to form the tree
      root->left = a;
      root->right = b;
      a->left = c;
      a->right = d;
      b->left = e; */

    // user input
    Node *root = input_tree();
    level_order_print(root);

    /*  preorder(root);
     cout << endl;
     inorder(root);
     cout << endl;
     level_order_print(root); */

    return 0;
}