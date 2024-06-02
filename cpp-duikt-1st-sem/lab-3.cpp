#include <iostream>

using namespace std;

// task 1
void getSumOfDigits() {
	int a;

	Skip:
	cout << "Hi! Enter your desirable 'a' value, it must be a 3-digit integer: " << endl;
	cin >> a;

	int originalInput = a;

	int sum = 0;
	while (a > 0) {
		int digit = a % 10;
		if (digit > 3) {
			sum += digit;
		}
		a /= 10;
	}

	if (originalInput < 100 || originalInput > 999) {
		cerr << "Invalid input. Please enter a three-digit positive number." << endl;
		goto Skip;
	}

	cout << "Sum of digits greater than 3: " << sum << endl;
}

// task 2
void getScheduleForADay() {
	int a;
	cout << "Hi! Wanna see your schedule? Enter day number you would like to see" << endl;
	cin >> a;

	switch (a) {
		case 1:
			cout << "4. Cross-platform programming" << endl << "5. Philosophy" << endl;
			break;
		case 2:
			cout << "2. Foreign Language" << endl << "3. Foreign Language" << endl;
			break;
		case 3:
			cout << "1. Maths" << endl << "2. Foreign Language" << endl << "3. Applied algorithms and data structures"
				 << endl << "5. C++ Programming" << endl;
			break;
		case 4:
			cout << "2. Converged network infrastructure" << endl;
			break;
		case 5:
			cout << "3. Cross-platform programming" << endl;
			break;
		case 6 :
		case 7 :
			cout << "Grab a cup of tea, it's a weekend" << endl;
			break;

		default:
			cout << "Enter a correct value please!" << endl;
	}
}

int main() {
	cout << "- - - - -" << endl;
	getSumOfDigits();
	cout << "- - - - -" << endl;
	getScheduleForADay();
	cout << "- - - - -" << endl;
	return 0;
}
