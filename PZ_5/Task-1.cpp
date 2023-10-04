#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
     setlocale(LC_ALL, "Ukrainian");
    
    double x, y;

    for (int i = 1; i <= 5; i++) {
        cout << "Введіть значення x" << i << ": ";
        cin >> x;

        y = pow(sin(x), 5) + fabs(5 * x - 1.5);

        cout << "Значення функції при x = " << x << " дорівнює " << y << endl;
    }

    return 0;
}
