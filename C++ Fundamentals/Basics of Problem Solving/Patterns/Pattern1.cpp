/*
N = 5
- For ith line print i
- odd line start with 0, and value alternates bw 0 and 1
- even line start with 1, and value alternates bw 0 and 1
- Print N lines
    0
    10
    010
    1010
    01010
    101010
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        int val = i % 2 == 0 ? 1 : 0;
        for (int j = 1; j <= i; j++)
        {
            cout << val;
            val = 1 - val;
        }
        cout << endl;
    }
    return 0;
}