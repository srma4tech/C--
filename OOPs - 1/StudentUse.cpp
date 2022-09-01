#include <iostream>
#include "Student.cpp"
using namespace std;

int main()
{
    Student s1;
    Student *stu = new Student(20);

    // s1.setAge(20);
    // stu -> setAge(24);

    s1.display();
    stu -> display();





    // Create object statically
    // Student s1;


    // // Setting the value
    // //s1.age = 15;
    // s1.rollNo = 101;

    // cout << "S1 Age is: " << s1.getAge() << endl;
    // cout << "S1 Roll No is: " << s1.rollNo << endl;

    // s1.display();

    

    // // Create object dynamically
    // Student *stu = new Student;

    // //stu->age = 16;
    // stu->rollNo = 102;
    // // Dereferencing
    // // cout << "Age is: " << stu->age << endl;          // use either this way
    // // cout << "Roll No is: " << (*stu).rollNo << endl; // or this way
    // stu -> display();

    return 0;
}