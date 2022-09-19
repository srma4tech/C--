#include <iostream>
using namespace std;

template <typename T>

class Node
{
public:
    T data;
    Node<T> *next;

    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
};

template <typename T>
class Stack
{
    Node<T> *head;
    int size; // Number of elements present in stack

public:
    Stack()
    {
        head = NULL;
        size = 0;
    }
    T getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    void push(int ele)
    {
        Node<T> *newNode = new Node<T>(ele);
        newNode->next = head;
        head = newNode;
        size++;
    }
    T pop()
    {
        if(isEmpty())
        {
            return 0;
        }
        T ans = head->data;
        Node<T> *temp = head;
        head = head->next;
        delete head;
        size--;
        return ans;
    }
    T top()
    {
        if(isEmpty())
        {
            return 0;
        }
        return head->data;
    }
};

int main()
{
    Stack<char> ch;
    ch.push(100);
    ch.push(101);
    ch.push(102);
    ch.push(103);
    ch.push(104);

    cout << "Top of Stack is: " << ch.top() << endl;

    cout << "Pop called : " << ch.pop() << endl;
    cout << "Pop called : " << ch.pop() << endl;
    cout << "Pop called : " << ch.pop() << endl;

    cout << "Size of Stack is: " << ch.getSize() << endl;

    cout<< "Stack Empty Status : "<< ch.isEmpty();
}