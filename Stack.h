#include <iostream>
using namespace std;
template <typename T>
class Stack {
private:
    int size;
    int top;
    T* arr;
public:
    Stack()
    {
        size = 5;
        top = -1;
        arr = new T[size];

    }
    bool isEmpty();
    bool isFull();
    void push(T value);
    T pop();
};


