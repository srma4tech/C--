#include <iostream>
using namespace std;

void removeX(char input[])
{
    if (input[0] == '\0')
    {
        return;
    }
    if (input[0] != 'x')
    {
        return removeX(input + 1);
    }
    else
    {
        int i = 1;
        for (; input[i] != '\0'; i++)
        {
            input[i - 1] = input[i];
        }
        input[i - 1] = input[i];
        return removeX(input);
    }
}

int main()
{
    char input[10000];
    cin.getline(input, 10000);
    removeX(input);
    cout << input << endl;
}