#include <iostream>
#include <string>
using namespace std;


int main()
{
    
 setlocale(LC_ALL, "Ukrainian");
  
 int i;
 int x1;
 int x2;
 int x3;
 int numCount = 0;  // Лічильник парних цифр
 
 Enter:
 cout << "Введіть трьохзначне додатнє число: ";
 cin >> i;
 
 if (i / 100 > 0 && i / 100 < 10) {
     
    x1 = i / 100;
    x2 = i / 10 % 10;
    x3 = i % 10;
     
    if (x1 % 2 == 0) { numCount++; }
    if (x2 % 2 == 0) { numCount++; }
    if (x3 % 2 == 0) { numCount++; }
    
 } else {
     
     cout << "Виникла помилка, будь ласка введіть число ще раз, в діапозоні від 100 до 999!" << endl;
     goto Enter;
     
     }
     
    cout << "Число складається з таких цифр: " << x1 << " " << x2 << " " << x3 << endl;
    cout << "Кількість парних цифр: " << numCount;
    
 
}
