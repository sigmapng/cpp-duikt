#include <iostream>

using namespace std;

//task 1
// Function to sort an array in ascending order using the bubble sort algorithm
void sortAscending(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Swap elements if they are in the wrong order
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to sort an array in descending order using the bubble sort algorithm
void sortDescending(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to demonstrate bubble sort on an array of 12 numbers
void bubbleSortArray() {
    cout << "Hi! There is array of 12 numbers sorted in ascending and descending order" << endl;
    int arr[13] = {5, 10, 3, 7, 12, 8, 9, 14, 2, 6, 1, 4, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortAscending(arr, size);
    for (int i = 0; i < size; i++) {
        cout << " " << arr[i];
    }
    cout << endl;

    sortDescending(arr, size);
    for (int i = 0; i < size; i++) {
        cout << " " << arr[i];
    }
    cout << endl;
}

//task 2
void changeArraysNegativeValues() {
    const int size = 7;
    int arr[size] = {1, -5, 4, -10, -3, 2, 8};

    // Find the index of the first maximum element
    int maxIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // Replace negative elements before the first maximum element with zeros
    for (int i = 0; i < maxIndex; ++i) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    cout << "Modified array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << i << arr[i] << endl;
    }
}

int main() {
    cout << "- - - - -" << endl;
    bubbleSortArray();
    cout << "- - - - -" << endl;
    changeArraysNegativeValues();
    cout << "- - - - -" << endl;

    return 0;
}