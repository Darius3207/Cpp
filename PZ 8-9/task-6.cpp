#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    
    const int size = 7;
    int arr[size] = {5, 2, 0, 1, 9, 3, 6};
    bool key = false;
    
    cout << "Початковий масив: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int zeroIndex = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            zeroIndex = i;
            key = true;
            break;
        }
    }

    if (key) {
        cout << "Перший нульовий елемент знаходиться в індексі: " << zeroIndex << endl;
    } else {
        cout << "Масив не містить нульових елементів." << endl;
    }

    return 0;
}
