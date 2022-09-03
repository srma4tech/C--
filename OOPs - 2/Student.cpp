// Shallow and deep copy

#include <iostream>
#include <string.h>
using namespace std;

class Student
{
    int age;
    char *name;

public:
    Student(int age, char *name)
    {
        this->age = age;
        // shallow copy - should be avoided
        // this->name = name;

        // Deep Copy
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    // Copy Constructor
    Student(Student &s)
    {
        this->age = s.age;
        this->name = new char[strlen(s.name) + 1];
        strcpy(this->name, name);
    }

    void display()
    {
        cout << name << " & " << age << endl;
    }
};

int main()
{
    char name[] = "Sachin";
    Student s1(28, name);
    s1.display();

    name[0] = 'X';
    Student s2(s1);
    // name[3] = 'e';
    // Student s2(24, name);
    s2.display();

    s1.display();
}