#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    
	int const m = 3;
	int const n = 3;
	int array[m][n];
	srand(time(0));

	cout << "Початковий масив:" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			array[i][j] = rand() % 20 + 1;
			cout << setw(3) << array[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "\n" << endl;
	
	int summ = array[0][0] + array[1][1] + array[2][2] + array[0][2]+ array[1][1] + array[2][0];
	cout << "Сума чисел по діагоналях = " << summ << endl;
	
	return 0;
}
