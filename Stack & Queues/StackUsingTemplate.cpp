#include<climits>
#include "Pair.cpp"
#include <iostream>
using namespace std;
template<typename T>


class StackUsingDynArray
{
    T *data;
    int nextIndex;
    int capacity;

public:
    StackUsingDynArray()
    {
        data = new T[4];
        nextIndex = 0;
        capacity = 4;
    }

    // return the number of elements present in my stack
    int size()
    {
        return nextIndex;
    }

    bool isEmpty()
    {
        return nextIndex == 0;
    }

    // insert element in stack
    void push(T element)
    {
        if (nextIndex == capacity)
        {
            T *newData = new T[2 * capacity];
            for(int i=0;i<capacity;i++){
                newData[i] = data[i];
            }
            capacity *= 2;
            delete [] data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    // delete element
    T pop()
    {
        if (isEmpty())
        {
            cout << "No Elements available" << endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }
    T top()
    {
        if (isEmpty())
        {
            cout << "No Elements available" << endl;
            return 0;
        }
        return data[nextIndex - 1];
    }
    void display(){

    }
};

int main() {
    StackUsingDynArray<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<< s.top() <<endl;

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    cout<<s.size()<<endl;

    cout<<s.isEmpty()<<endl;

    return 0;
}