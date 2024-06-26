#include <iostream>
using namespace std;

int main() {
    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int n = sizeof(vector) / sizeof(vector[0]);
    
    int *ptr = vector; 
    int min_element = *ptr; 
    
    for (int i = 1; i < n; ++i) {
        if (*(ptr + i) < min_element) { 
            min_element = *(ptr + i); 
        }
    }
    
    cout << "Min element in array: " << min_element << endl;
    
    return 0;
}
