#include <iostream>
#include "Node.cpp"
using namespace std;

Node *takeInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

int length(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + length(temp->next);
    }
}

Node *midPoint(Node *head)
{
    // Write your code here
    if (head == NULL)
    {
        return 0;
    }

    Node *temp = head;
    Node *res = NULL;
    int len = length(temp);

    int mid = (len % 2 == 0) ? (len - 1) / 2 : len / 2;

    for (int itr = 0; itr <= mid; itr++)
    {
        if (itr == mid)
        {
            res = temp;
        }
        temp = temp->next;
    }
    return res;
}

void printNode(Node *head)
{
    Node *temp = head;
    ;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    cout << "Enter elements : " << endl;
    Node *head = takeInput();
    cout << "Length of list is : " << length(head) << endl;
    cout << "Linked List is : ";
    printNode(head);
    cout << "\nMid Point of Linked List is : " << midPoint(head);
    return 0;
}