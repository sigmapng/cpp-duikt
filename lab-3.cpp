#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a, b, c;

	cout << "Enter a value for 'a' " << endl;
	cin >> a;

	cout << "Enter a value for 'b' " << endl;
	cin >> b;

	c = sqrt(pow(a, 2) + pow(b, 2));
	cout << "Your hypotenuse is " << c;

	return 0;
}
