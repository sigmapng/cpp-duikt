#include <iostream>
#include <random>

using namespace std;

void findAmountOfPosAndNegNum();

void fillDynamicArr();

int main() {
    cout << "- - - - -" << endl;
    findAmountOfPosAndNegNum();
    cout << "- - - - -" << endl;
    fillDynamicArr();
    cout << "- - - - -" << endl;
    return 0;
}

void findAmountOfPosAndNegNum() {
    int n = 12;
    int positiveCount = 0;
    int negativeCount = 0;
    auto *arr = new double[n];

    // Use of C++11 random library
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(-2.0, 2.0);

    for (int i = 0; i < n; i++) {
        arr[i] = dis(gen);
    }
    cout << "Array: " << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        }
    }

    cout << "Amount of positive numbers: " << positiveCount << endl;
    cout << "Amount of negative numbers: " << negativeCount << endl;

    delete[] arr;
}


void fillDynamicArr() {
    int rows = 3;
    int columns = 3;
    int **arr = new int *[rows];
    int even_count = 0;
    int odd_count = 0;

    // Use of C++11 random library
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 30);

    for (int i = 0; i < rows; i++) {
        arr[i] = new int[columns];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; ++j) {
            arr[i][j] = dis(gen);
        }
    }

    cout << "Array" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Values on main diagonal: " << endl;
    for (int i = 0; i < rows; i++) {
        cout << arr[i][i] << " ";
    }
    cout << endl;


    cout << "Values on side diagonal: " << endl;
    for (int i = 0; i < rows; i++) {
        cout << arr[i][rows - 1 - i] << " ";
    }
    cout << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (arr[i][j] % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
    }

    cout << "Amount of even numbers: " << endl << even_count << endl;
    cout << "Amount of odd numbers: " << endl << odd_count << endl;

    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }

    delete[] arr;
}