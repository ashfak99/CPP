#include<iostream>
#include<vector>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

static int idx = -1;

Node* buildTree(vector<int> preorder)
{
    idx++;
    if (preorder[idx]==-1)
    {
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
}

void inorder(Node* root)
{
    if (root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void inorderHelper(Node* root , vector<int>& arr)
{
    if (root==NULL)
    {
        return;
    }
    
    inorderHelper(root->left,arr);
    arr.push_back(root->data);
    inorderHelper(root->right,arr);
}

vector<int> inorderVector(Node* root)
{
    vector<int> arr;
    inorderHelper(root,arr);
    return arr;
}

void preOrder(Node* root)
{
    if (root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postorder(Node* root)
{
    if (root==NULL)
    {
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int sumOfNodes(Node* root)
{
    if (root==NULL)
    {
        return 0;
    }

    int leftSum= sumOfNodes(root->left);
    int rightSum = sumOfNodes(root->right);
    return leftSum+rightSum+root->data;
}

int main()
{
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);
    // vector<int> result = inorderVector(root);
    // for ( int i : result)
    // {
    //     cout<<i<<" ";
    // }

    cout<<sumOfNodes(root);
    
    return 0;
}