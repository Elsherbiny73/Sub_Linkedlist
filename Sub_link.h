#include "Stack.h"
#include<iostream>
using namespace std;
template <typename T>
struct Node {
    T* data;
    Node* next;
    Node(T element) :next(NULL), data(new T[5]) {
        data[0] = element;
    };
    size_t size = 0;
    void Resize() {
        T* arr = new T[--size];
        for (int i = 0; i < size; ++i) {
            arr[i] = data[i + 1];
        }
        delete[] data;
        data = arr;
    }
};
template<typename T>
class Sub_link {
private:
    Node<T>* front{};
    Node<T>* rear{};
    int N_Node = 0;
public:
    ~Sub_link();
    void push(T element);
    bool isFull();
    bool isEmpty();
    void display();
    T pop();
};


