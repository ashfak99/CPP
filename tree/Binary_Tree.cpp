#include<iostream>
#include<vector>
#include<queue>
#include<map>

using namespace std;

int ans = 0;

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

int height(Node* root)
{
    if (root==NULL)
    {
        return 0;
    }
    
    int leftHt = height(root->left);
    int rightHt = height(root->right);

    ans=max(ans , leftHt+rightHt);

    return max(leftHt,rightHt)+1;
}

int countOfNodes(Node* root)
{
    if (root==NULL)
    {
        return 0;
    }
    int leftCount = countOfNodes(root->left);
    int rightCount = countOfNodes(root->right);

    return leftCount+rightCount+1;
}

int diameterOfNode(Node* root)
{
    height(root);
    return ans;
}

void topView(Node* root)
{
    queue<pair<Node*,int>> q;
    map<int,int> m;

    q.push({root,0});

    while (q.size()>0)
    {
        Node* curr = q.front().first;
        int currHD = q.front().second;
        q.pop();

        if (m.find(currHD)==m.end())
        {
            m[currHD]=curr->data;
        }
        
        if (curr->left!=NULL)
        {
            q.push({curr->left,currHD-1});
        }
        
        if (curr->right!=NULL)
        {
            q.push({curr->right,currHD+1});
        }
    }
    
    for (auto it : m)
    {
        cout<<it.second<<" ";
    }
    cout<<endl;
}

void kthLevelTree(Node* root , int k)
{
    if (root==NULL) return;

    if (k==1)
    {
        cout<<root->data<<" ";
        return;
    }
    kthLevelTree(root->left,k-1);
    kthLevelTree(root->right,k-1);
    
}

int main()
{
    vector<int> preorder = {1,2,7,-1,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);
    kthLevelTree(root,3);
    return 0;
}