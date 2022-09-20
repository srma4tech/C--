#include "QueueUsingArr.h"
#include <iostream>

using namespace std;

int main()
{
    QueueUsingArr<int> que(5);

    que.enqueue(10);
    que.enqueue(20);
    que.enqueue(30);
    que.enqueue(40);
    que.enqueue(50);
    que.enqueue(60);
    que.enqueue(70);

    cout << "First Element : " << que.front() << endl;
    cout << que.dequeue() << endl;
    cout << que.dequeue() << endl;
    cout << que.dequeue() << endl;

    cout << "Size of Queue is: " << que.getSize() << endl;
    if (que.isEmpty())
    {
        cout << "Queue is Empty!" << endl;
    }
    else
    {
        cout << "Queue is not Empty!";
    }
}