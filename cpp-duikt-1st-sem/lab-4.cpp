#include <iostream>
#include <iomanip>

using namespace std;

// task 6
void getComparisonResult() {
	bool answer;
	int value;

	cout << "Hi! Enter a value to check if it will pass the test" << endl;
	cin >> value;

	answer = value >= 0 && value < 10 || value * 2 < 20 && value - 2 > -2 || value - 1 > 1 && value / 2 < 10 ||
			 value == 111;
	cout << (answer ? "Yes! " : "Nuh uh...") << endl << endl;
}

// task 7
void getRoundedNumbers() {
	float a = 2.3F;
	float b = 2.3F;
	float c = 2.123456F;
	float d = 2.123456F;
	float e = 2.123456F;

	cout << "Hi! There is your numbers rounded" << endl;
	cout << fixed << a << endl;
	cout << fixed << setprecision(2) << b << endl;
	cout << fixed << setprecision(6) << c << endl;
	cout << fixed << setprecision(2) << d << endl;
	cout << fixed << setprecision(0) << e << endl;
	cout << endl;
}

// task 8
void getEpsilonComparisonResult() {
	int a, b;
	float c, d;

	cout << "Hi! Enter 2 number values" << endl;
	cout << "Enter your 'a' value" << endl;
	cin >> a;
	cout << "Enter your 'b' value" << endl;
	cin >> b;

	c = (float) a / 1;
	d = (float) b / 1;

	if (c - d <= 0.000001 && c - d >= -0.000001) {
		cout << "Results are equal (by 0.000001 epsilon)" << endl << endl;
	} else {
		cout << "Results are not equal (by 0.000001 epsilon)" << endl << endl;
	}
}

// task 9
void getIpFromInput() {
	int a, b, c, d;

	cout << "Hi, you'll have to enter 4 numbers, all of them must be an integers and in a range from 1 to 255" << endl;

	cout << "Enter value for the first number" << endl;
	cin >> a;
	cout << "Enter value for the second number" << endl;
	cin >> b;
	cout << "Enter value for the third number" << endl;
	cin >> c;
	cout << "Enter value for the fourth number" << endl;
	cin >> d;

	if ((a >= 1 && a <= 255) && (b >= 1 && b <= 255) && (c >= 1 && c <= 255) && (d >= 1 && d <= 255)) {
		cout << a << "." << b << "." << c << "." << d << endl;
	} else {
		cout << "Sorry, try again. Remember that your values must be an integer and in a range from 1 to 255" << endl;
	}
}

int main() {
	getComparisonResult();
	getRoundedNumbers();
	getEpsilonComparisonResult();
	getIpFromInput();

	return 0;
}