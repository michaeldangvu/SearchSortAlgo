#include <iostream>
#include <fstream>

using namespace std;

int main() {
	const int NUM_EMPLOYEES = 6;
	int hours[NUM_EMPLOYEES];
	int count;
	ofstream outfile("employees_hours.dat");
	outfile << 123 << 789 << endl;
	outfile << 456 << endl;

	outfile.close();

	int num; 

	ifstream infile("employees_hours.dat");
	if (infile) {
		while (infile >> num) {
			cout << "line : " << num << endl;
		}
	}


	// Open the data file


	system("pause");
	return 0;
}