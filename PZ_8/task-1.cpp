#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int m = 12;

    int array[m];
    srand(time(0)); // Ініціалізуємо генератор випадкових чисел залежно від часу

    for (int i = 0; i < m; ++i) {
        array[i] = rand() % 100 + 1; // Генеруємо випадкове число від 1 до 100
    }

    // Виводимо початковий масив
    cout << "Початковий масив: ";
    for (int i = 0; i < m; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Сортування бульбашкою у зростанні
    for (int i = 0; i < m - 1; ++i) {
        for (int j = 0; j < m - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }

    // Виводимо відсортований масив у зростанні
    cout << "Відсортований у зростанні: ";
    for (int i = 0; i < m; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Сортування бульбашкою у спаданні
    for (int i = 0; i < m - 1; ++i) {
        for (int j = 0; j < m - i - 1; ++j) {
            if (array[j] < array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }

    // Виводимо відсортований масив у спаданні
    cout << "Відсортований у спаданні: ";
    for (int i = 0; i < m; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

