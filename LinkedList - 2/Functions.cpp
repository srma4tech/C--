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

Node *joinll(Node *h1, Node *h2)
{
    if (h1 == NULL)
    {
        return h2;
    }

    if (h2 == NULL)
    {
        return h1;
    }

    Node *head;
    Node *tail;

    if (h1->data <= h2->data)
    {
        head = h1;
        tail = h1;
        h1 = h1->next;
    }
    else
    {
        head = h2;
        tail = h2;
        h2 = h2->next;
    }

    while (h1 != NULL && h2 != NULL)
    {
        if (h1->data <= h2->data)
        {
            tail->next = h1;
            tail = h1;
            h1 = h1->next;
        }
        else
        {
            tail->next = h2;
            tail = h2;
            h2 = h2->next;
        }
    }

    if (h1 == NULL)
    {
        tail->next = h2;
    }
    else
    {
        tail->next = h1;
    }

    return head;
}
Node *mergeSort(Node *head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *h2 = slow->next;
    slow->next = NULL;

    head = mergeSort(head);
    h2 = mergeSort(h2);

    return joinll(head, h2);
}

Node *reverseLinkedListRec(Node *head)
{
    Node *smallAns = NULL;
    if (head == NULL)
    {
        return head;
    }
    if (head->next == NULL)
    {
        return head;
    }
    else
    {
        Node *newHead = reverseLinkedListRec(head->next);
        Node *temp = newHead;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        // make end NULL
        temp->next = head;
        head->next = NULL;

        return newHead;
    }
}

Node *evenAfterOdd(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *oddh = NULL;
    Node *evenh = NULL;
    Node *oddt = NULL;
    Node *event = NULL;

    while (head != NULL)
    {
        // even
        if (head->data % 2 == 0)
        {
            if (evenh == NULL)
            {
                evenh = head;
                event = head;
                head = head->next;
            }
            else
            {
                event->next = head;
                event = head;
                head = head->next;
            }
        }
        else
        {
            // odd
            if (oddh == NULL)
            {
                oddh = head;
                oddt = head;
                head = head->next;
            }
            else
            {
                oddt->next = head;
                oddt = head;
                head = head->next;
            }
        }
    }
    if (event != NULL)
    {
        event->next = NULL;
    }
    else
    {
        oddt->next = NULL;
        return oddh;
    }
    if (oddt != NULL)
    {
        oddt->next = evenh;
        return oddh;
    }
    else
    {
        return evenh;
    }
}

Node *skipMdeleteN(Node *head, int M, int N)
{
    if (head == NULL)
        return NULL;

    if (M == 0)
    {
        return 0;
    }
    Node *pt = head;
    for (int i = 1; i < M; i++)
    {
        if (pt->next == NULL)
            break;
        pt = pt->next;
    }

    for (int i = 1; i <= N; i++)
    {
        if (pt->next == NULL)
            break;
        Node *t = pt->next;
        pt->next = t->next;
        t->next = NULL;
        delete t;
    }

    Node *ans = skipMdeleteN(pt->next, M, N);
    return head;
}

Node *swapNodes(Node *head, int i, int j)
{
    if (i > j)
    {
        i = i + j;
        j = i - j;
        i = i - j;
    }
    // Find nodes
    if (i == 0)
    {
        if (j == 1)
        {
            Node *cur = head->next;
            head->next = cur->next;
            cur->next = head;
            return cur;
        }
        Node *pt = head;
        for (int c = 1; c < j; c++)
            pt = pt->next;

        Node *temp = head->next;
        Node *cur = pt->next;

        head->next = cur->next;
        pt->next = head;
        cur->next = temp;
        return cur;
    }
    if (j - i == 1)
    {
        Node *pt = head;
        for (int c = 1; c < i; c++)
            pt = pt->next;

        Node *cur = pt->next;
        Node *cur1 = cur->next;

        cur->next = cur1->next;
        pt->next = cur1;
        cur1->next = cur;
        return head;
    }
    Node *pt1 = head;
    Node *pt2 = head;

    for (int c = 1; c < i; c++)
        pt1 = pt1->next;

    for (int c = 1; c < j; c++)
        pt2 = pt2->next;

    Node *cur1 = pt1->next;
    Node *cur2 = pt2->next;

    Node *temp = cur1->next;

    cur1->next = cur2->next;
    pt2->next = cur1;
    pt1->next = cur2;
    cur2->next = temp;

    return head;
}

Node *revelist(Node *head)
{

    if (head == NULL)
        return NULL;
    if (head->next == NULL)
        return head;

    Node *prev = head;
    Node *cur = head->next;
    prev->next = NULL;
    while (cur)
    {
        Node *temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }

    return prev;
}

int getLenght(Node *head)
{
    int c = 0;
    while (head)
    {
        head = head->next;
        c++;
    }
    return c;
}

Node *kReverse(Node *head, int k)
{
    if (head == NULL)
        return NULL;
    int count = 0;

    Node *front = head;
    Node *tail = head;
    Node *newHead;

    for (int i = 1; i < k; i++)
    {
        if (tail->next == NULL)
            break;
        else
            tail = tail->next;
    }
    Node *newtail = front;
    Node *temp = tail->next;
    tail->next = NULL;
    newHead = revelist(front);

    Node *ans = kReverse(temp, k);
    newtail->next = ans;
    return newHead;
}

Node *bubbleSort(Node *head)
{
    Node *i = head;

    while (i)
    {
        Node *j = head;
        Node *prev = head;
        while (j->next)
        {
            Node *temp = j->next;
            if (j->data > temp->data)
            {
                if (j == head)
                {
                    j->next = temp->next;
                    temp->next = j;
                    prev = temp;
                    head = prev;
                }
                else
                {
                    j->next = temp->next;
                    temp->next = j;
                    prev->next = temp;
                    prev = temp;
                }
                continue;
            }
            prev = j;
            j = j->next;
        }
        i = i->next;
    }
    return head;
}

int main()
{
    Node *rev = NULL;
    Node *varEvenAfterOdd = NULL;
    cout << "Enter elements : " << endl;
    Node *head = takeInput();
    cout << "Length of list is : " << length(head) << endl;
    cout << "Linked List is : ";
    printNode(head);
    cout << "\nMid Point of Linked List is : " << midPoint(head)->data << endl;
    cout << "Sorted Linked List is : ";
    mergeSort(head);
    printNode(head);
    cout << "\nreverse of linked list is : ";
    rev = reverseLinkedListRec(head);
    printNode(rev);
    varEvenAfterOdd = evenAfterOdd(head);
    printNode(varEvenAfterOdd);
    return 0;
}