#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
	setlocale(LC_ALL, "Ukrainian");
	
	const int m = 6;
	const int n = 4;
	int array[m][n];
	srand(time(0));

    cout << "Початковий масив:" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			array[i][j] = rand() % 50 + 1;
			cout << setw(3) << array[i][j]<<" ";
		}
		cout << endl;
	}
	
	cout << "\n" << endl;

	for (int j = 0; j < n; j++) {
		int count = 0;
		for (int i = 0; i < m; i++) {
			if (array[i][j] % 2 == 0 && array[i][j] != 0) {
				count++;
			}
		}
		cout << "В стовпчику " << j + 1 << " кількість парних чисел = " << count << endl;
	}
	return 0;

}
