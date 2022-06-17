#include <iostream>
using namespace std;

void increment(int &n)
{
    n++;
}
// bad practice
int &ret(int n)
{
    int a = n;
    return a;
}

// bad practice
int *ret2()
{
    int i = 10;
    return &i;
}

int main()
{
    int *p = ret2();
    //cout << p << endl;
    
    int i = 10;

    int &k = ret(i);
    cout << k << endl;
    increment(i);

    cout << i << endl;

    int &j = i;

    i++;
    cout << j << endl;
    j++;
    cout << i << endl;

    k = 100;
    j = k;
    cout << i << endl;
}