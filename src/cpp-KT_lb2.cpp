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

	int i = 10;
	cout << "Ganzahl i = " << i << endl;

	double d = 33.3;
	cout << "Fließkommazahl d = " << d << endl;

	char c = 'k';
	cout << "Zeichen c = " << c << endl;

	string s = "s";
	cout << "String s = " << s << endl;

	cout << "//==============================================================================" << endl;
	cout << "// Aufgabe 2" << endl;
	cout << "//==============================================================================" << endl;

	bool hat_zwei_argumente;
	int a, b;

	hat_zwei_argumente = (argc > 2);

	if (hat_zwei_argumente) {

		a = stoi(argv[1]);
		b = stoi(argv[2]);

	}
	else {
		a = 10;
		b = 20;
	}

	cout << "Zahl #1: " << a << " Zahl #2: " << b << endl;

	cout << "//==============================================================================" << endl;
	cout << "// Aufgabe 3" << endl;
	cout << "//==============================================================================" << endl;

	int int_bot, int_top, int_skip;
	bool again = true;
	int block = 0;

	// Number of nunbers before cout << endl;
	const int block_size = 20;

	while (again)
	{
		// user inputs range of numbers
		cout << "Untere Grenze: ";
		cin >> int_bot;

		cout << "Obere Grenze: ";
		cin >> int_top;

		cout << "Sprung: ";
		cin >> int_skip;

		// if bottom is greater than top, count backwards
		if (int_bot > int_top) {
			for (; int_bot >= int_top; int_bot = int_bot - int_skip) {

						// print numbers to console
						cout << int_bot << " ";

						// new line to structure output
						block++;
						if (block == block_size) {
							cout << endl;
							block = 0;
						}
					}
		}
		// if top is greater than bottom count normally
		else {
			for (; int_bot <= int_top; int_bot = int_bot + int_skip) {

						// print numbers to console
						cout << int_bot << " ";

						// new line to structure output
						block++;
						if (block == block_size) {
							cout << endl;
							block = 0;
						}
					}
		}


		block = 0;

		cout << endl;
		cout << "Wiederholen? (0 = nein / 1 = ja): ";
		cin >> again;
	}

	return 0;
}
