#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    
    const int size = 8;
    int arr[size];
    int A;
    int count = 0;
    srand(time(0));

    cout << "Введіть число А: ";
    cin >> A;

    for(int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1; 
    }
    
    cout << "Початковий масив: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < size; i++) {
        if(arr[i] > A) {
            count++;
        }
    }

    cout << "Кількість елементів, більша за " << A << ": " << count << endl;

    return 0;
}
