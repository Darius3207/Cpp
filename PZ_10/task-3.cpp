#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
	setlocale(LC_ALL, "Ukrainian");
	
	const int m = 5;
	const int n = 7;
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
		int summ = 0;
		for (int j = 0; j < n; j++) {
			summ += array[i][j];
		}
		cout << "Сума елементів " << i + 1 << "-го рядка = " << summ << endl;
	}
	return 0;

}
