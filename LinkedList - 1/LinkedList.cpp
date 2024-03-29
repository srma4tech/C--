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

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
// Iterative approach
// int length(Node *head)
// {
//     // Write your code here
//     int count = 0;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }
// Recursive function
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

void printIthNode(Node *head, int i)
{
    int len = length(head);
    int ele = 0;
    Node *temp = head;
    for (int itr = 0; itr < len; itr++)
    {
        temp = temp->next;
        if (itr == i - 1)
        {
            cout << temp->data;
        }
    }
}
// Iterative approach
// Node *insertNode(Node *head, int i, int data)
// {
//     Node *newNode = new Node(data);
//     Node *temp = head;
//     int count = 0;

//     if (i == 0)
//     {
//         newNode->next = head;
//         head = newNode;
//         return head;
//     }

//     while (count < i - 1 && temp != NULL)
//     {
//         temp = temp->next;
//         count++;
//     }
//     if (temp != NULL)
//     {
//         Node *a = temp->next;
//         temp->next = newNode;
//         newNode->next = a;
//     }
//     return head;
// }

// Recursive approach
Node *insertNode(Node *head, int i, int data)
{
    // Write your code here
    if (head == NULL)
    {
        return NULL;
    }
    if (i == 0)
    {
        Node *temp = new Node(data);
        temp->next = head;
        return temp;
    }
    if (i == 1)
    {
        Node *temp = new Node(data);
        temp->next = head->next;
        head->next = temp;
        return head;
    }
    Node *curr = insertNode(head->next, i - 1, data);
    return head;
}

// Recursive approach
Node *deleteNodeRec(Node *head, int pos)
{
    // Write your code here
    if (head->next == NULL)
    {
        return NULL;
    }
    if (pos == 0)
    {
        Node *temp = head->next;
        head->next = NULL;
        delete head;
        return temp;
    }
    if (pos == 1)
    {
        Node *temp = head->next;
        head->next = temp->next;
        temp->next = NULL;
        delete temp;
        return head;
    }
    Node *curr = deleteNodeRec(head->next, pos - 1);
    return head;
}
// Recursive to find element start
int helper(Node *head, int n, int index)
{
    if (head == NULL)
    {
        return -1;
    }
    if (head->data == n)
    {
        return index;
    }
    int shortAns = helper(head->next, n, index + 1);
    return shortAns;
}

int findNode(Node *head, int n)
{
    return helper(head, n, 0);
}
// Recursive to find element end

void printReverse(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    printReverse(head->next);
    cout << head->data << " ";
}

Node *appendLastNToFirst(Node *head, int n)
{
    if(n == 0){
        return head;
    }
    int len = length(head);
    if(len != n && n <len){
        int skip = len - n;
        Node *prev = NULL;
        Node *curr = head;
        
        while(skip > 0){
            prev = curr;
            curr = curr->next;
            skip--;
        }
        
        prev -> next = NULL;
        Node *tempHead = head;
        head = curr;
        
        while(curr -> next != NULL){
            curr = curr->next;
        }
        curr->next = tempHead;
    }
    return head;
}

Node *removeDuplicates(Node *head)
{
    if(head == NULL){
        return head;
    }
	Node *temp = head;            
	while(temp->next != NULL && temp != NULL){
		//Duplicate Found
		if(temp->data == temp->next->data){      
			//DUplicate Removed
			temp -> next = temp ->next ->next;    
		}
		else{
			//No Duplicate Present
			temp = temp->next;               
		}
	}
	//Return Head
	return head;
}

int main()
{
    Node *head = takeInput();
    int pos, ele;
    cout << "Enter position of element : " << endl;
    cin >> pos;
    cout << "Linked List is : ";
    print(head);
    cout << endl;
    cout << "Length of Linked List is : " << length(head) << endl;
    cout << "Element on " << pos << " Linked List is : ";
    printIthNode(head, pos);
    cout << "\nEnter element which you want to insert : " << endl;
    cin >> ele;
    head = insertNode(head, pos, ele);
    cout << "Updated Linked List is : ";
    print(head);
    cout << "Element you have added is at index : " << findNode(head, ele);
    // print(head);
    cout << endl;
    printReverse(head);
    appendLastNToFirst(head, pos);
    print(head);
    // statically creation
    // Node n1(1);
    // Node *head = &n1;
    // Node n2(2);

    // Node n3(3);
    // Node n4(4);
    // Node n5(5);

    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n5;

    // n1.next = &n2;

    // cout << n1.data << "  " << n2.data << endl;

    // cout << head->data << endl;

    // Dynamically Creation
    //  Node *n3 = new Node(10);
    //  Node *head = n3;
    //  Node *n4 = new Node(20);
    //  n3 -> next = n4;

    return 0;
}