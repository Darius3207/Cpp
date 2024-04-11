#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    srand(time(0));

    int n; 
    cout << "Enter the size of the array: ";
    cin >> n;

    float *arr = new float[n];

    for (int i = 0; i < n; i++) {
        arr[i] = static_cast<float>(rand()) / (RAND_MAX / 4) - 2;
        cout << arr[i] << " ";
    }
    
    
    cout << endl;

    int positiveCount = 0;
    int negativeCount = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        }
    }

    cout << "Number of positive numbers: " << positiveCount << endl;
    cout << "Number of negative numbers: " << negativeCount << endl;

    delete[] arr;

    return 0;
}
