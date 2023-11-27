#include <iostream>
using namespace std;

struct Date {
    
	int hours, minutes, add_time;
};

int main() {
    setlocale(LC_ALL, "Ukrainian");
    
	Date time1;
	cout << "Введіть скільки годин: ";
	enter_hours:
	cin >> time1.hours;

	if (time1.hours > 24 || time1.hours < 0) {
		cout << "Виникла помилка, будь ласка, введіть кількість годин ще раз: " << endl;
		goto enter_hours;
	}
		

	cout << "Введіть скільки хвилин: ";
	enter_minutes:
	cin >> time1.minutes;
	
	if (time1.minutes > 60 || time1.minutes < 0) {
		cout << "Виникла помилка, будь ласка, введіть кількість хвилин ще раз: " << endl;
		goto enter_minutes;
	}


	cout << "Введіть час у хвилинах, який хочете додати: ";
	cin >> time1.add_time;
	


	time1.hours += time1.add_time/60;
	if (time1.hours > 24) {
		time1.hours %= 24;
	}
	if (time1.add_time % 60 == 0) {
		result: 
		cout << "Перероблений час: " << time1.hours << ":" << time1.minutes;
	}
	else {
		time1.minutes += time1.add_time % 60;
		if (time1.minutes > 60) {
			time1.hours += 1;
			time1.minutes -= 60;
			
		}
		goto result;
	}

	return 0;
}
