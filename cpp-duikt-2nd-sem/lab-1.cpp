#include <iostream>
#include <random>

using namespace std;

void findSmallestNum();

void fillArray();

int main() {
    cout << "- - - - -" << endl;
    findSmallestNum();
    cout << "- - - - -" << endl;
    fillArray();
    cout << "- - - - -" << endl;
    return 0;
}

void findSmallestNum() {
    int vector[] = {3, -5, 7, 10, -4, 14, 5, 2, -13};
    int *ptr, max;
    ptr = vector;
    int arraySize = sizeof(vector) / sizeof(vector[0]);

    max = *ptr;
    for (int i = 0; i < arraySize; i++) {
        if (ptr[i] > max) {
            max = ptr[i];
        }
    }
    cout << "The biggest number of the array is: " << max << endl;
}

void fillArray() {
    int rows = 5, columns = 5;
    int *ptr;
    int odd = 0, even = 0;
    int arr[rows][columns];
    int sizeOfArray = rows * columns;

    // Use of C++11 random library
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 99);

    ptr = &arr[0][0];

    for (int i = 0; i < sizeOfArray; i++) {
        *(ptr + i) = dis(gen);
        if (*(ptr + i) % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    cout << "Array: " << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << arr[i][j] << "\t";
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
        cout << arr[i][columns - 1 - i] << " ";
    }
    cout << endl;

    cout << "Amount of odd numbers: " << endl << odd << endl;

    cout << "Amount of even numbers: " << endl << even << endl;
}
