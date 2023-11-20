#include <iostream>
#include <cstdlib>
#include <ctime>
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

    int min_index = 0;
    int max_index = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] < arr[min_index]) {
            min_index = i;
        }
        if(arr[i] > arr[max_index]) {
            max_index = i;
        }
    }

    int var = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = var;

    cout << "Змінений масив: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
