#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <format>

using namespace std;

void greeting() {
	/*
	* Prints the author's name and the program's purpose.
	*/
	cout << "The author of this program is Ziuzin Yevhen.\n";
	cout << "This program calculates the expression from variant by given x. Variant 105.\n";
}
double input() {
	/*
	* Prompts the user to enter a double value for 'x'.
	* Throws invalid_argument if the input stream fails.
	* Returns the double value entered by the user.
	*/
	double x;
	cout << "Please, enter x from domain (x > -9, x != -4, x != 14): ";
	cin >> x;
	if (cin.fail()) {
		throw invalid_argument("wrong input");
	}
	cout << endl;
	return x;
}
bool is_in_domain(double x) {
	/*
	* Checks if the given 'x' value is within the expression's domain.
	*/
	return (x > -9) && (x != -4) && (x != 14);
}
double f(double x) {
	/*
	* Calculates and returns the value of the mathematical expression (Variant 105) by given x.
	*/
	return cos(28.0 / 52.0) - 19.0 * M_PI + 66.0 * exp(6.0 / ((x - 14.0) * (x + 4.0))) + 9.0 * atan(x - 7.0) - log(x + 9.0) / log(11.0);
}

int main() {	
	try {
		greeting();
		double x = input();
		cout << "***** do calculations ... ";
		double result;
		if (is_in_domain(x)) {
			result = f(x);
		}
		else {
			result = NAN;
		}
		cout << "done" << endl;
		cout << format("for x = {:.7f}", x) << endl;
		cout << "result = ";
		if (not isnan(result)) {
			cout << format("{:.8f}", result);
		}
		else {
			cout << "undefined";
		}
		cout << endl;
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}
	return 0;
}