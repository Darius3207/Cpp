#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    
    const int m = 12;

    int array[m];
    srand(time(0)); 

    for (int i = 0; i < m; ++i) {
        array[i] = rand() % 100 + 1; 
    }

    
    cout << "Початковий масив: ";
    for (int i = 0; i < m; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    
    for (int i = 0; i < m - 1; ++i) {
        for (int j = 0; j < m - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }

    
    cout << "Відсортований у зростанні: ";
    for (int i = 0; i < m; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    
    for (int i = 0; i < m - 1; ++i) {
        for (int j = 0; j < m - i - 1; ++j) {
            if (array[j] < array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }

    
    cout << "Відсортований у спаданні: ";
    for (int i = 0; i < m; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
