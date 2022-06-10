#include <iostream>
using namespace std;
int main()
{
    char str[] = "abcde";
    char *pstr = "abcde"; // pointing to the same temp memory of str[], should avoid

    int a[] = {1, 2, 3, 4};
    char b[] = "abc";

    cout << a << " " << b << endl;

    char *c = &b[0];
    cout << c << endl;

    char c1 = 'a';
    char *pc = &c1;

    cout << c1 << " " << &c1 << endl;
}