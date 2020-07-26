//==============================================================================
// Name        : cpp-KT_lb2.cpp
// Author      : Tobias Gion
// Version     :
// Copyright   : 
// Description : Karriere Tutor Übungsblatt LB2 - Typen, Variablen und Ausdrücke
//==============================================================================

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char* argv[]) {



	cout << "//==============================================================================" << endl;
	cout << "// Aufgabe 1" << endl;
	cout << "//==============================================================================" << endl;

	// Integer
	int i = 10;
	cout << "Ganzahl i = " << i << endl;

	// Double
	double d = 33.3;
	cout << "Fließkommazahl d = " << d << endl;

	// Char
	char c = 'k';
	cout << "Zeichen c = " << c << endl;

	// String
	string s = "TGion";
	cout << "String s = " << s << endl;



	cout << "//==============================================================================" << endl;
	cout << "// Aufgabe 2" << endl;
	cout << "//==============================================================================" << endl;

	bool hat_zwei_argumente;
	int a = 10;
	int b = 20;

	// Check if we have at least two arguments (argc > 2) given at start and write values to integer a and b
	hat_zwei_argumente = (argc > 2);

	if (hat_zwei_argumente) {

		// Use stoi(char *) to convert argument to integer
		a = stoi(argv[1]);
		b = stoi(argv[2]);

	}

	cout << "Zahl #1: " << a << " Zahl #2: " << b << endl;



	cout << "//==============================================================================" << endl;
	cout << "// Aufgabe 3" << endl;
	cout << "//==============================================================================" << endl;

	int int_bot, int_top, int_skip;
	int block = 0;
	bool again = true;

	// Count "numbers" of numbers before we force a new line;
	// Just to increase readability
	const int block_size = 20;

	while (again)
	{
		// User inputs range of numbers and how many numbers to skip
		cout << "Untere Grenze: ";
		cin >> int_bot;

		cout << "Obere Grenze: ";
		cin >> int_top;

		cout << "Sprung: ";
		cin >> int_skip;

		// If bottom is greater than top, count backwards
		if (int_bot > int_top) {
			for (; int_bot >= int_top; int_bot = int_bot - int_skip) {

				// Print numbers to console
				cout << int_bot << " ";

				// New line to structure output
				block++;
				if (block == block_size) {
					cout << endl;
					block = 0;
				}
			}
		}

		// If top is greater than bottom count normally
		else {
			for (; int_bot <= int_top; int_bot = int_bot + int_skip) {

				// Print numbers to console
				cout << int_bot << " ";

				// New line to structure output
				block++;
				if (block == block_size) {
					cout << endl;
					block = 0;
				}
			}
		}

		block = 0;

		cout << endl;

		// Ask user if he/she wants to repeat
		cout << "Wiederholen? (0 = nein / 1 = ja): ";
		cin >> again;
	}

	return 0;
}
