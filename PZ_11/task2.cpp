#include <iostream>
using namespace std;

struct Date {
    int hours;
    int minutes;
};

int main() {
    setlocale(LC_ALL, "Ukrainian");
    
    Date startTime;
    
    cout << "Введіть години початку події: ";
    enter_start_hours:
    cin >> startTime.hours;
    if (startTime.hours < 0 || startTime.hours >= 24) {
        cout << "Виникла помилка, будь ласка, введіть кількість годин ще раз: " << endl;
        goto enter_start_hours;
    }

    cout << "Введіть хвилини початку події: ";
    enter_start_minutes:
    cin >> startTime.minutes;
    if (startTime.minutes > 60 || startTime.minutes < 0) {
		cout << "Виникла помилка, будь ласка, введіть кількість хвилин ще раз: " << endl;
		goto enter_start_minutes;
	}
    
    Date endTime;
    
    cout << "Введіть години завершення події: ";
    enter_end_hours:
    cin >> endTime.hours;
    if (endTime.hours < 0 || endTime.hours >= 24) {
        cout << "Виникла помилка, будь ласка, введіть кількість годин ще раз: " << endl;
        goto enter_end_hours;
    }

    cout << "Введіть хвилини завершення події: ";
    enter_end_minutes:
    cin >> endTime.minutes;
    if (endTime.minutes > 60 || endTime.minutes < 0) {
		cout << "Виникла помилка, будь ласка, введіть кількість хвилин ще раз: " << endl;
		goto enter_end_minutes;
	}

    int durationHours = endTime.hours - startTime.hours;
    int durationMinutes = endTime.minutes - startTime.minutes;

    if (durationMinutes < 0) {
        durationHours--;
        durationMinutes += 60;
    }

    cout << "Тривалість події: " << durationHours << ":" << durationMinutes;

    return 0;
}
