#include <iostream>
using namespace std;

int main() {
    
    setlocale(LC_ALL, "Ukrainian");
    
    int num;
    int dobutok = 1;

    for (int i = 1; i <= 10; i++) {
        cout << "Введіть натуральне число №" << i << ": ";
        cin >> num;

        dobutok *= num;

        cout << "Добуток введених натуральних чисел = " << dobutok << endl;
    }

    return 0;
}
