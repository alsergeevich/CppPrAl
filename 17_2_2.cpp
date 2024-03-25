#include <iostream>
#include <vector>

struct Products {
    std::string name;
    float cost;
    int count;
};

int main () {
    float sum {0};
    std::string n;
    float c;
    int cnt;
    std::vector<Products> p_vec;

    for(int i = 0; i < 5; ++i) {
        std::cin >> n;
        std::cin >> c;
        std::cin >> cnt;
        Products pr;
        pr.name = n;
        pr.cost = c;
        pr.count = cnt;
        p_vec.push_back(pr);
    }

    for(const auto& i : p_vec) {
        sum += (i.cost * i.count);
    }
    
    std::cout << sum << std::endl;
}