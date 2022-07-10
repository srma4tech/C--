#include <iostream>
using namespace std;

void replaceChar(char input[], char c1, char c2)
{
    if (input[0] == '\0')
    {
        return;
    }
    if (input[0] != c1)
    {
        replaceChar(input + 1, c1, c2);
    }
    else
    {
        input[0] = c2;
        replaceChar(input + 1, c1, c2);
    }
}

int main()
{
    char input[10000];
    cin.getline(input, 10000);
    char c1, c2;
    cin >> c1 >> c2;
    replaceChar(input, c1, c2);
    cout << input << endl;
}