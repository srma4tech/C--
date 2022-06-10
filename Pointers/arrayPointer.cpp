#include <iostream>
using namespace std;
int main()
{
    int a[10];

    cout << a << endl;
    cout << &a[0] << endl;

    a[0] = 5;
    a[1] = 10;

    cout << *a << endl;
    cout << *(a + 1) << endl;

    int *p = &a[0];
    cout << a << " " << p << endl;

    cout << &a << " " << &p << endl;

    cout << sizeof(p) << " " << sizeof(a) << endl;
    p++;
    p = a + 1;
}