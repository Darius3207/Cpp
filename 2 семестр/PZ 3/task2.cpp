#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;

int main() {
    srand(time(0));

    const int rows = 3;
    const int cols = 3;

    int **matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 10;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Elements on the main diagonal: ";
    for (int i = 0; i < rows; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    cout << "Elements on the secondary diagonal: ";
    for (int i = 0; i < rows; i++) {
        cout << matrix[i][rows - i - 1] << " ";
    }
    cout << endl;

    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }

    cout << "Number of even elements: " << evenCount << endl;
    cout << "Number of odd elements: " << oddCount << endl;

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
