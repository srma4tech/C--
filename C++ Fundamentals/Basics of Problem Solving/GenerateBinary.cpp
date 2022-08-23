#include <iostream>
#include <math.h>
using namespace std;

int decToBin(int n)
{
    int res = 0, i = 0;
    while (n > 0)
    {
        int rem = n % 2;
        res += (rem * pow(10, i));
        n = n / 2;
        i++;
    }
    return res;
}

int binToDec(int n)
{
    int res = 0, i = 0;
    while (n > 0)
    {
        int rem = n % 10;
        res += rem * pow(2, i);
        n /= 10;
        i++;
    }
    return res;
}

int main()
{
    cout<<"Select the operation from below: "<<endl;
    cout<<"1. Decimal To Binary - "<<endl;
    cout<<"2. Binary To Decimal - "<<endl;
    int choice,N;
    cin >> choice;
    if(choice == 1){
        cout<<"You have selected 1. Decimal To Binary Conversion"<<endl;
        cout<<"Enter how many numbers you want to convert - "<<endl;
        cin >> N;
    }else if(choice == 2){
        cout<<"You have selected 2. Binary To Decimal Conversion"<<endl;
        cout<<"Enter how many numbers you want to convert - "<<endl;
        cin >> N;
    }
    switch (choice)
    {
    case 1:
        int decNum;
        while (N > 0)
        {
            cout<<"Enter "<< N << "th Decimal Number : "<<endl; 
            cin >> decNum;
            cout << N << "th number" << decNum <<"'s Binary Equivalent is: " << decToBin(decNum) <<endl;
            N--;
        }
        break;
    case 2:
        int binNum;
        while (N > 0)
        {
            cout<<"Enter "<< N << "th Binary Number : "<<endl; 
            cin >> binNum;
            cout<< N << "th number" << decNum <<"'s Decimal Equivalent is: "  << binToDec(binNum) <<endl;
            N--;
        }
        break;
    default:
        cout<<"Ohhh..hh.. wrong choice.. :( "<< "\n" << "Run Again!"<<endl;
        break;
    }

    return 0;
}