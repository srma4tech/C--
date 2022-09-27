#include "TreeNode.h"
#include <queue>
#include <vector>
#include <iostream>
using namespace std;

// Print tree recursively
void printTree(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

// Count Node of Tree
int countNode(TreeNode<int> *root)
{
    int ans = 1;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += countNode(root->children[i]);
    }
    return ans;
}

// Print the sum of nodes of Tree
int sumOfNodes(TreeNode<int> *root)
{
    int ans = root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += sumOfNodes(root->children[i]);
    }
    return ans;
}

// Find maximum data node of tree
TreeNode<int> *maxDataNode(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    TreeNode<int> *max = root;

    for (int i = 0; i < root->children.size(); i++)
    {
        TreeNode<int> *desc = maxDataNode(root->children[i]);
        if (max->data < desc->data)
        {
            max = desc;
        }
    }
    return max;
}

// Find height of the tree
int getHeight(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int height = 1;
    for (int i = 0; i < root->children.size(); i++)
    {
        height = max(height, 1 + getHeight(root->children[i]));
    }
    return height;
}

// Print Nodes of Level K
void printAtLevelK(TreeNode<int> *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data << endl;
        return;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        printAtLevelK(root->children[i], k - 1);
    }
}

// Count the Leaf Node
int getLeafNodeCount(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->children.size() == 0)
    {
        return 1;
    }
    int ans = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += getLeafNodeCount(root->children[i]);
    }
    return ans;
}

// Print Level wise Node
void printLevelWise(TreeNode<int> *root)
{
    queue<TreeNode<int> *> que;
    que.push(root);

    while (!que.empty())
    {
        TreeNode<int> *cur = que.front();
        que.pop();

        cout << cur->data << ":";
        for (int i = 0; i < cur->children.size(); i++)
        {
            if (i == cur->children.size() - 1)
            {
                cout << cur->children[i]->data;
            }
            else
            {
                cout << cur->children[i]->data << ",";
            }
            que.push(cur->children[i]);
        }
        cout << endl;
    }
}

// Levelwise take input
TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "Enter root data : " << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    queue<TreeNode<int> *> pendingNodes;

    pendingNodes.push(root);

    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter number of children of " << front->data << endl;
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "Enter " << i << "th child of " << front->data << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

// Recursive
TreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter data : " << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    int n;
    cout << "Enter numnber of children : " << rootData << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

//Pre Order Print of Tree
void preOrderPrint(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    for (int i = 0; i < root->children.size(); i++)
    {
        preOrderPrint(root->children[i]);
    }
}

//Post Order Print of Tree
void postOrderPrint(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        postOrderPrint(root->children[i]);
    }
    cout << root->data << " ";
}

//containsX function Assignment
bool isPresent(TreeNode<int> *root, int x)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == x)
    {
        return true;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        if (isPresent(root->children[i], x))
        {
            return true;
        }
    }
    return false;
}

//delete the tree
void deleteTree(TreeNode<int> *root)
{
    for (int i = 0; i < root->children.size(); i++)
    {
        deleteTree(root->children[i]);
    }
    delete root;
}

int main()
{
    // TreeNode<int> *root = new TreeNode<int>(1);
    // TreeNode<int> *node1 = new TreeNode<int>(2);
    // TreeNode<int> *node2 = new TreeNode<int>(3);

    // root->children.push_back(node1);
    // root->children.push_back(node2);
    TreeNode<int> *root = takeInputLevelWise();
    cout << "Total Node is: " << countNode(root) << endl;
    cout << "Our Tree is as : " << endl;
    printLevelWise(root);
    preOrderPrint(root);
    preOrderPrint(root);
    deleteTree(root);
    printLevelWise(root);
    // printTree(root);
}