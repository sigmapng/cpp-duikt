#include <iostream>
#include <cmath>

using namespace std;

void calcEquation4() {
	double x;

	cout << "Hi! Enter your desirable value for 'x', to solve this equation" << endl;

	cout << "Enter your 'x' value" << endl;
	cin >> x;

	if (x >= 0) {
		double result =  exp(-x + 2);
		cout << "Your number is greater than 0. And the result is " << result << endl;
	} else {
		double result = exp(-x) * sin(1 / (x + 3));
		cout << "Your number is smaller or equals 0. And the result is " << result << endl;
	}
}

void calcEquation14() {
	double a;
	double b;

	cout << "Hi! Enter your desirable values for a and b, to determine the coordinates of a point" << endl;

	cout << "Enter your 'a' value " << endl;
	cin >> a;

	cout << "Enter your 'b' value " << endl;
	cin >> b;

	if ( a >= -1 && a <= 1 && b <= 1 && b >= -1) {
		cout << "I'm in" << endl;
	} else {
		cout << "Nuh uh" << endl;
	}
}

int main() {
	calcEquation4();
	calcEquation14();

	return 0;
}
