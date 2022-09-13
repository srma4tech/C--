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

Node* joinll(Node* h1 ,Node* h2)
{
    if(h1==NULL)
  {
      return h2 ;
  }
  
    if(h2 == NULL)
    {
        return h1 ;
    }
    
    Node * head ;
    Node* tail ;
    
    if(h1->data <= h2->data)
    {
        head = h1 ;
        tail = h1 ;
        h1=h1->next ;
    }
    else
    {
        head = h2 ;
        tail = h2 ;
        h2=h2->next ;
    
    }
    
    
    while(h1!=NULL && h2!=NULL)
    {
         if(h1->data <= h2->data)
    {
    	tail->next = h1 ;
        tail = h1 ;
        h1=h1->next ;
             
    }
         else
    {
      tail->next = h2 ;
        tail = h2 ;
        h2=h2->next ;
    
    }
        
        
    }
    
    if(h1==NULL)
    {
        tail->next = h2 ;
    }
    else
    {
       tail->next = h1 ; 
    }
    
    return head ;
}
Node* mergeSort(Node *head) {
    
    if(head==NULL || head->next==NULL)
    {
        return head ;
    }
    
    Node* slow = head ;
    Node*fast = head->next ;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next ;
        fast =fast->next->next ;
    }
    Node*h2 = slow->next ;
    slow->next =NULL ;
    
   head = mergeSort(head) ;
   h2 = mergeSort(h2) ; 
    
    return joinll(head , h2) ;
}

int main()
{
    cout << "Enter elements : " << endl;
    Node *head = takeInput();
    cout << "Length of list is : " << length(head) << endl;
    cout << "Linked List is : ";
    printNode(head);
    cout << "\nMid Point of Linked List is : " << midPoint(head);
    cout<<"Sorted Linked List is : ";
    mergeSort(head);
    printNode(head);
    return 0;
}