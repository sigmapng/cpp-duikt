#include <iostream>
#include <cmath>

using namespace std;

// equation 14
void calcEquation14() {
	float a = 2.0F;
	float b = 19.03F;

	cout << "Your 'a' value = 2.0, and your 'b' value = 19.03" << endl;
	double calcEquationResult = (4.3 * sin((a / b + 1) * M_PI) / (b / a)) * (1 - cos((a / b - 1) * M_PI)) + log(b);

	cout << "So the result of the equation is " << calcEquationResult << endl;
}

// equation #19
void calcEquation19() {
	char a = 4;
	float b = 0.707F;

	cout << "Your 'a' value = 4, and your 'b' value = 0.707" << endl;
	double calcEquationResult = pow(
			(0.5 * (1 - cos(b * M_PI))) / (1 - sin(a * M_PI)) + exp(0.3 * (1 + cos(a * M_PI)) / (1 + sin(b * M_PI))),
			3.0 / 2.0);

	cout << "So the result of the equation is " << calcEquationResult << endl;
}

int main() {
	cout << "- - - - -" << endl;
	calcEquation14();
	cout << "- - - - -" << endl;
	calcEquation19();
	cout << "- - - - -" << endl;
	return 0;
}
