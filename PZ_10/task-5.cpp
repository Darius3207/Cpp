#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    
	int const m = 3;
	int const n = 4;
	int array[m][n];
	srand(time(0));

	cout << "Початковий масив:" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			array[i][j] = rand() % 50 + 1;
			cout << setw(3) << array[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "\n" << endl;
	
	int max = 0;
	int row = 0;
	int column = 0;
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (array[i][j] > max) {
				max = array[i][j];
				row = i + 1;
				column = j + 1;
			}
		}
	}
	cout << "Максимальне значення у масиві: " << max << endl;
	cout << "Ряд: " << row << endl;
	cout << "Стовпчик: " << column << endl;
	
	return 0;
}
