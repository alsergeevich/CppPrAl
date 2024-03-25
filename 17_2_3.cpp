#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>

struct Student
{
    std::string name;
    std::vector<int> scores;
};


int main() {
    std::vector<Student> v_student;
    int counStr;
    std::cin >> counStr;
    for(int i = 0; i < counStr; ++i) {
       Student s;
       std::cin >> s.name;
       std::string str;

       std::stringstream ss;
       int temp;
       std::getline(std::cin, str);
       ss << str;
       while (ss >> temp) s.scores.push_back(temp);
       v_student.push_back(s);
        
    }
    double result {0};
    for(auto it : v_student) {
        std::cout << it.name << " ";
        for(auto sc : it.scores) {
            result += sc;
        }
        
        std::cout << std::fixed << std::setprecision(2) << (double)(result / it.scores.size()) << "\n";
        result = 0;
    }
}