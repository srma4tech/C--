/*
Following is the main function we are using internally.
Refer this for completing the ComplexNumbers class.
*/

#include <iostream>
using namespace std;

class ComplexNumbers
{
    // Complete this class
private:
    int real;
    int imag;

public:
    ComplexNumbers(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    void print()
    {
        cout << real << " + "
             << "i" << imag << endl;
    }

    void plus(ComplexNumbers c2)
    {
        this->real = real + c2.real;
        this->imag = imag + c2.imag;
    }

    void multiply(ComplexNumbers const &c2)
    {
        int a = (real * c2.real) - (imag * c2.imag);
        int b = (real * c2.imag) + (imag * c2.real);

        real = a;
        imag = b;
    }
};

int main()
{
    int real1, imaginary1, real2, imaginary2;
    cout << "Enter First: " << endl;
    cin >> real1 >> imaginary1;
    cout << "Enter Second: " << endl;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cout << "1. Plus \n2. Multiply" << endl;
    cin >> choice;

    if (choice == 1)
    {
        c1.plus(c2);
        c1.print();
    }
    else if (choice == 2)
    {
        c1.multiply(c2);
        c1.print();
    }
    else
    {
        return 0;
    }
}
