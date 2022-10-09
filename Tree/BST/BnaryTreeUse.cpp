#include <iostream>
#include "BinaryTreeNode.h"
#include <queue>
using namespace std;

void printTree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    if (root->left != NULL)
    {
        cout << "L : " << root->left->data;
    }
    if (root->right != NULL)
    {
        cout << " R : " << root->right->data;
    }
    cout << endl;
    printTree(root->left);
    printTree(root->right);
}

BinaryTreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter data : " << endl;
    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int> *leftChild = takeInput();
    BinaryTreeNode<int> *rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;

    return root;
}

BinaryTreeNode<int> *takeLevelwiseInput()
{
    int rootData;
    cout << "Enter data : " << endl;
    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);

    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter left child of : " << front->data << endl;
        int leftChildData;
        cin >> leftChildData;
        if (leftChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNodes.push(child);
        }
        cout << "Enter left child of : " << front->data << endl;
        int rightChildData;
        cin >> rightChildData;
        if (rightChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}

void printLevelWise(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<BinaryTreeNode<int> *> que;
    que.push(root);
    while (!que.empty())
    {
        BinaryTreeNode<int> *curr = que.front();
        que.pop();
        int currData = curr->data, left = -1, right = -1;
        if (curr->left != NULL)
        {
            left = curr->left->data;
            que.push(curr->left);
        }
        if (curr->right != NULL)
        {
            right = curr->right->data;
            que.push(curr->right);
        }
        cout << currData << ":L:" << left << ",R:" << right << endl;
    }
}

int countNode(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + countNode(root->left) + countNode(root->right);
}

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->data == x)
    {
        return true;
    }
    if (isNodePresent(root->left, x))
        return true;
    if (isNodePresent(root->right, x))
        return true;
    return false;
}

int height(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + max(height(root->left), height(root->right));
}

void mirrorBinaryTree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    BinaryTreeNode<int> *left = root->left;
    root->left = root->right;
    root->right = left;
    mirrorBinaryTree(root->right);
    mirrorBinaryTree(root->left);
}

void inOrder(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

BinaryTreeNode<int> *buildTree(int *preorder, int preLength, int *inorder, int inLength)
{
    if (preLength != inLength || preorder == NULL || inorder == NULL || preLength == 0)
    {
        return NULL;
    }
    int rootIndex = preorder[0], leftCount, rightCount;
    for (leftCount = 0; leftCount < inLength && inorder[leftCount] != rootIndex; leftCount++)
        ;
    rightCount = preLength - leftCount - 1;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootIndex);
    root->left = buildTree(preorder + 1, leftCount, inorder, leftCount);
    root->right = buildTree(preorder + leftCount + 1, rightCount, inorder + leftCount + 1, rightCount);
    return root;
}

BinaryTreeNode<int> *buildTreePostIn(int *postorder, int postLength, int *inorder, int inLength)
{
    if (postLength != inLength || postorder == NULL || inorder == NULL || postLength == 0)
        return NULL;
    int rootVal = postorder[postLength - 1], leftCount, rightCount;
    // Search for rootVal in inorder
    for (leftCount = 0; leftCount < inLength && inorder[leftCount] != rootVal; leftCount++)
        ;
    // leftCount is no of nodes of left tree
    rightCount = postLength - leftCount - 1;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootVal);
    root->left = buildTreePostIn(postorder, leftCount, inorder, leftCount);
    root->right = buildTreePostIn(postorder + leftCount, rightCount, inorder + leftCount + 1, rightCount);
    return root;
}

int findMax(BinaryTreeNode<int> *root)
{
    // Base case
    if (root == NULL)
        return INT_MIN;

    int res = root->data;
    int lres = findMax(root->left);
    int rres = findMax(root->right);
    if (lres > res)
        res = lres;
    if (rres > res)
        res = rres;
    return res;
}

int findMin(BinaryTreeNode<int> *root)
{
    // code
    if (root == NULL)
    {
        return INT_MAX;
    }
    int res = root->data;
    int left = findMin(root->left);
    int right = findMin(root->right);
    if (left < res)
    {
        res = left;
    }
    if (right < res)
    {
        res = right;
    }
    return res;
}

