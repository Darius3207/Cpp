#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    
    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;


    int arr[n];

    cout << "Введіть елементи масиву:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    int maxIndex = -1;
    for (int i = 0; i < n; i++) {
        if (maxIndex == -1 || arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    for (int i = 0; i < maxIndex; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    cout << "Змінений масив:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    

    return 0;
}
