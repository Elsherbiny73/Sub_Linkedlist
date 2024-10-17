#include <iostream>
#include <stdio.h>
#include "Product.h"
using namespace std;
    int main() {
        cout << "\t\t\t\t\t\tWELCOME In Our Project\t\t\t" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        Product obj;
        while (1) {
            cout << "=====================================================" << endl;
            cout << " ~> 1: Add Phone \t\t ~> 2: display Phone \n" << endl;
            cout << " ~> 3: Quit " << endl;
            char A;
            cout << "-> ";
            cin >> A;
            if (A == '1')
                obj.addProduct();
            else if (A == '2')
                obj.displayProduct();
            else if (A == '3')
                break;
        }
    }
