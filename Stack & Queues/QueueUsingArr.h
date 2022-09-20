#include <iostream>
using namespace std;

template <typename T>

class QueueUsingArr
{
    T *data;
    int nextIndex;
    int firstIndex;
    int size = 0;
    int capacity;

public:
    QueueUsingArr(int s)
    {
        capacity = s;
        data = new T[s];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    // insert elements
    void enqueue(T ele)
    {
        if (size == capacity)
        {
            T *newData = new T[2 * capacity];
            int j = 0;
            for (int i = firstIndex; i < capacity; i++)
            {
                newData[j] = data[i];
                j++;
            }
            for(int i=0;i<firstIndex;i++){
                newData[j] = data[i];
                j++;
            }
            delete [] data;
            data = newData;
            firstIndex = 0;
            nextIndex = capacity;

            // cout << "Queue is full!";
            // return;
        }
        data[nextIndex] = ele;
        nextIndex == (nextIndex + 1) % capacity;
        if (firstIndex == -1)
        {
            firstIndex = 0;
        }
        size++;
    }

    T front()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty";
            return 0;
        }
        return data[firstIndex];
    }

    T dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty !" << endl;
            return 0;
        }
        T ans = data[firstIndex];
        firstIndex = (nextIndex + 1) % capacity;
        size--;
        if (size == 0)
        {
            firstIndex = -1;
            nextIndex = 0;
        }
        return ans;
    }
};
