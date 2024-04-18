#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SIZE = 5; 

int main() {
    int array[SIZE][SIZE];
    int* ptrArray[SIZE];
    int evenCount = 0, oddCount = 0;

    srand(time(0)); 

    for (int i = 0; i < SIZE; i++) {
        ptrArray[i] = array[i];
        for (int j = 0; j < SIZE; j++) {
            array[i][j] = rand() % 100; 
        }
    }

    cout << "Елементи масиву:" << endl;
    
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << *(*(ptrArray + i) + j) << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Головна діагональ: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(*(ptrArray + i) + i) << " ";
    }
   cout << endl;

    cout << "Побічна діагональ: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(*(ptrArray + i) + (SIZE - 1 - i)) << " ";
    }
    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (*(*(ptrArray + i) + j) % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }
    }

    cout << "Кількість парних елементів: " << evenCount << endl;
    cout << "Кількість непарних елементів: " << oddCount << endl;

    return 0;
}
