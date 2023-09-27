#include <iostream>
using namespace std;

int main() {
    
    int ip1, ip2, ip3, ip4;

    cout << "Enter the first number: ";
    cin >> ip1;

    if (ip1 < 1 || ip1 > 255) {
        cout << "Invalid input. Number must be in the range 1 to 255." << endl;
        return 1; 
    }

    cout << "Enter the second number: ";
    cin >> ip2;

    if (ip2 < 1 || ip2 > 255) {
        cout << "Invalid input. Number must be in the range 1 to 255." << endl;
        return 1; 
    }

    cout << "Enter the third number: ";
    cin >> ip3;

    if (ip3 < 1 || ip3 > 255) {
        cout << "Invalid input. Number must be in the range 1 to 255." << endl;
        return 1; 
    }

    cout << "Enter the fourth number: ";
    cin >> ip4;

    if (ip4 < 1 || ip4 > 255) {
        cout << "Invalid input. Number must be in the range 1 to 255." << endl;
        return 1; 
    }

    cout << "IP Address: " << ip1 << "." << ip2 << "." << ip3 << "." << ip4 << endl;

    return 0;
}
