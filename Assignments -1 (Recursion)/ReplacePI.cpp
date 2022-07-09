#include <iostream>
using namespace std;

void replacePiHelper(char str[], int start)
{
    if (str[start] == '\0' || str[start + 1] == '\0')
    {
        return;
    }

    replacePiHelper(str, start + 1);

    if (str[start] == 'p' && str[start + 1] == 'i')
    {
        int length = 0;
        while (str[length] != '\0')
        {
            length++;
        }
        for (int i = length; i >= start + 2; i--)
        {
            str[i + 2] = str[i];
        }
        length = length + 2;

        str[start] = '3';
        str[start + 1] = '.';
        str[start + 2] = '1';
        str[start + 3] = '4';
    }
}

void replacePi(char input[])
{
    replacePiHelper(input, 0);
}

int main()
{
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}