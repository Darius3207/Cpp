#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int monthLength(int year, int month) {
    vector<int> daysInMonth = {31, 28 + isLeap(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return daysInMonth[month - 1];
}

Date today(void) {
    time_t t = time(NULL);
    tm tl = *localtime(&t);
    Date current;
    current.year = tl.tm_year + 1900;
    current.month = tl.tm_mon + 1;
    current.day = tl.tm_mday;
    return current;
}

int daysBetween(Date d1, Date d2) {
    int days = 0;

    for (int month = d1.month; month <= 12; month++) {
        if (month == d1.month) {
            days += monthLength(d1.year, month) - d1.day;
        } else {
            days += monthLength(d1.year, month);
        }
    }

    for (int year = d1.year + 1; year < d2.year; year++) {
        days += isLeap(year) ? 366 : 365;
    }

    for (int month = 1; month < d2.month; month++) {
        days += monthLength(d2.year, month);
    }
    days += d2.day;

    return days;
}

int main(void) {
    Date birthDate = {2023, 8, 14}; // Replace with your actual birth year, month, and day
    Date currentDate = today();

    int days = daysBetween(birthDate, currentDate);

    cout << "Days from " << birthDate.year << "-" << birthDate.month << "-" << birthDate.day;
    cout << " to " << currentDate.year << "-" << currentDate.month << "-" << currentDate.day;
    cout << " is " << days << " days." << endl;

    return 0;
}
