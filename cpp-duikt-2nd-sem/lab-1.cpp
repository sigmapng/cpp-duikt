#include <iostream>

using namespace std;

void findSmallestNum ();
void createMultiplicationTable();

int main () {
	cout << "- - - - -" << endl;
	findSmallestNum();
	cout << "- - - - -" << endl;
	createMultiplicationTable();
	cout << "- - - - -" << endl;
	return 0;
}

void findSmallestNum () {
	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
	int n = sizeof(vector) / sizeof(vector[0]);
// Insert your code here

}

void createMultiplicationTable () {
	int matrix[10][10] = { };
// Insert your code here
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}
}