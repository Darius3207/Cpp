#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    
	int const m = 4;
	int const n = 7;
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
	
	int min = 50;
	int row = 0;
	int column = 0;
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (array[i][j] < min) {
				min = array[i][j];
				row = i + 1;
				column = j + 1;
			}
		}
	}
	cout << "Мінімальне значення у масиві: " << min << endl;
	cout << "Ряд: " << row << endl;
	cout << "Стовпчик: " << column << endl;
	
	return 0;
}
