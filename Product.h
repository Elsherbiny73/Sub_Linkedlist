#include "Stack.h"
#include<iostream>
using namespace std;
class Product {
private:
    Stack<string> s;
    int N_Product = 0;
public:
    void addProduct();
    void displayProduct();
};

