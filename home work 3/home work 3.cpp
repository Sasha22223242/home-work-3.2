#include <iostream>
#include <locale>

void CheckNumber(int& num) {
    if (num > 0)
        std::cout << "����� �������." << std::endl;
    else if (num < 0)
        std::cout << "����� ��'����." << std::endl;
    else
        std::cout << "����� ������� ����." << std::endl;
}

int main() {
    setlocale(LC_ALL, "ukr"); 
    int number;
    std::cout << "������ �����: ";
    std::cin >> number;
    CheckNumber(number);
    return 0;
}
