#include <iostream>
#include <locale>

void CheckNumber(int& num) {
    if (num > 0)
        std::cout << "„исло додатне." << std::endl;
    else if (num < 0)
        std::cout << "„исло в≥д'Їмне." << std::endl;
    else
        std::cout << "„исло дор≥внюЇ нулю." << std::endl;
}

int main() {
    setlocale(LC_ALL, "ukr"); 
    int number;
    std::cout << "¬вед≥ть число: ";
    std::cin >> number;
    CheckNumber(number);
    return 0;
}
