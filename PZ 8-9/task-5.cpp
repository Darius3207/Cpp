#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    
    const int size = 5;
    int arr[size];
    srand(time(0));
    
    for(int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1; 
    }
    
    cout << "Початковий масив: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    sort(arr, arr + size);

    int secondLargest = arr[size - 2];

    cout << "Другий за величиною елемент: " << secondLargest << endl;

    return 0;
}
