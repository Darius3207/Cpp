#include <iostream>
#include <cstdlib>
#include <ctime>

const int SIZE = 5; // Розмірність масиву

int main() {
    int array[SIZE][SIZE];
    int* ptrArray[SIZE];
    int evenCount = 0, oddCount = 0;

    srand(time(0)); // Ініціалізація генератора випадкових чисел

    // Заповнення масиву випадковими значеннями та ініціалізація вказівників
    for (int i = 0; i < SIZE; ++i) {
        ptrArray[i] = array[i];
        for (int j = 0; j < SIZE; ++j) {
            array[i][j] = rand() % 100; // Генеруємо випадкові числа від 0 до 99
        }
    }

    std::cout << "Елементи масиву:" << std::endl;
    // Виведення елементів масиву
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << *(*(ptrArray + i) + j) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // Виведення головної діагоналі
    std::cout << "Головна діагональ: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << *(*(ptrArray + i) + i) << " ";
    }
    std::cout << std::endl;

    // Виведення побічної діагоналі
    std::cout << "Побічна діагональ: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << *(*(ptrArray + i) + (SIZE - 1 - i)) << " ";
    }
    std::cout << std::endl;

    // Підрахунок парних та непарних елементів масиву
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (*(*(ptrArray + i) + j) % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }
    }

    std::cout << "Кількість парних елементів: " << evenCount << std::endl;
    std::cout << "Кількість непарних елементів: " << oddCount << std::endl;

    return 0;
}
