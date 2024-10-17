#include "Sub_link.h"
template class Sub_link<int>;
template <typename T>
Sub_link<T>::~Sub_link() {
    while (front) {
        Node<T>* current = front->next;
        delete front;
        front = current;
    }
}
template <typename T>
void Sub_link<T>::push(T element) {
    Node<T>* t = new Node<T>(element);
    if (!front) {
        front = rear = t;
        t->size++;
        ++N_Node;
        return;
    }
    if (isFull()) {
       
        rear->next = t;
        rear = t;
        t->size++;
        ++N_Node;
        return;
    }
    else {
        rear->data[rear->size++] = element;
    }
}
template <typename T>
bool Sub_link<T>::isFull() {
    return !(rear->size % 5);
}
template <typename T>
bool Sub_link<T>::isEmpty() {
    return !(front->size);
}
template <typename T>
T Sub_link<T>::pop() {
    Node<T>* t = front;
    if (isEmpty()) {
        front = front->next;
        delete t;
        N_Node--;
    }
    if (!front)
        cerr << "there are an error" <<endl;
    T x = front->data[0];
    front->Resize();
    return x;
}
template <typename T>
void Sub_link<T>::display() {
    int N_Node = 0;
    for (Node<T>* P = front; P; P = P->next) {
        N_Node++;
        cout << "Node " << N_Node << " : {";
        for (int i = 0; i < P->size; i++) {
            cout << P->data[i];
            if (i < P->size - 1)
                cout << " ";
        }
        cout << "}" << endl;
    }
}