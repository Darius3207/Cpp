#include <iostream>
using namespace std;

int main(void) {
    int n;
    const int MAX_SIZE = 80; 
    
    cout << "Введіть розмір сторони квадрата (більше за 1): ";
    cin >> n;

    if (n <= 1) {
        cout << "Розмір сторони замалий." << endl;
        return 1;
    }

    if (n > MAX_SIZE) {
        cout << "Розмір сторони завеликий." << endl;
        return 1;
    }

    cout << '+';
    int i = 0;
    while (i < n) {
        cout << '-';
        i++;
    }
    cout << '+' << endl;

    i = 0;
    while (i < n) {
        cout << '|';
        int j = 0;
        while (j < n) {
            cout << ' ';
            j++;
        }
        cout << '|' << endl;
        i++;
    }

    cout << '+';
    i = 0;
    while (i < n) {
        cout << '-';
        i++;
    }
    cout << '+' << endl;

    return 0;
}
