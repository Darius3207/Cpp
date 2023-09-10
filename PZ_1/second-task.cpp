#include <iostream>
#include <string>

int main()
{
int a = 3;
double b = 0.523;

double result = 0;

double part1 = 0;
double part2 = 0;

part1 = 1.56 * sqrt(sin(b));
part2 = 0.8942 * log(a);
result = pow((part1/part2), 1./4);

std::cout << "Result is: " << result;
}
