using namespace std;
class Student
{
    int age;

public:
    int rollNo;

public:
    Student() {
        cout<<"constructor called"<<endl;
    }

    Student(int age){
        this->age = age;
    }

    Student(int a, int r){
        age = a;
        rollNo = r;
    }
    void display()
    {
        cout << "Age is: " << age << endl;
        cout << "Roll No is: " << rollNo << endl;
    }

    int getAge()
    {
        return age;
    }

    void setAge(int n)
    {
        age = n;
    }
};