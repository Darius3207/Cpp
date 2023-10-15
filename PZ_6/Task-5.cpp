#include <iostream>

int main() {
   
    setlocale(LC_ALL, "Ukrainian");
   
    int N;

    std::cout << "Введіть натуральне число N: ";
    std::cin >> N;

    int product = 1;

    while (N > 0) {
        int digit = N % 10; 
        if (digit == 9) {
            product *= digit; 
        }
        N /= 10; 
    }

    std::cout << "Добуток цифр, які дорівнюють 9: " << product << std::endl;

    return 0;
}
