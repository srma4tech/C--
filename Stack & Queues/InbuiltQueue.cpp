#include <queue>
#include <iostream>

using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "Size of Queue is: " << q.size() << endl;
    cout << "Front of Queue is: " << q.front() << endl;
    q.pop();
    q.pop();
    cout << "Size of Queue is: " << q.size() << endl;
    cout << "Front of Queue is: " << q.front() << endl;

    while(!q.empty()){
        cout << "Front of Queue is: " << q.front() << endl;
        q.pop();
    }
}