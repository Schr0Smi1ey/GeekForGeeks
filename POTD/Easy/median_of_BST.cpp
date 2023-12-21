/*
Structure of the binary Search Tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// your task is to complete the Function
// Function should return median of the BST
vector<int> v;
void inorder(struct Node *root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    v.push_back(root->data);
    inorder(root->right);
}
float findMedian(struct Node *root)
{
    v.clear();
    inorder(root);
    sort(v.begin(),v.end());
    if(v.size()&1)
    {
        return (float)v[((v.size())/2)];
    }
    else
    return (float)((v[v.size()/2] + v[(v.size()/2) - 1]))/2;
}
