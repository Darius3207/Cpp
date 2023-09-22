#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    
    int num;
    
    Enter:
    cout << "Введіть номер поїзда, щоб дізнатися час його відправлення: ";
    cin >> num;
    
    switch (num) {
        
        case 2136: cout << "Поїзд відправляється о 8:00"; break;
        case 3258: cout << "Поїзд відправляється о 9:00"; break;
        case 15322: cout << "Поїзд відправляється о 10:00"; break;
        case 1482: cout << "Поїзд відправляється об 11:00"; break;
        case 1622: cout << "Поїзд відправляється о 12:00"; break;
        case 4466: cout << "Поїзд відправляється о 13:00"; break;
        case 532: cout << "Поїзд відправляється о 14:00"; break;
        default:
            cout << "Такого номера не існує!" << endl;
            goto Enter;
    }

    return 0;
}
