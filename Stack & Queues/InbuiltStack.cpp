#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    cout << s1.size() << endl;
    cout << s1.top() << endl;
    s1.pop();
    cout << s1.top() << endl;
    cout << s1.empty() << endl;
    cout << s1.size() << endl;

    return 0;
}