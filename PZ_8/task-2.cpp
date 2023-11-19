#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void replaceNegativeElements(int arr[], int size) {
    // Знайти індекс першого максимального елемента
    int maxIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // Замінити від'ємні елементи перед максимальним нулями
    for (int i = 0; i < maxIndex; ++i) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
}

int main() {
    int arr[MAX_SIZE];
    int size;

    // Ввід розміру масиву
    cout << "Введіть розмір масиву: ";
    cin >> size;

    // Ввід елементів масиву
    cout << "Введіть елементи масиву:\n";
    for (int i = 0; i < size; ++i) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    // Виклик функції для заміни від'ємних елементів
    replaceNegativeElements(arr, size);

    // Виведення зміненого масиву
    cout << "Змінений масив:\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
