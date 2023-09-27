#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double num1 = 2.3;
    double num2 = 2.3;
    double num3 = 2.123456;
    double num4 = 2.123456;
    double num5 = 2.123456;
    
    printf("%.*lf\n", 1, num1);
    printf("%.*lf\n", 2, num2);
    printf("%.*lf\n", 6, num3);
    printf("%.*lf\n", 2, num4);
    printf("%.*lf\n", 0, num5);

    return 0;
}
