#include <iostream>
#include <windows.h>

int main() {
    setlocale(LC_ALL, "Russian");
    double number;  
    double total_sum = 0;  

    std::cout << "������� ����� (������� 0 ��� ����������):" << std::endl;

    while (true) {
        std::cin >> number;  

        if (number == 0) {  
            break;  
        }

        total_sum += number;  
    }

    std::cout << "����� ���� ��������� �����: " << total_sum << std::endl;  

    return 0;  
}