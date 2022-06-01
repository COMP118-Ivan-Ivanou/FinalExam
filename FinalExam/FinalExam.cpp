/** \file	   FinalExam.cpp
 *  \brief     FinalExam program
 *  \details   This program is the program that complete all required 
 *			   things that suppose to be completed during the tasks 
 *			   in final exam sheetpaper
 *  \author    Ivan Ivanou
 *  \version   0.1
 *  \date      2022-2022
 *  \copyright University of Nicosia.
 */
#include <iostream>

using namespace std;

int main()
{
	double matrix[4][3];
	int answer, counter1 = 0;

	cout << "1) Enter data in matrix( range -5.5 to 5.5" << endl;
	cout << "2) Negate all elements( i.e. if a element is -5 => 5, or element 5 => -5)" << endl;
	cout << "3) Show data in matrix" << endl;
	cout << "4) Exit" << endl;
	cout << "5) Second branch: find for all items with value 1.0" << endl;

	cin >> answer;

	if (answer == 1) {
		for (int i = 0; i < 4; i++) {
			for (int y = 0; y < 3; y++) {
				cout << "Enter the data: " << endl;
				cin >> matrix[i][y];
			}
		}
	}
	if (answer == 2) {
		for (int h = 0; h < 4; h++) {
			for (int l = 0; l < 3; l++) {
				if (matrix[h][l] < -5.5) {
					matrix[h][l] += matrix[h][l] + matrix[h][l];
				}
				if (matrix[h][l] > 5.5) {
					matrix[h][l] -= matrix[h][l] + matrix[h][l];
				}
			}
		}
	}
	if (answer == 3) {
		for (int z = 0; z < 4; z++) {
			for (int g = 0; g < 3; g++) {
				cout << matrix[z][g] << endl;
			}
		}
	}
	if (answer == 4) {
		exit(0);
	}
	if (answer == 5) {
		for (int h = 0; h < 4; h++) {
			for (int l = 0; l < 3; l++) {
				if (matrix[h][l] == 1.0) {
					counter1 += 1;
				}
			}
		}
		cout << counter1 << endl;
	}
	else {
		cout << "Sorry. I don't know this answer!" << endl;
		exit(1);
	}
}