#include <iostream>
#include <string>

int main()
{
int a = 1;
double b = 1.201;

double result = 0;

double part1 = 0;
double part2 = 0;

part1 = 0.7 * log(a / b) * sin(pow((a + b) * (M_PI / 10), 2));
part2 = 0.8 * log(b / a) * cos(pow((a + b) * (M_PI / 10), 2));
result = pow((part1 + part2), 3./2);

std::cout << "Result is: " << result;
}
