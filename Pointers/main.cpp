#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    int *p = &i;
    i++;
    cout << i << endl;
    cout << p << endl;
    cout << &i << endl;
    cout << *p << endl;
    return 0;
}