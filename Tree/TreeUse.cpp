#include "TreeNode.h"
#include <queue>
#include <vector>
#include <iostream>
using namespace std;

// void printTree(TreeNode<int> *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     cout << root->data << ":";
//     for (int i = 0; i < root->children.size(); i++)
//     {
//         cout << root->children[i]->data << ",";
//     }
//     cout << endl;
//     for (int i = 0; i < root->children.size(); i++)
//     {
//         printTree(root->children[i]);
//     }
// }

int countNode(TreeNode<int> *root)
{
    int ans = 1;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += countNode(root->children[i]);
    }
    return ans;
}

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
TreeNode<int> *takeInput()
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

// TreeNode<int> *takeInput() {
//     int rootData;
//     cout<<"Enter data : "<<endl;
//     cin>>rootData;
//     TreeNode<int> *root = new TreeNode<int>(rootData);
//     int n;
//     cout<<"Enter numnber of children : " << rootData <<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         TreeNode<int>* child = takeInput();
//         root ->children.push_back(child);
//     }
//     return root;
// }

int main()
{
    // TreeNode<int> *root = new TreeNode<int>(1);
    // TreeNode<int> *node1 = new TreeNode<int>(2);
    // TreeNode<int> *node2 = new TreeNode<int>(3);

    // root->children.push_back(node1);
    // root->children.push_back(node2);
    TreeNode<int> *root = takeInput();
    cout << "Total Node is: " << countNode(root) << endl;
    cout << "Our Tree is as : " << endl;
    printLevelWise(root);
    // printTree(root);
}