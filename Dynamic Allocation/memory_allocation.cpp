#include <iostream>
using namespace std;

int main()
{
    int *p = new int;
    *p = 10;
    cout << *p << endl;

    double *pd = new double;
    char *c = new char;
    int *pa = new int[50];

    cout << "Enter no of elements " << endl;
    int n;
    cin >> n;

    int *pa2 = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> pa2[i];
    }

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (pa2[i] > max)
        {
            max = pa2[i];
        }
    }
    cout << "Maximum Element is " << max << endl;
    delete p;
    delete pd;
    delete c;
    delete pa;
    delete[] pa2;
}