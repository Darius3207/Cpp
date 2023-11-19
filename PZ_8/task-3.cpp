#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void swapMinMax(int arr[], int size) {
    if (size <= 1) {
        // Масив порожній або має лише один елемент, немає потреби в обміні
        return;
    }

    // Знаходимо індекс найменшого елемента
    int minIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Знаходимо індекс найбільшого елемента
    int maxIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // Обмін значень найбільшого і найменшого елементів
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
}

int main() {
    // Встановлюємо seed для генерації випадкових чисел на основі часу
    srand(time(0));

    int size;

    // Введення розміру масиву від користувача
    cout << "Введіть розмір масиву: ";
    cin >> size;

    int myArray[size];

    // Заповнюємо масив рандомними числами
    for (int i = 0; i < size; ++i) {
        myArray[i] = rand() % 100; // Генеруємо випадкове число в діапазоні від 0 до 99
    }

    // Виводимо початковий масив
    cout << "Початковий масив: ";
    for (int i = 0; i < size; ++i) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    // Змінюємо місцями найбільший і найменший елементи
    swapMinMax(myArray, size);

    // Виводимо змінений масив
    cout << "Масив після зміни: ";
    for (int i = 0; i < size; ++i) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}
