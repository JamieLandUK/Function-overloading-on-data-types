#include <iostream>
#include <string>

std::string variableType (int input) {
    return "n integer.";
} 

std::string variableType (double input) {
    return " real number.";
}

std::string variableType (std::string input) {
    return " string.";
}

std::string variableType (char input) {
    return " character.";
}

int main() {
    std::cout << "Variable Types:" << std::endl;

    int a = 9;
    std::cout << a << " is a" << variableType(a) << std::endl;
    double b = 1.55;
    std::cout << b << " is a" << variableType(b) << std::endl;
    std::string c = "Lorem ipsum";
    std::cout << c << " is a" << variableType(c) << std::endl;
    char d = 'z';
    std::cout << d << " is a" << variableType(d) << std::endl;
    
}