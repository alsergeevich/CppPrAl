#include <iostream>
#include <vector>

struct Products {
    public:
        std::string name;
        float costProduct;
        int quantityProduct;
};

int main() {

    std::vector<Products> products;  
    for(int i = 0; i < 5; ++i) {
        std::string name;
        float cost = 0.0;
        int quantity = 0;
        std::cin >> name;
        std::cin >> cost;
        std::cin >> quantity;
        Products pr{name, cost, quantity};
        products.push_back(pr);
    }
    int max = 0;
    int index;
    for(int i = 0; i < products.size(); ++i) {
        if(products[i].costProduct > max) {
            max = products[i].costProduct;
            index = i;
        }
    }
    std::cout << "Название товара: " <<  products[index].name << ", Стоимость: " << products[index].costProduct << ", Количество: " << products[index].quantityProduct << std::endl;

}