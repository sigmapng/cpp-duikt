#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// task 1
void calcEquation1() {
    double x, y;

    cout << "Hi! Enter your x value to calculate y equation" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter x: " << endl;
        cin >> x;
        y = pow(sin(x), 5) + abs(5 * x - 1.5);
        cout << "Your y = " << y << endl << endl;
    }
}

// task 2.4
void getNumSquared() {
    int sum = 0;

    for (int i = 1; i <= 25; ++i) {
        sum += i * i;
    }

    cout << "Sum of squares from 1 to 25: " << sum << endl;
}

// task 3.4
double func(double x) {
    return 5 * pow(3, x) + sqrt(-x + 6);
}

void getFuncResult() {
    int a, b, h;

    cout << "Hi! Please enter following values to get results of the function." << endl;
    cout << "Please enter 'a' value" << endl;
    cin >> a;
    cout << "Please enter 'b' value" << endl;
    cin >> b;
    cout << "Please enter 'h' value" << endl;
    cin >> h;

    cout << "---------------" << endl;
    cout << ":" << setw(4) << "X" << setw(4) << ":" << setw(4) << "Y" << setw(4) << ":" << endl;
    cout << "---------------" << endl;

    for (int x = a; x <= b; x += h) {
        if (x >= a && x <= b) {
            cout << ":" << setw(4) << fixed << setprecision(2) << x << setw(4) << ":"
                 << setw(9) << fixed << setprecision(2) << func(x) << setw(4) << ":" << endl;
        } else {
            cout << ":" << setw(4) << fixed << setprecision(2) << x << setw(4) << ":"
                 << setw(4) << "N/A" << setw(4) << ":" << setw(4)
                 << " (The value of x does not belong to the range of permissible values)"
                 << endl;
        }
    }
    cout << "---------------" << endl;
}

int main() {
	cout << "- - - - -" << endl;
    calcEquation1();
	cout << "- - - - -" << endl;
    getNumSquared();
	cout << "- - - - -" << endl;
    getFuncResult();
	cout << "- - - - -" << endl;

    return 0;
}