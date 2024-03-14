#include <iostream>
#include <vector>

struct Person
{
    std::string name;
    int age;
};

int main () {
    std::vector<Person> people;
    people.push_back({"Alice", 25});
    people.push_back({"Bob", 30});
    people.push_back({"Charlie", 22});

    for(const auto& person : people) {
        std::cout << "Name: " << person.name << ", Age: " << person.age << std::endl;
    }
}