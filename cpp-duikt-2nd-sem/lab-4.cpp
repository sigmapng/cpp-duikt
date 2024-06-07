#include <iostream>

using namespace std;

bool isPrime(int num);

void increment(int &num);

void increment(int &num, int increment_value);

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

	for (int i = 0; i <= 21; i++) {
		if (isPrime(i)) {
			cout << i << " ";
		}
	}
	cout << endl;
	cout << "- - - - -" << endl;

	int n = 0;
	for (int i = 0; i < 10; i++) {
		if (i % 2)
			increment(n);
		else
			increment(n, i);
	}
	cout << n << endl;
	cout << "- - - - -" << endl;

	return 0;
}

bool isPrime(int num) {
	if (num <= 1) {
		return false;
	}

	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}

void increment(int &num) {
	num += 1;
}

void increment(int &num, int increment_value) {
	num += increment_value;
}