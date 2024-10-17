#include "Product.h"
void Product::addProduct() {

    string data;
    cout << " Enter the kind of the phone [ Iphone, Samsung, Redmi ] -> ";
    cin >> data;
    s.push(data);

    cout << " Enter the kind of the Processor [ A_Bionic, Dimensity, Snapdragon ] -> ";
    cin >> data;
    s.push(data);

    cout << " Enter the kind of the Os [ Android, IOS ] -> ";
    cin >> data;
    s.push(data);

    cout << " Enter the amount of Capacity you need [ 64G, 128G, 256G, 512G ] -> ";
    cin >> data;
    s.push(data);

    cout << " Enter the amount of the RAM [ 4RAM, 6RAM, 8RAM, 12RAM ] -> ";
    cin >> data;
    s.push(data);

    ++N_Product;
    

}
void Product::displayProduct() {
    
    for (int i = 0; i < N_Product; ++i) {
        
        cout << "the contains of the product is : " << endl;
        for (int j = 0; j < 5; ++j) {
            cout << " -" << s.pop() << endl;
        }
    }
    N_Product = 0;
}
