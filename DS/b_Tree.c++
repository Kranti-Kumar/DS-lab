#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *buildTree(Node *root)
{
    cout << "Enter the data for Node: " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for left Node: " << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for Right Node: " << endl;
    root->right = buildTree(root->right);
    return root;
}

void anuj(Node *root,int &count1){
    if (root == NULL){
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        count1++;
    }
        anuj(root->left,count1);
        anuj(root->right,count1);
    }
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void BuildInLevelTree(Node *&root)
{
    queue<Node *> q;
    int data;
    cout << "Enter data for Tree " << endl;
    cin >> data;
    root = new Node(data);
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << "Enter the data for " << temp->data << " left ";
        int leftData;
        cin >> leftData;
        if (leftData != -1)
        {
            Node *leftNode = new Node(leftData);
            temp->left = leftNode;
            q.push(leftNode);
        }
        cout << "Enter the data for " << temp->data << " right ";
        int rightData;
        cin >> rightData;
        if (rightData != -1)
        {
            Node *rightNode = new Node(rightData);
            temp->right = rightNode;
            q.push(rightNode);
        }
    }
}
int main()
{
    Node *Root = NULL;
    int count = 0;
    BuildInLevelTree(Root);
    cout << "INOrder Travelser" << endl;
    inorder(Root);
    cout << endl << "PREOrder Travelser" << endl;
    preorder(Root);
    cout << endl << "POSTOrder Travelser" << endl;
    postorder(Root);
    anuj(Root, count);
    cout << endl << "leaf nodes " <<count<< endl;

    return 0;
}