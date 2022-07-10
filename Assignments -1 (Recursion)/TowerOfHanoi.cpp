#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char auxi, char dest)
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, source, dest, auxi);
    cout << source << " " << dest << endl;
    towerOfHanoi(n - 1, auxi, source, dest);
}

int main()
{
    int n;
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
}