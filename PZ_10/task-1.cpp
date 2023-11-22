#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
	const int m = 4;
	const int n = 3;
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

	for (int i = 0; i < m; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (array[i][j] % 2 == 0 && array[i][j] != 0) {
				count++;
			}
		}
		cout << "В рядку " << i + 1 << " кількість парних чисел = " << count << endl;
	}
	return 0;

}

