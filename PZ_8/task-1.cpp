#include <iostream>
#include <cstdlib> // Для функції rand
#include <ctime>   // Для функції time

void bubbleSortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Обмін елементів, якщо потрібно
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Обмін елементів, якщо потрібно
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int n = 12;
    int arr[n];

    // Ініціалізація генератора випадкових чисел
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    // Заповнення масиву випадковими числами в діапазоні від 1 до 100
    for (int i = 0; i < n; i++) {
        arr[i] = std::rand() % 100 + 1;
    }

    std::cout << "Вихідний масив: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    bubbleSortAscending(arr, n);
    std::cout << "Відсортований за зростанням: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    bubbleSortDescending(arr, n);
    std::cout << "Відсортований за спаданням: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
