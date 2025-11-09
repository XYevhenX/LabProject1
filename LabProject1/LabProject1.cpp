#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <format>

using namespace std;

void greeting() {
	cout << "The author of this program is Ziuzin Yevhen.\n";
	cout << "This program calculates the expression from variant by given x. Variant 105.\n";
}
double input() {
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
	return (x > -9) && (x != -4) && (x != 14);
}
double f(double x) {
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
		cout << format("for x = {:.5f}", x) << endl;
		cout << "result = ";
		if (not isnan(result)) {
			cout << format("{:.5f}", result);
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