// This program does bubble sort by reading in numbers from a file named 'numbers.txt' and sort
// Author: Michael Dang (me)
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void bubbleSortDsc(int numbers[], int size);

int main() {
	ifstream infile("numbers.txt");
	int num,			// number currently being read from file
		numbers[50],	// array of numbers read from file
		size = 0;			// current size of array, also used as index in array
	if (!infile) {
		cout << "Unable to open file." << endl;
	}
	else {
		while (infile >> num) {
			numbers[size] = num;		// initialize to array
			size++;						// increase size of array
		}
	}
	infile.close();

	bubbleSortDsc(numbers, size);

	for (int index = 0; index < size; index++) {
		cout << numbers[index] << " ";
	}

	system("pause");
	return 0;
}

void bubbleSortDsc(int numbers[], int size) {
	bool swap;
	do {
		swap = false;
		for (int i = 0; i < size - 1; i++) {
			if (numbers[i] < numbers[i + 1]) {
				int temp = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = temp;
				swap = true;
			}
		}

	} while (swap);
	
}