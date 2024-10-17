#include "Stack.h"
template class Stack<int>;
template class Stack<string>;
template class Stack<char>;
template <typename T>
bool Stack<T>::isFull() {
    if (top == size - 1)
        return true;
    return false;
}
template <typename T>
bool Stack<T>::isEmpty() {
    if (top == -1)
        return true;
    return false;
}
template <typename T>
void Stack<T>::push(T e) {
    if (isFull())
        cout << " the stack is full" << endl;
    else
        arr[++top] = e;
}
template <typename T>
T Stack<T>::pop() {
    if (isEmpty())
        cout << " the stack is empty" << endl;
    else
        return arr[top--];
}
