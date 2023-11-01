#include <iostream>

void bubbleSortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Обмін елементів
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
                // Обмін елементів
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int m[] = {12, 7, 2, 9, 4, 6, 8, 1, 5, 3, 11, 10};
    int n = sizeof(m) / sizeof(m[0]);

    // Сортування за зростанням
    bubbleSortAscending(m, n);

    std::cout << "Масив упорядкований за зростанням: ";
    for (int i = 0; i < n; i++) {
        std::cout << m[i] << " ";
    }
    std::cout << std::endl;

    // Сортування за спаданням
    bubbleSortDescending(m, n);

    std::cout << "Масив упорядкований за спаданням: ";
    for (int i = 0; i < n; i++) {
        std::cout << m[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
