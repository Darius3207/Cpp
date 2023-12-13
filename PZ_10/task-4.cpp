#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
	setlocale(LC_ALL, "Ukrainian");
	
	const int m = 4;
	const int n = 6;
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
		int summ = 0;
		for (int i = 0; i < m; i++) {
			summ += array[i][j];
		}
		cout << "В стовпчику " << j + 1 << " сума елементів = " << summ << endl;
	}
	return 0;

}
