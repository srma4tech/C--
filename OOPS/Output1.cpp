#include <iostream>
using namespace std;

// class Student {
//     int rollNumber;
// };

// int main() {
//     Student s;
//     cout << s.rollNumber;
// }

// #include <iostream>
// using namespace std;

// class Shape{
//     public :
//     int height;
//     int width;
// };

// int main() {
//     Shape *s = new Shape();
//     s -> height = 1;
//     cout << s -> height;
// }

// #include <iostream>
// using namespace std;

// class Box
// {
// public:
//     int width;
//     int height;
//     int length;
//     void volume()
//     {
//         cout << "Volume is: " << length * width * height;
//     }
// };

// int main()
// {
//     Box b;
//     b.height = 5;
//     b.width = 4;
//     b.volume();
// }

// #include <iostream>
// using namespace std;

// class Student{
//     public :
//     char *name;
//     int rollNo;
//     Student(int num){
//         rollNo = num;
//     }

//     void print(){
//         cout << rollNo;
//     }
// };

// int main() {
//     Student s(12);
//     s.print();
// }

// #include <iostream>
// using namespace std;

// class Student{
//     public :
//     char name;
//     int rollNo;

//     Student(int num){
//         rollNo = num;
//     }

//     void print(){
//         cout << name << " "  <<  rollNo;
//     }
// };

// int main() {
//     Student *s = new Student();
//     s -> name = 'A';
//     s -> rollNo = 15;
//     s -> print();
// }

// class Student {
//     public :

//     const int rollNumber;
//     int age;

//     Student(int r, int a) : rollNumber(r), age(a) {
//     }
// };

// int main() {
//     Student s1(100, 23);
//     cout << s1.rollNumber << " " << s1.age;
// }

// class Student {
//     public :

//     const int rollNumber;
//     int age;

//     int &x;

//     Student(int r, int a) : rollNumber(r), age(a) {
//     }
// };

// int main() {
//     Student s1(100, 23);
//     s1.x = age;
//     cout << s1.rollNumber << " " << s1.age << " " << s1.x;
// }

// class Student {
//     public :

//     int rollNumber;
//     int age;

// };


// int main() {
//     Student s1;

//     Student const s2 = s1;

//     s1.rollNumber = 101;
//     s1.age = 20;

//     cout << s2.rollNumber << " " << s2.age;
// }


// class Student {
//     int rollNumber;

//     public :

//     int age;

//     Student(int r) {
//         rollNumber = r;
//     }

//     int getRollNumber() {
//         return rollNumber;
//     }

// };


// int main() {
//     Student s1(101);
//     s1.age = 20;

//     Student const s2 = s1;
//     cout << s2.getRollNumber();
// }

// class Student {
//     public :

//     int rollNumber;

//     static int getRollNumber() {
//         return rollNumber;
//     }
// };


// int main() {
//     Student s;
//     s.rollNumber = 101;
//     cout << s.getRollNumber() << endl;
// }

class Student {
    public :

    int rollNumber;
    static int totalStudents;

    Student() {
        totalStudents++;
    }
};

int Student::totalStudents = 20;

int main() {
    Student s1, s2, s3, s4;
    cout << Student :: totalStudents;
}
