#include<iostream>
using namespace std;

class Student {
    public:
        int age;
        int const rollNumber;

        Student(int r, int age) : rollNumber(r) , age(age){
            //rollNumber = r;
        }
};

int main() {
    Student s1(101,20);
}