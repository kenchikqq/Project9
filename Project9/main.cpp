#include <iostream>
#include <windows.h>

int main() {
    setlocale(LC_ALL, "Russian");
    double number;  
    double total_sum = 0;  

    std::cout << "Введите числа (введите 0 для завершения):" << std::endl;

    while (true) {
        std::cin >> number;  

        if (number == 0) {  
            break;  
        }

        total_sum += number;  
    }

    std::cout << "Сумма всех введенных чисел: " << total_sum << std::endl;  

    return 0;  
}