pair<int, int> getMinAndMax(BinaryTreeNode<int> *root)
{
    pair<int, int> p;
    if (root == NULL)
    {
        p.first = 0;
        p.second = 0;
        return p;
    }
    p.first = findMin(root);
    p.second = findMax(root);
    return p;
}

int getSum(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    int res = root->data;
    res += getSum(root->left);
    res += getSum(root->right);
    return res;
}

int depth(BinaryTreeNode<int> *root)
{
    if (root == nullptr)
        return 0;
    int left = depth(root->left);
    int right = depth(root->right);
    return max(left, right) + 1;
}

int depthDiff(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    int left = depth(root->left);
    int right = depth(root->right);
    int diff = left - right;
    if (diff < 0)
        diff *= -1;
    int max = (left > right ? left : right);
    return max + 1;
}

bool isBalanced(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return true;
    int left = depth(root->left);
    int right = depth(root->right);
    int diff = abs(left - right);
    if (diff > 1)
        return false;
    if (!isBalanced(root->left))
        return false;
    if (!isBalanced(root->right))
        return false;
    return true;
}

void printLevelWiseAssignment(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return;

    queue<BinaryTreeNode<int> *> q;
    BinaryTreeNode<int> *curr;

    q.push(root);
    q.push(NULL);

    while (q.size() > 1)
    {
        curr = q.front();
        q.pop();

        if (curr == NULL)
        {
            q.push(NULL);
            cout << "\n";
        }

        else
        {
            if (curr->left)
                q.push(curr->left);

            if (curr->right)
                q.push(curr->right);

            cout << curr->data << " ";
        }
    }
}

BinaryTreeNode<int> *removeLeafNodes(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return NULL;
    if (root->left == NULL && root->right == NULL)
    {
        delete root;
        return NULL;
    }
    root->left = removeLeafNodes(root->left);
    root->right = removeLeafNodes(root->right);
    return root;
}

vector<Node<int> *> constructLinkedListForEachLevel(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        vector<Node<int> *> v;
        return v;
    }
    queue<BinaryTreeNode<int> *> q;
    vector<Node<int> *> vec;
    q.push(root);
    int no = 1;
    while (!q.empty())
    {
        int children = 0;

        vec.push_back(NULL);
        while (no)
        {
            BinaryTreeNode<int> *temp = q.front();
            q.pop();
            // something
            if (vec[vec.size() - 1] == NULL)
            {
                Node<int> *newNode = new Node<int>(temp->data);
                vec[vec.size() - 1] = newNode;
            }
            else
            {
                Node<int> *head = vec[vec.size() - 1];
                Node<int> *newNode = new Node<int>(temp->data);
                newNode->next = head;
                vec[vec.size() - 1] = newNode;
            }
            if (temp->right)
            {
                q.push(temp->right);
                children++;
            }
            if (temp->left)
            {
                q.push(temp->left);
                children++;
            }
            no--;
        }
        no = children;
    }
    return vec;
}

void zigZagOrder(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<BinaryTreeNode<int> *> s1;
    stack<BinaryTreeNode<int> *> s2;
    s1.push(root);

    int flag = 0;
    while (!s1.empty() || !s2.empty())
    {
        if (flag == 0)
        {
            while (!s1.empty())
            {
                BinaryTreeNode<int> *temp = s1.top();
                s1.pop();
                cout << temp->data << " ";
                if (temp->left)
                {
                    s2.push(temp->left);
                }
                if (temp->right)
                {
                    s2.push(temp->right);
                }
            }
            flag = 1;
        }

        else if (flag == 1)
        {
            while (!s2.empty())
            {
                BinaryTreeNode<int> *temp1 = s2.top();
                s2.pop();
                cout << temp1->data << " ";
                if (temp1->right)
                {
                    s1.push(temp1->right);
                }
                if (temp1->left)
                {
                    s1.push(temp1->left);
                }
            }
            flag = 0;
        }

        cout << endl;
    }
}

int main()
{
    // BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);
    // root -> left = node1;
    // root -> right = node2;

    // 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1

    BinaryTreeNode<int> *root = takeLevelwiseInput();
    printTree(root);
    cout << "\nTotal Nodes : " << countNode(root) << endl;
    inOrder(root);

    // printTree(root);
    delete root;
    return 0;
}