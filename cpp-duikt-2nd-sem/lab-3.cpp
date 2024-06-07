#include <iostream>
#include <ctime>

using namespace std;

bool isLeap(int year);

int monthLength(int year, int month);

struct Date {
	int year;
	int month;
	int day;

	Date(int y, int m, int d) : year(y), month(m), day(d) {}

	Date() : year(0), month(0), day(0) {}
};

Date today();

int daysBetween(Date d1, Date d2);

int main() {
	cout << "- - - - -" << endl;

	for (int yr = 1995; yr < 2017; yr++)
		cout << yr << " -> " << isLeap(yr) << endl;

	cout << "- - - - -" << endl;

	for (int yr = 2000; yr < 2002; yr++) {
		for (int mo = 1; mo <= 12; mo++)
			cout << monthLength(yr, mo) << " ";
		cout << endl;
	}

	cout << "- - - - -" << endl;

	Date t = today();
	cout << t.year << "-" << t.month << "-" << t.day << endl;

	cout << "- - - - -" << endl;

	int year, month, day;
	cout << "Enter your birth year: " << endl;
	cin >> year;
	cout << "Enter your birth month: " << endl;
	cin >> month;
	cout << "Enter your birth day: " << endl;
	cin >> day;

	Date birthDate(year, month, day);
	Date currentDate = today();
	int days = daysBetween(birthDate, currentDate);
	cout << "Days between birthdate and today: " << days << endl;

	cout << "- - - - -" << endl;

	return 0;
}

bool isLeap(int year) {
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				return true;
			} else {
				return false;
			}
		} else {
			return true;
		}
	} else {
		return false;
	}
}

int monthLength(int year, int month) {
	switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			if (isLeap(year)) {
				return 29;
			} else {
				return 28;
			}
		default:
			return 0;
	}
}

/*
int monthLength(int year, int month) {
	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (isLeap(year) && month == 2) {
		return 29;
	} else {
		return daysInMonth[month - 1];
	}
}*/

Date today() {
	time_t t = time(nullptr);
	struct tm *localTime = localtime(&t);
	Date currentDate{};
	currentDate.year = localTime->tm_year + 1900;
	currentDate.month = localTime->tm_mon + 1;
	currentDate.day = localTime->tm_mday;
	return currentDate;
}

int daysBetween(Date d1, Date d2) {
	int days = 0;
	Date temp;

	if (d1.year > d2.year || (d1.year == d2.year && d1.month > d2.month) ||
		(d1.year == d2.year && d1.month == d2.month && d1.day > d2.day)) {
		temp = d1;
		d1 = d2;
		d2 = temp;
	}

	while (d1.year < d2.year || d1.month < d2.month || d1.day < d2.day) {
		d1.day++;
		days++;
		if (d1.day > monthLength(d1.year, d1.month)) {
			d1.day = 1;
			d1.month++;
			if (d1.month > 12) {
				d1.month = 1;
				d1.year++;
			}
		}
	}
	return days;
}