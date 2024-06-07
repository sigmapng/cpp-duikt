#include <iostream>

using namespace std;

bool isPrime(int num);

int main() {
	cout << "- - - - -" << endl;
	int number;
	cout << "Enter a number " << endl;
	cin >> number;

	if (isPrime(number)) {
		cout << number << " is a prime number." << endl;
	} else {
		cout << number << " is not a prime number." << endl;
	}
	cout << "- - - - -" << endl;

	return 0;
}

bool isPrime(int num) {
	if (num <= 1) {
		return false;
	}

	for (int i = 2; i * i <= num; ++i) {
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}