#include <iostream>
#include <string>
using namespace std;


int main()
{
  
  double x;
  double y;
  
  cout << "Enter x value: ";
  cin >> x;
  cout << "Enter y value: ";
  cin >> y;
  
  
  if (x >= -1 && x <= 1 && y >= -1 && y <= 1) {
      cout << "You win!";
      }
      
  else {
      cout << "You lose!";
      }
 
 
 
}
